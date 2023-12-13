/****************************************************************************
** Meta object code from reading C++ file 'tec_information.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zdjiaowu/tec_information.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tec_information.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tec_information_t {
    QByteArrayData data[13];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tec_information_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tec_information_t qt_meta_stringdata_tec_information = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tec_information"
QT_MOC_LITERAL(1, 16, 15), // "gettecInfo_slot"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 4), // "name"
QT_MOC_LITERAL(5, 41, 3), // "sex"
QT_MOC_LITERAL(6, 45, 3), // "age"
QT_MOC_LITERAL(7, 49, 27), // "professional_qualifications"
QT_MOC_LITERAL(8, 77, 5), // "phone"
QT_MOC_LITERAL(9, 83, 13), // "accountNumber"
QT_MOC_LITERAL(10, 97, 8), // "password"
QT_MOC_LITERAL(11, 106, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 128, 23) // "on_pushButton_2_clicked"

    },
    "tec_information\0gettecInfo_slot\0\0id\0"
    "name\0sex\0age\0professional_qualifications\0"
    "phone\0accountNumber\0password\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tec_information[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    8,   29,    2, 0x08 /* Private */,
      11,    0,   46,    2, 0x08 /* Private */,
      12,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tec_information::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tec_information *_t = static_cast<tec_information *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gettecInfo_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject tec_information::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tec_information.data,
      qt_meta_data_tec_information,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tec_information::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tec_information::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tec_information.stringdata0))
        return static_cast<void*>(const_cast< tec_information*>(this));
    return QWidget::qt_metacast(_clname);
}

int tec_information::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
