/****************************************************************************
** Meta object code from reading C++ file 'stu_information.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zdjiaowu/stu_information.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stu_information.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stu_information_t {
    QByteArrayData data[15];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stu_information_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stu_information_t qt_meta_stringdata_stu_information = {
    {
QT_MOC_LITERAL(0, 0, 15), // "stu_information"
QT_MOC_LITERAL(1, 16, 16), // "getuserInfo_slot"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "id"
QT_MOC_LITERAL(4, 37, 4), // "name"
QT_MOC_LITERAL(5, 42, 3), // "sex"
QT_MOC_LITERAL(6, 46, 3), // "age"
QT_MOC_LITERAL(7, 50, 3), // "cid"
QT_MOC_LITERAL(8, 54, 6), // "credit"
QT_MOC_LITERAL(9, 61, 13), // "accountNumber"
QT_MOC_LITERAL(10, 75, 8), // "password"
QT_MOC_LITERAL(11, 84, 10), // "class_name"
QT_MOC_LITERAL(12, 95, 15), // "speciality_name"
QT_MOC_LITERAL(13, 111, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 133, 23) // "on_pushButton_2_clicked"

    },
    "stu_information\0getuserInfo_slot\0\0id\0"
    "name\0sex\0age\0cid\0credit\0accountNumber\0"
    "password\0class_name\0speciality_name\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stu_information[] = {

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
       1,   10,   29,    2, 0x08 /* Private */,
      13,    0,   50,    2, 0x08 /* Private */,
      14,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stu_information::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        stu_information *_t = static_cast<stu_information *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getuserInfo_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject stu_information::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_stu_information.data,
      qt_meta_data_stu_information,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *stu_information::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stu_information::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stu_information.stringdata0))
        return static_cast<void*>(const_cast< stu_information*>(this));
    return QWidget::qt_metacast(_clname);
}

int stu_information::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
