/****************************************************************************
** Meta object code from reading C++ file 'breezestackedwidgetdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../kstyle/animations/breezestackedwidgetdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breezestackedwidgetdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Breeze__StackedWidgetData_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Breeze__StackedWidgetData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Breeze__StackedWidgetData_t qt_meta_stringdata_Breeze__StackedWidgetData = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Breeze::StackedWidgetData"
QT_MOC_LITERAL(1, 26, 19), // "initializeAnimation"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 7), // "animate"
QT_MOC_LITERAL(4, 55, 15), // "finishAnimation"
QT_MOC_LITERAL(5, 71, 15) // "targetDestroyed"

    },
    "Breeze::StackedWidgetData\0initializeAnimation\0"
    "\0animate\0finishAnimation\0targetDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Breeze__StackedWidgetData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Breeze::StackedWidgetData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StackedWidgetData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->initializeAnimation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->animate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->finishAnimation(); break;
        case 3: _t->targetDestroyed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Breeze::StackedWidgetData::staticMetaObject = { {
    QMetaObject::SuperData::link<TransitionData::staticMetaObject>(),
    qt_meta_stringdata_Breeze__StackedWidgetData.data,
    qt_meta_data_Breeze__StackedWidgetData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Breeze::StackedWidgetData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Breeze::StackedWidgetData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Breeze__StackedWidgetData.stringdata0))
        return static_cast<void*>(this);
    return TransitionData::qt_metacast(_clname);
}

int Breeze::StackedWidgetData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransitionData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
