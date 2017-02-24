#ifndef LOGINBOX_H_
#define LOGINBOX_H_

#include "constant.h"
#include "links.h"
#include "register.h"
#include "window.h"
#include "ui_loginBox.h"

//打开程序时的登录窗口
class LoginBox : public QWidget
{
	Q_OBJECT
private:
	Ui::loginBoxForm ui;
	ServerNode serverNode;
	LoginInformation logInf;		//储存登录信息
	Links *link;
	//获取登录信息
	bool getString(QString &str, QLineEdit *edit, const QString &message);

	//读取和写入服务器地址和端口号信息
	void readSave();
	void writeSave();
    QPoint position;

public:
	LoginBox(QWidget *parent = 0);
	~LoginBox();

	public slots:
		void result(qint32 replyKind);
		void checkConnectionButton();
		void clickedRegisterButton();
		void clickedLoginButton();	

		//设置用户登录状态
        void setStatus();
		//和服务器断开连接了
		void ServerDisconnected();
		//初始化状态
		void initStatus();
		//连接建立后的状态
		void connectedStatus();

private slots:
        void mousePressEvent(QMouseEvent *e);
        void mouseMoveEvent(QMouseEvent * e);

};

#endif
