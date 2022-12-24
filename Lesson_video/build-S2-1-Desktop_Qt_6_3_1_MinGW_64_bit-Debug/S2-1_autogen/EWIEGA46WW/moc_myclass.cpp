/****************************************************************************
** Meta object code from reading C++ file 'myclass.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../S2-1/myclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myclass_t {
    const uint offsetsAndSize[26];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_myclass_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_myclass_t qt_meta_stringdata_myclass = {
    {
QT_MOC_LITERAL(0, 7), // "myclass"
QT_MOC_LITERAL(8, 5), // "para1"
QT_MOC_LITERAL(14, 6), // "Title1"
QT_MOC_LITERAL(21, 5), // "Para2"
QT_MOC_LITERAL(27, 6), // "Title2"
QT_MOC_LITERAL(34, 15), // "priorityChanged"
QT_MOC_LITERAL(50, 0), // ""
QT_MOC_LITERAL(51, 17), // "myclass::Priority"
QT_MOC_LITERAL(69, 8), // "priority"
QT_MOC_LITERAL(78, 8), // "Priority"
QT_MOC_LITERAL(87, 4), // "high"
QT_MOC_LITERAL(92, 6), // "middle"
QT_MOC_LITERAL(99, 3) // "low"

    },
    "myclass\0para1\0Title1\0Para2\0Title2\0"
    "priorityChanged\0\0myclass::Priority\0"
    "priority\0Priority\0high\0middle\0low"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myclass[] = {

 // content:
      10,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       1,   27, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   24,    6, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0001510b, uint(0), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    3,   37,

 // enum data: key, value
      10, uint(myclass::high),
      11, uint(myclass::middle),
      12, uint(myclass::low),

       0        // eod
};

void myclass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myclass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->priorityChanged((*reinterpret_cast< std::add_pointer_t<myclass::Priority>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myclass::*)(myclass::Priority );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myclass::priorityChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<myclass *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Priority*>(_v) = _t->priority(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<myclass *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPriority(*reinterpret_cast< Priority*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject myclass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myclass.offsetsAndSize,
    qt_meta_data_myclass,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_myclass_t
, QtPrivate::TypeAndForceComplete<Priority, std::true_type>, QtPrivate::TypeAndForceComplete<myclass, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<myclass::Priority, std::false_type>



>,
    nullptr
} };


const QMetaObject *myclass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myclass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myclass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myclass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void myclass::priorityChanged(myclass::Priority _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
