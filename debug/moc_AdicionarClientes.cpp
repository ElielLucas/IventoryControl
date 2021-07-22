/****************************************************************************
** Meta object code from reading C++ file 'AdicionarClientes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AdicionarClientes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdicionarClientes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdicionarClientes_t {
    const uint offsetsAndSize[26];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AdicionarClientes_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AdicionarClientes_t qt_meta_stringdata_AdicionarClientes = {
    {
QT_MOC_LITERAL(0, 17), // "AdicionarClientes"
QT_MOC_LITERAL(18, 28), // "on_tabCliente_currentChanged"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 5), // "index"
QT_MOC_LITERAL(54, 28), // "on_pushButtonIncluir_clicked"
QT_MOC_LITERAL(83, 36), // "on_comboBoxOrdem_currentIndex..."
QT_MOC_LITERAL(120, 35), // "on_lineEditSearchCliente_text..."
QT_MOC_LITERAL(156, 4), // "arg1"
QT_MOC_LITERAL(161, 30), // "on_twCliente_itemDoubleClicked"
QT_MOC_LITERAL(192, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(210, 4), // "item"
QT_MOC_LITERAL(215, 25), // "on_pushButtonEdit_clicked"
QT_MOC_LITERAL(241, 28) // "on_pushButtonExcluir_clicked"

    },
    "AdicionarClientes\0on_tabCliente_currentChanged\0"
    "\0index\0on_pushButtonIncluir_clicked\0"
    "on_comboBoxOrdem_currentIndexChanged\0"
    "on_lineEditSearchCliente_textEdited\0"
    "arg1\0on_twCliente_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0on_pushButtonEdit_clicked\0"
    "on_pushButtonExcluir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdicionarClientes[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    0 /* Private */,
       4,    0,   59,    2, 0x08,    2 /* Private */,
       5,    0,   60,    2, 0x08,    3 /* Private */,
       6,    1,   61,    2, 0x08,    4 /* Private */,
       8,    1,   64,    2, 0x08,    6 /* Private */,
      11,    0,   67,    2, 0x08,    8 /* Private */,
      12,    0,   68,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdicionarClientes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdicionarClientes *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tabCliente_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonIncluir_clicked(); break;
        case 2: _t->on_comboBoxOrdem_currentIndexChanged(); break;
        case 3: _t->on_lineEditSearchCliente_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_twCliente_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonEdit_clicked(); break;
        case 6: _t->on_pushButtonExcluir_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject AdicionarClientes::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdicionarClientes.offsetsAndSize,
    qt_meta_data_AdicionarClientes,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AdicionarClientes_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AdicionarClientes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdicionarClientes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdicionarClientes.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdicionarClientes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
