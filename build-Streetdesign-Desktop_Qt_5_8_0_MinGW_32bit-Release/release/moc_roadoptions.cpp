/****************************************************************************
** Meta object code from reading C++ file 'roadoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../master 4/roadoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roadoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Roadoptions_t {
    QByteArrayData data[13];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Roadoptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Roadoptions_t qt_meta_stringdata_Roadoptions = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Roadoptions"
QT_MOC_LITERAL(1, 12, 11), // "pressDelete"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "on_FlowEast_clicked"
QT_MOC_LITERAL(4, 45, 19), // "on_FlowWest_clicked"
QT_MOC_LITERAL(5, 65, 20), // "on_FlowSouth_clicked"
QT_MOC_LITERAL(6, 86, 20), // "on_FlowNorth_clicked"
QT_MOC_LITERAL(7, 107, 24), // "on_ReplaceButton_clicked"
QT_MOC_LITERAL(8, 132, 23), // "on_DeleteButton_clicked"
QT_MOC_LITERAL(11, 199, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(12, 232, 5) // "value"

    },
    "Roadoptions\0pressDelete\0\0on_FlowEast_clicked\0"
    "on_FlowWest_clicked\0on_FlowSouth_clicked\0"
    "on_FlowNorth_clicked\0on_ReplaceButton_clicked\0"
    "on_DeleteButton_clicked\0"
    "action\0on_horizontalSlider_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Roadoptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void Roadoptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Roadoptions *_t = static_cast<Roadoptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressDelete(); break;
        case 1: _t->on_FlowEast_clicked(); break;
        case 2: _t->on_FlowWest_clicked(); break;
        case 3: _t->on_FlowSouth_clicked(); break;
        case 4: _t->on_FlowNorth_clicked(); break;
        case 5: _t->on_ReplaceButton_clicked(); break;
        case 6: _t->on_DeleteButton_clicked(); break;
        case 8: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Roadoptions::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Roadoptions::pressDelete)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Roadoptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Roadoptions.data,
      qt_meta_data_Roadoptions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Roadoptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Roadoptions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Roadoptions.stringdata0))
        return static_cast<void*>(const_cast< Roadoptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int Roadoptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Roadoptions::pressDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
