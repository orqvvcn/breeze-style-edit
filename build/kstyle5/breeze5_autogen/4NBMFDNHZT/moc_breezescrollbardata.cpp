/****************************************************************************
** Meta object code from reading C++ file 'breezescrollbardata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../kstyle/animations/breezescrollbardata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breezescrollbardata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Breeze__ScrollBarData_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Breeze__ScrollBarData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Breeze__ScrollBarData_t qt_meta_stringdata_Breeze__ScrollBarData = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Breeze::ScrollBarData"
QT_MOC_LITERAL(1, 22, 16), // "clearAddLineRect"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "clearSubLineRect"
QT_MOC_LITERAL(4, 57, 14), // "addLineOpacity"
QT_MOC_LITERAL(5, 72, 14), // "subLineOpacity"
QT_MOC_LITERAL(6, 87, 13) // "grooveOpacity"

    },
    "Breeze::ScrollBarData\0clearAddLineRect\0"
    "\0clearSubLineRect\0addLineOpacity\0"
    "subLineOpacity\0grooveOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Breeze__ScrollBarData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,

       0        // eod
};

void Breeze::ScrollBarData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScrollBarData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clearAddLineRect(); break;
        case 1: _t->clearSubLineRect(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScrollBarData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->addLineOpacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->subLineOpacity(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->grooveOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScrollBarData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddLineOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSubLineOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setGrooveOpacity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Breeze::ScrollBarData::staticMetaObject = { {
    QMetaObject::SuperData::link<WidgetStateData::staticMetaObject>(),
    qt_meta_stringdata_Breeze__ScrollBarData.data,
    qt_meta_data_Breeze__ScrollBarData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Breeze::ScrollBarData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Breeze::ScrollBarData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Breeze__ScrollBarData.stringdata0))
        return static_cast<void*>(this);
    return WidgetStateData::qt_metacast(_clname);
}

int Breeze::ScrollBarData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WidgetStateData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
