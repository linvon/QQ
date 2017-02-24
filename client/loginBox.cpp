#include <QtGui/QWidget>
#include "constant.h"
#include "loginBox.h"
#include "window.h"

LoginBox::LoginBox(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
    Qt::WindowFlags flag = Qt::FramelessWindowHint;


	setWindowFlags(flag);
    setFixedSize(430, 330);
    setWindowTitle("Login");

    QPalette pal;
    QPixmap pixmap( QDir::toNativeSeparators(":/pictures/qqbag.png") );
	pal.setBrush(QPalette::Window, QBrush(pixmap));
    setPalette(pal);
    ui.accountLineEdit->setPlaceholderText(tr("Please input account"));
    ui.passwordLineEdit->setPlaceholderText(tr("Please input password"));
	ui.passwordLineEdit->setEchoMode(QLineEdit::Password);
	logInf.status = ONLINE;
	initStatus();
    //readSave();


	link = new Links(serverNode, this);
    checkConnectionButton();
    /*//设置登录状态栏
	ui.comboBox->insertItem(0, tr("online"));
	ui.comboBox->insertItem(1, tr("talk with me"));
	ui.comboBox->insertItem(2, tr("busy"));
	ui.comboBox->insertItem(3, tr("leave"));
	ui.comboBox->insertItem(4, tr("disturb"));
    ui.comboBox->insertItem(5, tr("stealth"));*/

//	ui.portLineEdit->setValidator(new QIntValidator(1, 65535, this));

	//连接信号－糟
    connect(ui.registerPushButton, SIGNAL(clicked()), this, SLOT(clickedRegisterButton()) );
    connect(ui.loginPushButton, SIGNAL(clicked()),	this, SLOT(clickedLoginButton()) );
    //connect(ui.comboBox, SIGNAL(activated(const QString &)),this, SLOT(setStatus(const QString &)));
    connect(ui.checkBox,SIGNAL(clicked()),this,SLOT(setStatus()));
    connect(ui.minsizeButton, SIGNAL(clicked()), this, SLOT(showMinimized()) );
    connect(ui.closeButton, SIGNAL(clicked()), this, SLOT(close()) );
    //connect(ui.connectionPushButton, SIGNAL(clicked()),this, SLOT(checkConnectionButton()));
    connect(link, SIGNAL(newReplySignal(qint32)), this, SLOT(result(qint32)));
    connect(link, SIGNAL(connectionFailedSignal()),	this, SLOT(initStatus()));
    connect(link, SIGNAL(disconnectedSignal()),	this, SLOT(ServerDisconnected()));

}

LoginBox::~LoginBox()
{

}

void LoginBox::mousePressEvent(QMouseEvent *e){
    position =e->globalPos() -  this->pos();

}
void LoginBox::mouseMoveEvent(QMouseEvent *e){
    this->move(e->globalPos() - position);
}

void LoginBox::clickedRegisterButton()
{
	//打开注册框
    serverNode.ipAddress = "127.0.0.1";
    serverNode.port = 666;
	RegisterBox *reg = new RegisterBox(link, NULL);
	reg->show();
}

void LoginBox::clickedLoginButton()
{
	if(ui.accountLineEdit->text().isEmpty())
	{
		QMessageBox::critical(this, tr("Error"), 
			tr("The account line can not be empty"));
		return;
	}
    if(ui.passwordLineEdit->text().isEmpty())
	{
		QMessageBox::critical(this, tr("Error"), 
            tr("The password line can not be empty"));
		return;
	}

	logInf.account = ui.accountLineEdit->text();
	logInf.password = ui.passwordLineEdit->text();
	link->loginRequest(logInf);

	setWindowTitle("logining...");
	ui.loginPushButton->setEnabled(false);
}

void LoginBox::result(qint32 replyKind)
{
	if(CHECK_CONNECTION == replyKind)
	{
		connectedStatus();
		return;
	}

	//登录成功以后，打开主界面
	else if(LOGIN_SUCCESS == replyKind)
	{
        serverNode.ipAddress = "127.0.0.1";
        serverNode.port = 666;
		QVector<FriendInformation> friendsVec;
		friendsVec = link->getFriends();
		Window *win = new Window(serverNode, friendsVec, NULL);
		win->show();
		close();
	}
	else if(LOGIN_NO_ACCOUNT == replyKind)
	{
		QMessageBox::critical(this, tr("Error"),
			tr("Sorry, no such user, Please try again"));
	}
	else if(LOGIN_WRONG_PWD == replyKind)
	{
		QMessageBox::critical(this, tr("Error"),
			tr("Sorry, the password is wrong, Please try again"));
	}
	else if(HAVE_LOGINED == replyKind)
	{
		QMessageBox::critical(this, tr("Error"),
			tr("Sorry, the user have logined, Please try again"));
	}
	ui.loginPushButton->setEnabled(true);
	setWindowTitle( tr("haoIM client") );
}

void LoginBox::setStatus()
{
    if(ui.checkBox->isChecked())
        logInf.status = STEALTH;
    else
        logInf.status = ONLINE;

}

void LoginBox::checkConnectionButton()
{
	//用正则表达式来保证输入的是合法的服务器地址
    /*QRegExp regExp;
	regExp.setPattern("\\b((?:(?:25[0-5]|2[0-4]\\d|[01]?\\d?\\d)\\.)"
		"{3}(?:25[0-5]|2[0-4]\\d|[01]?\\d?\\d))\\b");
	if(!regExp.exactMatch(ui.ipLineEdit->text()))
	{
		QMessageBox::critical(this, tr("Error"), 
			tr("Ip address's Format is wrong. Please try again"));
		return;
	}

	if(ui.portLineEdit->text().isEmpty())
	{
		QMessageBox::critical(this, tr("Error"), 
			tr("The server port line can not be empty"));
		return;
    }*/

    serverNode.ipAddress = "127.0.0.1";
    serverNode.port = 666;
    //writeSave();

	link->setIpAddress(serverNode);
    //ui.statusLabel->setText(tr("Connecting..."));
	link->checkConnectionRequest();
}

void LoginBox::initStatus()
{
    //ui.connectionPushButton->setEnabled(true);
	ui.registerPushButton->setEnabled(false);
	ui.loginPushButton->setEnabled(false);
	ui.accountLineEdit->setEnabled(false);
	ui.passwordLineEdit->setEnabled(false);
    //ui.statusLabel->setText(tr("Please check connection before logined"));
    //ui.connectionPushButton->setDefault(true);
}

void LoginBox::connectedStatus()
{
    //ui.connectionPushButton->setEnabled(false);
	ui.registerPushButton->setEnabled(true);
	ui.loginPushButton->setEnabled(true);
    //ui.ipLineEdit->setReadOnly(true);
    //ui.portLineEdit->setReadOnly(true);
	ui.accountLineEdit->setEnabled(true);
	ui.passwordLineEdit->setEnabled(true);
    //ui.statusLabel->setText(tr("Please login or register now"));
	ui.loginPushButton->setDefault(true);
}

void LoginBox::ServerDisconnected()
{
	QMessageBox::critical(this, tr("error"), 
		tr("Because of network problems, the client is disconnected with the server"
		"Please connect again"));
	initStatus();
}

/*void LoginBox::readSave()
{
	QString filename = QString("./save/serverIp");
	filename = QDir::toNativeSeparators(filename);

	QFile file(filename);
	//如果不能打开储存文件的话，就直接跳过这一步
	if( !file.open(QIODevice::ReadOnly) )
	{
		ui.ipLineEdit->setText("0.0.0.0");
		ui.portLineEdit->setText("0");
		return;
	}

	QDataStream in(&file);
	in.setVersion(QDataStream::Qt_4_0);
	in >> serverNode.ipAddress >> serverNode.port;
	ui.ipLineEdit->setText(serverNode.ipAddress);
	ui.portLineEdit->setText(QString::number(serverNode.port));
	file.close();
}

void LoginBox::writeSave()
{
	QDir tempDir;
	if(!tempDir.exists("save"))
		tempDir.mkdir("save");

	QString filename = QString("./save/serverIp");
	filename = QDir::toNativeSeparators(filename);
	QFile file(filename);
	if( !file.open(QIODevice::WriteOnly) )
		return;

	QDataStream out(&file);
	out.setVersion(QDataStream::Qt_4_0);
	out << serverNode.ipAddress << serverNode.port;
	file.close();
}*/

