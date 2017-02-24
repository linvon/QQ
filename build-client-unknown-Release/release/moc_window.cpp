/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Window[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      28,   18,    7,    7, 0x0a,
      43,    7,    7,    7, 0x0a,
      68,    7,    7,    7, 0x0a,
      93,    7,    7,    7, 0x0a,
     118,    7,    7,    7, 0x0a,
     143,  139,    7,    7, 0x0a,
     171,  169,    7,    7, 0x0a,
     206,  188,    7,    7, 0x0a,
     257,  245,    7,    7, 0x0a,
     286,  279,    7,    7, 0x0a,
     335,    7,    7,    7, 0x0a,
     354,    7,    7,    7, 0x0a,
     365,    7,    7,    7, 0x0a,
     378,    7,    7,    7, 0x08,
     404,    7,    7,    7, 0x08,
     431,  429,    7,    7, 0x08,
     461,  429,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Window[] = {
    "Window\0\0onclose()\0replyKind\0result(qint32)\0"
    "clickedAddFriendButton()\0"
    "clickedChangeInfButton()\0"
    "clickedChangePwdButton()\0clickedAboutButton()\0"
    "mes\0sendRoomsMessage(Message)\0n\0"
    "changeState(int)\0avaNum,name,about\0"
    "changeInformation(int,QString,QString)\0"
    "peerAccount\0removeFriend(QString)\0"
    "reason\0iconActivated(QSystemTrayIcon::ActivationReason)\0"
    "linkDisconnected()\0iconstar()\0"
    "timesstart()\0on_btn_QQFriend_clicked()\0"
    "on_btn_QQGroup_clicked()\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Window *_t = static_cast<Window *>(_o);
        switch (_id) {
        case 0: _t->onclose(); break;
        case 1: _t->result((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 2: _t->clickedAddFriendButton(); break;
        case 3: _t->clickedChangeInfButton(); break;
        case 4: _t->clickedChangePwdButton(); break;
        case 5: _t->clickedAboutButton(); break;
        case 6: _t->sendRoomsMessage((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 7: _t->changeState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changeInformation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->removeFriend((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 11: _t->linkDisconnected(); break;
        case 12: _t->iconstar(); break;
        case 13: _t->timesstart(); break;
        case 14: _t->on_btn_QQFriend_clicked(); break;
        case 15: _t->on_btn_QQGroup_clicked(); break;
        case 16: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 17: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Window::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Window::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Window,
      qt_meta_data_Window, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Window::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Window))
        return static_cast<void*>(const_cast< Window*>(this));
    return QWidget::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
