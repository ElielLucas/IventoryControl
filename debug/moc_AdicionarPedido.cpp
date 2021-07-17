/****************************************************************************
** Meta object code from reading C++ file 'AdicionarPedido.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AdicionarPedido.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdicionarPedido.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdicionarPedido_t {
    QByteArrayData data[14];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdicionarPedido_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdicionarPedido_t qt_meta_stringdata_AdicionarPedido = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AdicionarPedido"
QT_MOC_LITERAL(1, 16, 30), // "on_btnPesquisarCliente_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 24), // "on_btnNovoPedido_clicked"
QT_MOC_LITERAL(4, 73, 23), // "on_btnAdicionar_clicked"
QT_MOC_LITERAL(5, 97, 21), // "on_btnExcluir_clicked"
QT_MOC_LITERAL(6, 119, 29), // "on_btnFinalizarPedido_clicked"
QT_MOC_LITERAL(7, 149, 29), // "on_btnPesquisarPedido_clicked"
QT_MOC_LITERAL(8, 179, 26), // "on_btnMostrarLista_clicked"
QT_MOC_LITERAL(9, 206, 27), // "on_btnMostrarPedido_clicked"
QT_MOC_LITERAL(10, 234, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(11, 262, 5), // "index"
QT_MOC_LITERAL(12, 268, 28), // "on_btnPesquisarPesqC_clicked"
QT_MOC_LITERAL(13, 297, 26) // "on_btnMostrarPesqC_clicked"

    },
    "AdicionarPedido\0on_btnPesquisarCliente_clicked\0"
    "\0on_btnNovoPedido_clicked\0"
    "on_btnAdicionar_clicked\0on_btnExcluir_clicked\0"
    "on_btnFinalizarPedido_clicked\0"
    "on_btnPesquisarPedido_clicked\0"
    "on_btnMostrarLista_clicked\0"
    "on_btnMostrarPedido_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_btnPesquisarPesqC_clicked\0"
    "on_btnMostrarPesqC_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdicionarPedido[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdicionarPedido::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdicionarPedido *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnPesquisarCliente_clicked(); break;
        case 1: _t->on_btnNovoPedido_clicked(); break;
        case 2: _t->on_btnAdicionar_clicked(); break;
        case 3: _t->on_btnExcluir_clicked(); break;
        case 4: _t->on_btnFinalizarPedido_clicked(); break;
        case 5: _t->on_btnPesquisarPedido_clicked(); break;
        case 6: _t->on_btnMostrarLista_clicked(); break;
        case 7: _t->on_btnMostrarPedido_clicked(); break;
        case 8: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_btnPesquisarPesqC_clicked(); break;
        case 10: _t->on_btnMostrarPesqC_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdicionarPedido::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdicionarPedido.data,
    qt_meta_data_AdicionarPedido,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdicionarPedido::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdicionarPedido::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdicionarPedido.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdicionarPedido::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
