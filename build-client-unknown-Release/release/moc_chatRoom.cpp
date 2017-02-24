/****************************************************************************
** Meta object code from reading C++ file 'chatRoom.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/chatRoom.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatRoom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Chatroom[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      31,   27,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   54,    9,    9, 0x08,
      86,   54,    9,    9, 0x08,
     115,    9,    9,    9, 0x0a,
     135,    9,    9,    9, 0x0a,
     156,    9,    9,    9, 0x0a,
     177,    9,    9,    9, 0x0a,
     199,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Chatroom[] = {
    "Chatroom\0\0roomQuitSignal()\0mes\0"
    "messageSignal(Message)\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
    "clickedSendButton()\0clickedColorButton()\0"
    "clickedFontsButton()\0clickedRecordButton()\0"
    "inputTextChanged()\0"
};

void Chatroom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Chatroom *_t = static_cast<Chatroom *>(_o);
        switch (_id) {
        case 0: _t->roomQuitSignal(); break;
        case 1: _t->messageSignal((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->clickedSendButton(); break;
        case 5: _t->clickedColorButton(); break;
        case 6: _t->clickedFontsButton(); break;
        case 7: _t->clickedRecordButton(); break;
        case 8: _t->inputTextChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Chatroom::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Chatroom::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Chatroom,
      qt_meta_data_Chatroom, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Chatroom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Chatroom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Chatroom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Chatroom))
        return static_cast<void*>(const_cast< Chatroom*>(this));
    return QWidget::qt_metacast(_clname);
}

int Chatroom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Chatroom::roomQuitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Chatroom::messageSignal(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
