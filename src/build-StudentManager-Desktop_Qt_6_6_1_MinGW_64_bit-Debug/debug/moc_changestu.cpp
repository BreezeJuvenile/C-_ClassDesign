/****************************************************************************
** Meta object code from reading C++ file 'changestu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StudentManager/changestu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changestu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSchangestuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSchangestuENDCLASS = QtMocHelpers::stringData(
    "changestu",
    "on_btncancel_clicked",
    "",
    "on_btnok_clicked",
    "on_stus_clicked",
    "on_stum_clicked",
    "on_stul_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSchangestuENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[10];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSchangestuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSchangestuENDCLASS_t qt_meta_stringdata_CLASSchangestuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "changestu"
        QT_MOC_LITERAL(10, 20),  // "on_btncancel_clicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 16),  // "on_btnok_clicked"
        QT_MOC_LITERAL(49, 15),  // "on_stus_clicked"
        QT_MOC_LITERAL(65, 15),  // "on_stum_clicked"
        QT_MOC_LITERAL(81, 15)   // "on_stul_clicked"
    },
    "changestu",
    "on_btncancel_clicked",
    "",
    "on_btnok_clicked",
    "on_stus_clicked",
    "on_stum_clicked",
    "on_stul_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSchangestuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject changestu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSchangestuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSchangestuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSchangestuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<changestu, std::true_type>,
        // method 'on_btncancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnok_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stum_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stul_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void changestu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changestu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btncancel_clicked(); break;
        case 1: _t->on_btnok_clicked(); break;
        case 2: _t->on_stus_clicked(); break;
        case 3: _t->on_stum_clicked(); break;
        case 4: _t->on_stul_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *changestu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changestu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSchangestuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int changestu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
