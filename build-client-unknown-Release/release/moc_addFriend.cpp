/****************************************************************************
** Meta object code from reading C++ file 'addFriend.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/addFriend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addFriend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddFriendBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      42,   32,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddFriendBox[] = {
    "AddFriendBox\0\0clickedOKButton()\0"
    "replyKind\0result(qint32)\0"
};

void AddFriendBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddFriendBox *_t = static_cast<AddFriendBox *>(_o);
        switch (_id) {
        case 0: _t->clickedOKButton(); break;
        case 1: _t->result((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddFriendBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddFriendBox::staticMetaObject = {
    { &tempBox::staticMetaObject, qt_meta_stringdata_AddFriendBox,
      qt_meta_data_AddFriendBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddFriendBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddFriendBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddFriendBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddFriendBox))
        return static_cast<void*>(const_cast< AddFriendBox*>(this));
    return tempBox::qt_metacast(_clname);
}

int AddFriendBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tempBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
