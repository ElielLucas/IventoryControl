/****************************************************************************
** Meta object code from reading C++ file 'AdicionarProdutos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AdicionarProdutos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdicionarProdutos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdicionarProdutos_t {
    QByteArrayData data[12];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdicionarProdutos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdicionarProdutos_t qt_meta_stringdata_AdicionarProdutos = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AdicionarProdutos"
QT_MOC_LITERAL(1, 18, 21), // "on_btnIncluir_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_btnPesquisar_clicked"
QT_MOC_LITERAL(4, 65, 18), // "on_btnEdit_clicked"
QT_MOC_LITERAL(5, 84, 21), // "on_btnExcluir_clicked"
QT_MOC_LITERAL(6, 106, 26), // "on_btnMostrarLista_clicked"
QT_MOC_LITERAL(7, 133, 29), // "on_tabProdutos_currentChanged"
QT_MOC_LITERAL(8, 163, 5), // "index"
QT_MOC_LITERAL(9, 169, 31), // "on_twProdutos_itemDoubleClicked"
QT_MOC_LITERAL(10, 201, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(11, 219, 4) // "item"

    },
    "AdicionarProdutos\0on_btnIncluir_clicked\0"
    "\0on_btnPesquisar_clicked\0on_btnEdit_clicked\0"
    "on_btnExcluir_clicked\0on_btnMostrarLista_clicked\0"
    "on_tabProdutos_currentChanged\0index\0"
    "on_twProdutos_itemDoubleClicked\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdicionarProdutos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void AdicionarProdutos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdicionarProdutos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnIncluir_clicked(); break;
        case 1: _t->on_btnPesquisar_clicked(); break;
        case 2: _t->on_btnEdit_clicked(); break;
        case 3: _t->on_btnExcluir_clicked(); break;
        case 4: _t->on_btnMostrarLista_clicked(); break;
        case 5: _t->on_tabProdutos_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_twProdutos_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdicionarProdutos::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdicionarProdutos.data,
    qt_meta_data_AdicionarProdutos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdicionarProdutos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdicionarProdutos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdicionarProdutos.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdicionarProdutos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
