/****************************************************************************
** Meta object code from reading C++ file 'informationBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/informationBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'informationBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InformationBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      36,   15,   15,   15, 0x0a,
      54,   15,   15,   15, 0x0a,
      74,   15,   15,   15, 0x0a,
      94,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InformationBox[] = {
    "InformationBox\0\0clickedQuitButton()\0"
    "clickedOKButton()\0clickedPastButton()\0"
    "clickedNextButton()\0clickedHelpButton()\0"
};

void InformationBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InformationBox *_t = static_cast<InformationBox *>(_o);
        switch (_id) {
        case 0: _t->clickedQuitButton(); break;
        case 1: _t->clickedOKButton(); break;
        case 2: _t->clickedPastButton(); break;
        case 3: _t->clickedNextButton(); break;
        case 4: _t->clickedHelpButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData InformationBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InformationBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InformationBox,
      qt_meta_data_InformationBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InformationBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InformationBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InformationBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InformationBox))
        return static_cast<void*>(const_cast< InformationBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int InformationBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
