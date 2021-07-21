/****************************************************************************
** Meta object code from reading C++ file 'AdicionarPedido.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AdicionarPedido.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdicionarPedido.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdicionarPedido_t {
    const uint offsetsAndSize[32];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AdicionarPedido_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AdicionarPedido_t qt_meta_stringdata_AdicionarPedido = {
    {
QT_MOC_LITERAL(0, 15), // "AdicionarPedido"
QT_MOC_LITERAL(16, 30), // "on_btnPesquisarCliente_clicked"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 23), // "on_btnAdicionar_clicked"
QT_MOC_LITERAL(72, 21), // "on_btnExcluir_clicked"
QT_MOC_LITERAL(94, 29), // "on_btnFinalizarPedido_clicked"
QT_MOC_LITERAL(124, 29), // "on_btnPesquisarPedido_clicked"
QT_MOC_LITERAL(154, 26), // "on_btnMostrarLista_clicked"
QT_MOC_LITERAL(181, 27), // "on_btnMostrarPedido_clicked"
QT_MOC_LITERAL(209, 28), // "on_btnPesquisarPesqC_clicked"
QT_MOC_LITERAL(238, 26), // "on_btnMostrarPesqC_clicked"
QT_MOC_LITERAL(265, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(297, 5), // "index"
QT_MOC_LITERAL(303, 35), // "on_lineEditSearchProduto_text..."
QT_MOC_LITERAL(339, 4), // "arg1"
QT_MOC_LITERAL(344, 27) // "on_tabPedido_currentChanged"

    },
    "AdicionarPedido\0on_btnPesquisarCliente_clicked\0"
    "\0on_btnAdicionar_clicked\0on_btnExcluir_clicked\0"
    "on_btnFinalizarPedido_clicked\0"
    "on_btnPesquisarPedido_clicked\0"
    "on_btnMostrarLista_clicked\0"
    "on_btnMostrarPedido_clicked\0"
    "on_btnPesquisarPesqC_clicked\0"
    "on_btnMostrarPesqC_clicked\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_lineEditSearchProduto_textEdited\0"
    "arg1\0on_tabPedido_currentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdicionarPedido[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    0 /* Private */,
       3,    0,   87,    2, 0x08,    1 /* Private */,
       4,    0,   88,    2, 0x08,    2 /* Private */,
       5,    0,   89,    2, 0x08,    3 /* Private */,
       6,    0,   90,    2, 0x08,    4 /* Private */,
       7,    0,   91,    2, 0x08,    5 /* Private */,
       8,    0,   92,    2, 0x08,    6 /* Private */,
       9,    0,   93,    2, 0x08,    7 /* Private */,
      10,    0,   94,    2, 0x08,    8 /* Private */,
      11,    1,   95,    2, 0x08,    9 /* Private */,
      13,    1,   98,    2, 0x08,   11 /* Private */,
      15,    1,  101,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void AdicionarPedido::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdicionarPedido *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnPesquisarCliente_clicked(); break;
        case 1: _t->on_btnAdicionar_clicked(); break;
        case 2: _t->on_btnExcluir_clicked(); break;
        case 3: _t->on_btnFinalizarPedido_clicked(); break;
        case 4: _t->on_btnPesquisarPedido_clicked(); break;
        case 5: _t->on_btnMostrarLista_clicked(); break;
        case 6: _t->on_btnMostrarPedido_clicked(); break;
        case 7: _t->on_btnPesquisarPesqC_clicked(); break;
        case 8: _t->on_btnMostrarPesqC_clicked(); break;
        case 9: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_lineEditSearchProduto_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_tabPedido_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AdicionarPedido::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdicionarPedido.offsetsAndSize,
    qt_meta_data_AdicionarPedido,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AdicionarPedido_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
