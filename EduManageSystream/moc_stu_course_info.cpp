/****************************************************************************
** Meta object code from reading C++ file 'stu_course_info.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zdjiaowu/stu_course_info.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stu_course_info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stu_course_info_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stu_course_info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stu_course_info_t qt_meta_stringdata_stu_course_info = {
    {
QT_MOC_LITERAL(0, 0, 15), // "stu_course_info"
QT_MOC_LITERAL(1, 16, 20), // "stu_course_info_slot"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "course_id"
QT_MOC_LITERAL(4, 48, 11), // "course_name"
QT_MOC_LITERAL(5, 60, 10), // "teacher_id"
QT_MOC_LITERAL(6, 71, 12), // "teacher_name"
QT_MOC_LITERAL(7, 84, 5) // "index"

    },
    "stu_course_info\0stu_course_info_slot\0"
    "\0course_id\0course_name\0teacher_id\0"
    "teacher_name\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stu_course_info[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,    7,

       0        // eod
};

void stu_course_info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        stu_course_info *_t = static_cast<stu_course_info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stu_course_info_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject stu_course_info::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_stu_course_info.data,
      qt_meta_data_stu_course_info,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *stu_course_info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stu_course_info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stu_course_info.stringdata0))
        return static_cast<void*>(const_cast< stu_course_info*>(this));
    return QWidget::qt_metacast(_clname);
}

int stu_course_info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
