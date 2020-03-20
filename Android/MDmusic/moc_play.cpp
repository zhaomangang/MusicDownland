/****************************************************************************
** Meta object code from reading C++ file 'play.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "play.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'play.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Play_t {
    QByteArrayData data[21];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Play_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Play_t qt_meta_stringdata_Play = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Play"
QT_MOC_LITERAL(1, 5, 7), // "playend"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 11), // "playChanged"
QT_MOC_LITERAL(4, 26, 7), // "playOne"
QT_MOC_LITERAL(5, 34, 9), // "removeOne"
QT_MOC_LITERAL(6, 44, 5), // "begin"
QT_MOC_LITERAL(7, 50, 8), // "downland"
QT_MOC_LITERAL(8, 59, 8), // "slotNext"
QT_MOC_LITERAL(9, 68, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(10, 100, 8), // "position"
QT_MOC_LITERAL(11, 109, 15), // "on_play_clicked"
QT_MOC_LITERAL(12, 125, 13), // "freshViewList"
QT_MOC_LITERAL(13, 139, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(14, 163, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(15, 187, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 209, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(17, 233, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(18, 257, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(19, 281, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(20, 305, 23) // "on_pushButton_9_clicked"

    },
    "Play\0playend\0\0playChanged\0playOne\0"
    "removeOne\0begin\0downland\0slotNext\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_play_clicked\0freshViewList\0"
    "on_pushButton_4_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Play[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  110,    2, 0x08 /* Private */,
       9,    1,  111,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    0,  122,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Play::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Play *_t = static_cast<Play *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playend(); break;
        case 1: _t->playChanged(); break;
        case 2: _t->playOne(); break;
        case 3: _t->removeOne(); break;
        case 4: _t->begin(); break;
        case 5: _t->downland(); break;
        case 6: _t->slotNext(); break;
        case 7: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_play_clicked(); break;
        case 9: _t->freshViewList(); break;
        case 10: _t->on_pushButton_4_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_7_clicked(); break;
        case 14: _t->on_pushButton_6_clicked(); break;
        case 15: _t->on_pushButton_5_clicked(); break;
        case 16: _t->on_pushButton_8_clicked(); break;
        case 17: _t->on_pushButton_9_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Play::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Play::playend)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Play::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Play::playChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Play::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Play::playOne)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Play::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Play::removeOne)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Play::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Play::begin)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Play::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Play::downland)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Play::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Play.data,
      qt_meta_data_Play,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Play::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Play::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Play.stringdata0))
        return static_cast<void*>(const_cast< Play*>(this));
    return QWidget::qt_metacast(_clname);
}

int Play::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Play::playend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Play::playChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Play::playOne()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Play::removeOne()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Play::begin()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Play::downland()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
