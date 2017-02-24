/****************************************************************************
** Meta object code from reading C++ file 'friendbutton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/friendbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friendbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FriendButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   13,   13,   13, 0x0a,
      76,   13,   13,   13, 0x0a,
     103,   13,   13,   13, 0x0a,
     128,   13,   13,   13, 0x0a,
     150,   13,   13,   13, 0x0a,
     172,   13,   13,   13, 0x0a,
     197,  187,   13,   13, 0x0a,
     226,  219,   13,   13, 0x0a,
     248,  244,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FriendButton[] = {
    "FriendButton\0\0peerAccount\0"
    "deleteFriendSignal(QString)\0"
    "clickedFriendButton()\0clickedRightButton(QPoint)\0"
    "clickedShowInformation()\0clickedChangeRemark()\0"
    "clickedRemoveFriend()\0chatRoomQuit()\0"
    "newRemark\0changeRemark(QString)\0status\0"
    "changeStatus(int)\0mes\0dealMessage(Message)\0"
};

void FriendButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FriendButton *_t = static_cast<FriendButton *>(_o);
        switch (_id) {
        case 0: _t->deleteFriendSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clickedFriendButton(); break;
        case 2: _t->clickedRightButton((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->clickedShowInformation(); break;
        case 4: _t->clickedChangeRemark(); break;
        case 5: _t->clickedRemoveFriend(); break;
        case 6: _t->chatRoomQuit(); break;
        case 7: _t->changeRemark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->changeStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->dealMessage((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FriendButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FriendButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_FriendButton,
      qt_meta_data_FriendButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FriendButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FriendButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FriendButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FriendButton))
        return static_cast<void*>(const_cast< FriendButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int FriendButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FriendButton::deleteFriendSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
