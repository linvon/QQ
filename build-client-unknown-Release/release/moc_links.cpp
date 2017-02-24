/****************************************************************************
** Meta object code from reading C++ file 'links.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/links.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'links.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Links[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,    7,    6,    6, 0x05,
      40,    6,    6,    6, 0x05,
      65,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,    6,    6,    6, 0x0a,
     100,    6,    6,    6, 0x0a,
     113,    6,    6,    6, 0x0a,
     146,  134,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Links[] = {
    "Links\0\0replyKind\0newReplySignal(qint32)\0"
    "connectionFailedSignal()\0disconnectedSignal()\0"
    "sendRequest()\0readResult()\0"
    "ServerDisconnected()\0socketError\0"
    "displayError(QAbstractSocket::SocketError)\0"
};

void Links::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Links *_t = static_cast<Links *>(_o);
        switch (_id) {
        case 0: _t->newReplySignal((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 1: _t->connectionFailedSignal(); break;
        case 2: _t->disconnectedSignal(); break;
        case 3: _t->sendRequest(); break;
        case 4: _t->readResult(); break;
        case 5: _t->ServerDisconnected(); break;
        case 6: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Links::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Links::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Links,
      qt_meta_data_Links, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Links::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Links::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Links::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Links))
        return static_cast<void*>(const_cast< Links*>(this));
    return QObject::qt_metacast(_clname);
}

int Links::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Links::newReplySignal(qint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Links::connectionFailedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Links::disconnectedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
