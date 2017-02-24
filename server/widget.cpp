#include "widget.h"

Widget::Widget(QWidget *parent) 
: QWidget(parent)
{
    setWindowTitle("Server");
    resize(170, 100);

	label = new QLabel;  
	quitButton = new QPushButton(tr("Quit"));
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(label);
	layout->addWidget(quitButton);
	setLayout(layout);

	server = new Server(this);

	QString ipAddress;  
    /*QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
	for (int i = 0; i < ipAddressesList.size(); ++i) 
	{  
		if (ipAddressesList.at(i) != QHostAddress::LocalHost &&  
			ipAddressesList.at(i).toIPv4Address())
		{  
			ipAddress = ipAddressesList.at(i).toString();  
			break;  
		}  
    }  */
	if (ipAddress.isEmpty())  
		ipAddress = QHostAddress(QHostAddress::LocalHost).toString(); 

    label->setText(tr("The server is running \n\nIP: %1\nport: %2\n\n").arg(ipAddress).arg(server->serverPort()));
    connect(quitButton, SIGNAL(clicked()),this, SLOT(close()));
}

Widget::~Widget()
{

}
