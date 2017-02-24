/****************************************************************************
** Meta object code from reading C++ file 'tempBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/tempBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tempBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tempBox[] = {

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
       9,    8,    8,    8, 0x0a,
      27,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tempBox[] = {
    "tempBox\0\0clickedOKButton()\0"
    "clickedCloseButton()\0"
};

void tempBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tempBox *_t = static_cast<tempBox *>(_o);
        switch (_id) {
        case 0: _t->clickedOKButton(); break;
        case 1: _t->clickedCloseButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tempBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tempBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tempBox,
      qt_meta_data_tempBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tempBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tempBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tempBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tempBox))
        return static_cast<void*>(const_cast< tempBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int tempBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
