/****************************************************************************
** Meta object code from reading C++ file 'breezestyle.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/breezestyle.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breezestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6Breeze5StyleE_t {};
} // unnamed namespace

template <> constexpr inline auto Breeze::Style::qt_create_metaobjectdata<qt_meta_tag_ZN6Breeze5StyleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Breeze::Style",
        "X-KDE-CustomElements",
        "true",
        "configurationChanged",
        "",
        "globalConfigurationChanged",
        "type",
        "arg",
        "loadGlobalAnimationSettings",
        "standardIconImplementation",
        "StandardPixmap",
        "const QStyleOption*",
        "const QWidget*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'configurationChanged'
        QtMocHelpers::SlotData<void()>(3, 4, QMC::AccessProtected, QMetaType::Void),
        // Slot 'globalConfigurationChanged'
        QtMocHelpers::SlotData<void(int, int)>(5, 4, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'loadGlobalAnimationSettings'
        QtMocHelpers::SlotData<void()>(8, 4, QMC::AccessProtected, QMetaType::Void),
        // Slot 'standardIconImplementation'
        QtMocHelpers::SlotData<QIcon(StandardPixmap, const QStyleOption *, const QWidget *) const>(9, 4, QMC::AccessProtected, QMetaType::QIcon, {{
            { 0x80000000 | 10, 4 }, { 0x80000000 | 11, 4 }, { 0x80000000 | 12, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Style, qt_meta_tag_ZN6Breeze5StyleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Breeze::Style::staticMetaObject = { {
    QMetaObject::SuperData::link<ParentStyleClass::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Breeze5StyleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Breeze5StyleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6Breeze5StyleE_t>.metaTypes,
    nullptr
} };

void Breeze::Style::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Style *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configurationChanged(); break;
        case 1: _t->globalConfigurationChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->loadGlobalAnimationSettings(); break;
        case 3: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< std::add_pointer_t<StandardPixmap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const QStyleOption*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const QWidget*>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Breeze::Style::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Breeze::Style::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Breeze5StyleE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
