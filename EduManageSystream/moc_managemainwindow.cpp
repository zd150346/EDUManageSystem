/****************************************************************************
** Meta object code from reading C++ file 'managemainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../zdjiaowu/managemainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managemainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_manageMainwindow_t {
    QByteArrayData data[14];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageMainwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageMainwindow_t qt_meta_stringdata_manageMainwindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "manageMainwindow"
QT_MOC_LITERAL(1, 17, 14), // "man_tec_signal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "getadmUser_slot"
QT_MOC_LITERAL(4, 49, 2), // "id"
QT_MOC_LITERAL(5, 52, 4), // "name"
QT_MOC_LITERAL(6, 57, 13), // "accountNumber"
QT_MOC_LITERAL(7, 71, 8), // "password"
QT_MOC_LITERAL(8, 80, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 102, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 126, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 150, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(12, 174, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(13, 198, 23) // "on_pushButton_7_clicked"

    },
    "manageMainwindow\0man_tec_signal\0\0"
    "getadmUser_slot\0id\0name\0accountNumber\0"
    "password\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_7_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageMainwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   55,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void manageMainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageMainwindow *_t = static_cast<manageMainwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->man_tec_signal(); break;
        case 1: _t->getadmUser_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_pushButton_7_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (manageMainwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageMainwindow::man_tec_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject manageMainwindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_manageMainwindow.data,
      qt_meta_data_manageMainwindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *manageMainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageMainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_manageMainwindow.stringdata0))
        return static_cast<void*>(const_cast< manageMainwindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int manageMainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void manageMainwindow::man_tec_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
