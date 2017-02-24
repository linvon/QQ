#ifndef INPUTTEXTEDIT_H_
#define INPUTTEXTEDIT_H_

#include "constant.h"

//自定义输入栏
//其实只是重载了keyPressEvent
class InputTextEdit : public QTextEdit
{
	Q_OBJECT
protected:
	void keyPressEvent(QKeyEvent *event);

public:
	InputTextEdit(QWidget *parent=0);
	~InputTextEdit();

signals:
	void sendSignal();

};

#endif