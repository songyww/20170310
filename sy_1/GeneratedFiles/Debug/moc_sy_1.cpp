/****************************************************************************
** Meta object code from reading C++ file 'sy_1.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sy_1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sy_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_sy_1[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      18,    5,    5,    5, 0x0a,
      34,    5,   30,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_sy_1[] = {
    "sy_1\0\0OpenFile1()\0OpenFile2()\0int\0"
    "Surf()\0"
};

void sy_1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        sy_1 *_t = static_cast<sy_1 *>(_o);
        switch (_id) {
        case 0: _t->OpenFile1(); break;
        case 1: _t->OpenFile2(); break;
        case 2: { int _r = _t->Surf();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData sy_1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject sy_1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_sy_1,
      qt_meta_data_sy_1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &sy_1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *sy_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *sy_1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sy_1))
        return static_cast<void*>(const_cast< sy_1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int sy_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
