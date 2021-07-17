/****************************************************************************
** Meta object code from reading C++ file 'AdicionarClientes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AdicionarClientes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdicionarClientes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdicionarClientes_t {
    QByteArrayData data[9];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdicionarClientes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdicionarClientes_t qt_meta_stringdata_AdicionarClientes = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AdicionarClientes"
QT_MOC_LITERAL(1, 18, 21), // "on_btnIncluir_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_btnPesquisar_clicked"
QT_MOC_LITERAL(4, 65, 18), // "on_btnEdit_clicked"
QT_MOC_LITERAL(5, 84, 21), // "on_btnExcluir_clicked"
QT_MOC_LITERAL(6, 106, 28), // "on_tabCliente_currentChanged"
QT_MOC_LITERAL(7, 135, 5), // "index"
QT_MOC_LITERAL(8, 141, 26) // "on_btnMostrarLista_clicked"

    },
    "AdicionarClientes\0on_btnIncluir_clicked\0"
    "\0on_btnPesquisar_clicked\0on_btnEdit_clicked\0"
    "on_btnExcluir_clicked\0"
    "on_tabCliente_currentChanged\0index\0"
    "on_btnMostrarLista_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdicionarClientes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void AdicionarClientes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdicionarClientes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnIncluir_clicked(); break;
        case 1: _t->on_btnPesquisar_clicked(); break;
        case 2: _t->on_btnEdit_clicked(); break;
        case 3: _t->on_btnExcluir_clicked(); break;
        case 4: _t->on_tabCliente_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btnMostrarLista_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdicionarClientes::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdicionarClientes.data,
    qt_meta_data_AdicionarClientes,
    qt_static_metacall,
    nullptr,
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
