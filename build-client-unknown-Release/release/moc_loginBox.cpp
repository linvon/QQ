/****************************************************************************
** Meta object code from reading C++ file 'loginBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/loginBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoginBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   10,    9,    9, 0x0a,
      35,    9,    9,    9, 0x0a,
      59,    9,    9,    9, 0x0a,
      83,    9,    9,    9, 0x0a,
     104,    9,    9,    9, 0x0a,
     116,    9,    9,    9, 0x0a,
     137,    9,    9,    9, 0x0a,
     150,    9,    9,    9, 0x0a,
     170,  168,    9,    9, 0x08,
     200,  168,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LoginBox[] = {
    "LoginBox\0\0replyKind\0result(qint32)\0"
    "checkConnectionButton()\0clickedRegisterButton()\0"
    "clickedLoginButton()\0setStatus()\0"
    "ServerDisconnected()\0initStatus()\0"
    "connectedStatus()\0e\0mousePressEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
};

void LoginBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoginBox *_t = static_cast<LoginBox *>(_o);
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 1: _t->checkConnectionButton(); break;
        case 2: _t->clickedRegisterButton(); break;
        case 3: _t->clickedLoginButton(); break;
        case 4: _t->setStatus(); break;
        case 5: _t->ServerDisconnected(); break;
        case 6: _t->initStatus(); break;
        case 7: _t->connectedStatus(); break;
        case 8: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LoginBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoginBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginBox,
      qt_meta_data_LoginBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoginBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoginBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoginBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginBox))
        return static_cast<void*>(const_cast< LoginBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoginBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
