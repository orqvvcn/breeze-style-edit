/****************************************************************************
** Meta object code from reading C++ file 'breezestackedwidgetdata.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kstyle/animations/breezestackedwidgetdata.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breezestackedwidgetdata.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t {};
} // unnamed namespace

template <> constexpr inline auto Breeze::StackedWidgetData::qt_create_metaobjectdata<qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Breeze::StackedWidgetData",
        "initializeAnimation",
        "",
        "animate",
        "finishAnimation",
        "targetDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'initializeAnimation'
        QtMocHelpers::SlotData<bool()>(1, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'animate'
        QtMocHelpers::SlotData<bool()>(3, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'finishAnimation'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'targetDestroyed'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StackedWidgetData, qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Breeze::StackedWidgetData::staticMetaObject = { {
    QMetaObject::SuperData::link<TransitionData::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t>.metaTypes,
    nullptr
} };

void Breeze::StackedWidgetData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StackedWidgetData *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
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

const QMetaObject *Breeze::StackedWidgetData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Breeze::StackedWidgetData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Breeze17StackedWidgetDataE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
