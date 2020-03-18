/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MusicDowland/mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[21];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 10), // "beiginnext"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 18), // "oneProcessFinished"
QT_MOC_LITERAL(4, 42, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 57, 21), // "on_sortButton_clicked"
QT_MOC_LITERAL(6, 79, 11), // "showToolTip"
QT_MOC_LITERAL(7, 91, 5), // "index"
QT_MOC_LITERAL(8, 97, 20), // "on_setbutton_clicked"
QT_MOC_LITERAL(9, 118, 18), // "on_downall_clicked"
QT_MOC_LITERAL(10, 137, 8), // "slotNext"
QT_MOC_LITERAL(11, 146, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 168, 16), // "on_pause_clicked"
QT_MOC_LITERAL(13, 185, 20), // "on_valum_sliderMoved"
QT_MOC_LITERAL(14, 206, 8), // "position"
QT_MOC_LITERAL(15, 215, 14), // "on_jin_pressed"
QT_MOC_LITERAL(16, 230, 14), // "on_tui_pressed"
QT_MOC_LITERAL(17, 245, 14), // "on_jin_clicked"
QT_MOC_LITERAL(18, 260, 14), // "on_jin_toggled"
QT_MOC_LITERAL(19, 275, 7), // "checked"
QT_MOC_LITERAL(20, 283, 14) // "on_tui_clicked"

    },
    "MainWidget\0beiginnext\0\0oneProcessFinished\0"
    "QNetworkReply*\0on_sortButton_clicked\0"
    "showToolTip\0index\0on_setbutton_clicked\0"
    "on_downall_clicked\0slotNext\0"
    "on_pushButton_clicked\0on_pause_clicked\0"
    "on_valum_sliderMoved\0position\0"
    "on_jin_pressed\0on_tui_pressed\0"
    "on_jin_clicked\0on_jin_toggled\0checked\0"
    "on_tui_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   90,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    1,  108,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beiginnext(); break;
        case 1: _t->oneProcessFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->on_sortButton_clicked(); break;
        case 3: _t->showToolTip((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_setbutton_clicked(); break;
        case 5: _t->on_downall_clicked(); break;
        case 6: _t->slotNext(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pause_clicked(); break;
        case 9: _t->on_valum_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_jin_pressed(); break;
        case 11: _t->on_tui_pressed(); break;
        case 12: _t->on_jin_clicked(); break;
        case 13: _t->on_jin_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_tui_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWidget::beiginnext)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(const_cast< MainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::beiginnext()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
