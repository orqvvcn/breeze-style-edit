/****************************************************************************
** Meta object code from reading C++ file 'breezestyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../kstyle/breezestyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breezestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Breeze__Style_t {
    QByteArrayData data[13];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Breeze__Style_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Breeze__Style_t qt_meta_stringdata_Breeze__Style = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Breeze::Style"
QT_MOC_LITERAL(1, 14, 20), // "X-KDE-CustomElements"
QT_MOC_LITERAL(2, 35, 4), // "true"
QT_MOC_LITERAL(3, 40, 20), // "configurationChanged"
QT_MOC_LITERAL(4, 61, 0), // ""
QT_MOC_LITERAL(5, 62, 26), // "globalConfigurationChanged"
QT_MOC_LITERAL(6, 89, 4), // "type"
QT_MOC_LITERAL(7, 94, 3), // "arg"
QT_MOC_LITERAL(8, 98, 27), // "loadGlobalAnimationSettings"
QT_MOC_LITERAL(9, 126, 26), // "standardIconImplementation"
QT_MOC_LITERAL(10, 153, 14), // "StandardPixmap"
QT_MOC_LITERAL(11, 168, 19), // "const QStyleOption*"
QT_MOC_LITERAL(12, 188, 14) // "const QWidget*"

    },
    "Breeze::Style\0X-KDE-CustomElements\0"
    "true\0configurationChanged\0\0"
    "globalConfigurationChanged\0type\0arg\0"
    "loadGlobalAnimationSettings\0"
    "standardIconImplementation\0StandardPixmap\0"
    "const QStyleOption*\0const QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Breeze__Style[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x09 /* Protected */,
       5,    2,   37,    4, 0x09 /* Protected */,
       8,    0,   42,    4, 0x09 /* Protected */,
       9,    3,   43,    4, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::QIcon, 0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 12,    4,    4,    4,

       0        // eod
};

void Breeze::Style::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Style *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configurationChanged(); break;
        case 1: _t->globalConfigurationChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->loadGlobalAnimationSettings(); break;
        case 3: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])),(*reinterpret_cast< const QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Breeze::Style::staticMetaObject = { {
    QMetaObject::SuperData::link<ParentStyleClass::staticMetaObject>(),
    qt_meta_stringdata_Breeze__Style.data,
    qt_meta_data_Breeze__Style,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Breeze::Style::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Breeze::Style::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Breeze__Style.stringdata0))
        return static_cast<void*>(this);
    return ParentStyleClass::qt_metacast(_clname);
}

int Breeze::Style::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ParentStyleClass::qt_metacall(_c, _id, _a);
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
