#include <QtGui/QApplication>
#include <QSystemSemaphore>
#include "loginBox.h"
#include "links.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	//加载翻译文件
	QTranslator *myTranslator = new QTranslator; 
    myTranslator->load(":/font/client.qm");
	app.installTranslator(myTranslator);

	QTranslator *chTranslator = new QTranslator; 
    chTranslator->load(":/font/qt_zh_CN.qm");
	app.installTranslator(chTranslator); 

	LoginBox *box = new LoginBox;
	box->show();
	return app.exec();
}
