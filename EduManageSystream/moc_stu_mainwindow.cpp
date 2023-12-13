/****************************************************************************
** Meta object code from reading C++ file 'stu_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zdjiaowu/stu_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stu_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stu_mainwindow_t {
    QByteArrayData data[25];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stu_mainwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stu_mainwindow_t qt_meta_stringdata_stu_mainwindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "stu_mainwindow"
QT_MOC_LITERAL(1, 15, 17), // "stu_grade_signals"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "name"
QT_MOC_LITERAL(4, 39, 5), // "grade"
QT_MOC_LITERAL(5, 45, 5), // "index"
QT_MOC_LITERAL(6, 51, 18), // "getuserInfo_signal"
QT_MOC_LITERAL(7, 70, 2), // "id"
QT_MOC_LITERAL(8, 73, 3), // "sex"
QT_MOC_LITERAL(9, 77, 3), // "age"
QT_MOC_LITERAL(10, 81, 3), // "cid"
QT_MOC_LITERAL(11, 85, 6), // "credit"
QT_MOC_LITERAL(12, 92, 13), // "accountNumber"
QT_MOC_LITERAL(13, 106, 8), // "password"
QT_MOC_LITERAL(14, 115, 10), // "class_name"
QT_MOC_LITERAL(15, 126, 15), // "speciality_name"
QT_MOC_LITERAL(16, 142, 22), // "stu_course_info_signal"
QT_MOC_LITERAL(17, 165, 9), // "course_id"
QT_MOC_LITERAL(18, 175, 11), // "course_name"
QT_MOC_LITERAL(19, 187, 10), // "teacher_id"
QT_MOC_LITERAL(20, 198, 12), // "teacher_name"
QT_MOC_LITERAL(21, 211, 11), // "getuserSlot"
QT_MOC_LITERAL(22, 223, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(23, 245, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(24, 269, 23) // "on_pushButton_3_clicked"

    },
    "stu_mainwindow\0stu_grade_signals\0\0"
    "name\0grade\0index\0getuserInfo_signal\0"
    "id\0sex\0age\0cid\0credit\0accountNumber\0"
    "password\0class_name\0speciality_name\0"
    "stu_course_info_signal\0course_id\0"
    "course_name\0teacher_id\0teacher_name\0"
    "getuserSlot\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stu_mainwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,   10,   56,    2, 0x06 /* Public */,
      16,    5,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    8,   88,    2, 0x08 /* Private */,
      22,    0,  105,    2, 0x08 /* Private */,
      23,    0,  106,    2, 0x08 /* Private */,
      24,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    3,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::Int,   17,   18,   19,   20,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    7,    3,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stu_mainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        stu_mainwindow *_t = static_cast<stu_mainwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stu_grade_signals((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->getuserInfo_signal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10]))); break;
        case 2: _t->stu_course_info_signal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->getuserSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (stu_mainwindow::*_t)(QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&stu_mainwindow::stu_grade_signals)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (stu_mainwindow::*_t)(int , QString , QString , int , int , int , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&stu_mainwindow::getuserInfo_signal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (stu_mainwindow::*_t)(int , QString , int , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&stu_mainwindow::stu_course_info_signal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject stu_mainwindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_stu_mainwindow.data,
      qt_meta_data_stu_mainwindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *stu_mainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stu_mainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stu_mainwindow.stringdata0))
        return static_cast<void*>(const_cast< stu_mainwindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int stu_mainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void stu_mainwindow::stu_grade_signals(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void stu_mainwindow::getuserInfo_signal(int _t1, QString _t2, QString _t3, int _t4, int _t5, int _t6, QString _t7, QString _t8, QString _t9, QString _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void stu_mainwindow::stu_course_info_signal(int _t1, QString _t2, int _t3, QString _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
