/****************************************************************************
** Meta object code from reading C++ file 'windows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Sistema_Ingressos/windows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[10];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "clicou_autenticar"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "clicou_conta"
QT_MOC_LITERAL(4, 43, 14), // "clicou_eventos"
QT_MOC_LITERAL(5, 58, 15), // "clicou_deslogar"
QT_MOC_LITERAL(6, 74, 16), // "on_conta_clicked"
QT_MOC_LITERAL(7, 91, 21), // "on_autenticar_clicked"
QT_MOC_LITERAL(8, 113, 18), // "on_eventos_clicked"
QT_MOC_LITERAL(9, 132, 18) // "on_status_alterado"

    },
    "MainWindow\0clicou_autenticar\0\0"
    "clicou_conta\0clicou_eventos\0clicou_deslogar\0"
    "on_conta_clicked\0on_autenticar_clicked\0"
    "on_eventos_clicked\0on_status_alterado"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicou_autenticar(); break;
        case 1: _t->clicou_conta(); break;
        case 2: _t->clicou_eventos(); break;
        case 3: _t->clicou_deslogar(); break;
        case 4: _t->on_conta_clicked(); break;
        case 5: _t->on_autenticar_clicked(); break;
        case 6: _t->on_eventos_clicked(); break;
        case 7: _t->on_status_alterado((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::clicou_autenticar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::clicou_conta)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::clicou_eventos)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::clicou_deslogar)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void MainWindow::clicou_autenticar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::clicou_conta()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::clicou_eventos()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::clicou_deslogar()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_Autenticacao_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Autenticacao_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Autenticacao_t qt_meta_stringdata_Autenticacao = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Autenticacao"
QT_MOC_LITERAL(1, 13, 12), // "clicou_logar"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "on_logar_clicked"
QT_MOC_LITERAL(4, 44, 21) // "on_notificar_situacao"

    },
    "Autenticacao\0clicou_logar\0\0on_logar_clicked\0"
    "on_notificar_situacao"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Autenticacao[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   34,    2, 0x08 /* Private */,
       4,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Autenticacao::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Autenticacao *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicou_logar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_logar_clicked(); break;
        case 2: _t->on_notificar_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Autenticacao::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Autenticacao::clicou_logar)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Autenticacao::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Autenticacao.data,
    qt_meta_data_Autenticacao,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Autenticacao::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Autenticacao::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Autenticacao.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Autenticacao::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Autenticacao::clicou_logar(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TelaUsuario_t {
    QByteArrayData data[34];
    char stringdata0[729];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelaUsuario_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelaUsuario_t qt_meta_stringdata_TelaUsuario = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TelaUsuario"
QT_MOC_LITERAL(1, 12, 19), // "clicou_ir_cadastrar"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "EstruturaUsuario"
QT_MOC_LITERAL(4, 50, 22), // "EstruturaCartaoCredito"
QT_MOC_LITERAL(5, 73, 22), // "clicou_excluir_usuario"
QT_MOC_LITERAL(6, 96, 24), // "clicou_confirmar_excluir"
QT_MOC_LITERAL(7, 121, 18), // "clicou_dados_conta"
QT_MOC_LITERAL(8, 140, 21), // "clicou_minhas_compras"
QT_MOC_LITERAL(9, 162, 19), // "clicou_meus_eventos"
QT_MOC_LITERAL(10, 182, 18), // "clicou_alterar_cpf"
QT_MOC_LITERAL(11, 201, 6), // "string"
QT_MOC_LITERAL(12, 208, 20), // "clicou_alterar_senha"
QT_MOC_LITERAL(13, 229, 21), // "clicou_alterar_cartao"
QT_MOC_LITERAL(14, 251, 27), // "clicou_alterar_codigoCartao"
QT_MOC_LITERAL(15, 279, 25), // "clicou_alterar_dataCartao"
QT_MOC_LITERAL(16, 305, 20), // "on_Cadastrar_clicked"
QT_MOC_LITERAL(17, 326, 27), // "on_voltar_cadastrar_clicked"
QT_MOC_LITERAL(18, 354, 23), // "on_ir_cadastrar_clicked"
QT_MOC_LITERAL(19, 378, 18), // "on_Excluir_clicked"
QT_MOC_LITERAL(20, 397, 25), // "on_Excluir_clicked_logado"
QT_MOC_LITERAL(21, 423, 16), // "on_Dados_clicked"
QT_MOC_LITERAL(22, 440, 18), // "on_Compras_clicked"
QT_MOC_LITERAL(23, 459, 18), // "on_Eventos_clicked"
QT_MOC_LITERAL(24, 478, 28), // "on_cancelar_exclusao_clicked"
QT_MOC_LITERAL(25, 507, 29), // "on_confirmar_exclusao_clicked"
QT_MOC_LITERAL(26, 537, 22), // "on_alterar_cpf_clicked"
QT_MOC_LITERAL(27, 560, 24), // "on_alterar_senha_clicked"
QT_MOC_LITERAL(28, 585, 25), // "on_alterar_cartao_clicked"
QT_MOC_LITERAL(29, 611, 25), // "on_alterar_codigo_clicked"
QT_MOC_LITERAL(30, 637, 23), // "on_alterar_data_clicked"
QT_MOC_LITERAL(31, 661, 23), // "on_voltar_conta_clicked"
QT_MOC_LITERAL(32, 685, 21), // "on_notificar_situacao"
QT_MOC_LITERAL(33, 707, 21) // "on_mostre_dados_conta"

    },
    "TelaUsuario\0clicou_ir_cadastrar\0\0"
    "EstruturaUsuario\0EstruturaCartaoCredito\0"
    "clicou_excluir_usuario\0clicou_confirmar_excluir\0"
    "clicou_dados_conta\0clicou_minhas_compras\0"
    "clicou_meus_eventos\0clicou_alterar_cpf\0"
    "string\0clicou_alterar_senha\0"
    "clicou_alterar_cartao\0clicou_alterar_codigoCartao\0"
    "clicou_alterar_dataCartao\0"
    "on_Cadastrar_clicked\0on_voltar_cadastrar_clicked\0"
    "on_ir_cadastrar_clicked\0on_Excluir_clicked\0"
    "on_Excluir_clicked_logado\0on_Dados_clicked\0"
    "on_Compras_clicked\0on_Eventos_clicked\0"
    "on_cancelar_exclusao_clicked\0"
    "on_confirmar_exclusao_clicked\0"
    "on_alterar_cpf_clicked\0on_alterar_senha_clicked\0"
    "on_alterar_cartao_clicked\0"
    "on_alterar_codigo_clicked\0"
    "on_alterar_data_clicked\0on_voltar_conta_clicked\0"
    "on_notificar_situacao\0on_mostre_dados_conta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaUsuario[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  159,    2, 0x06 /* Public */,
       5,    1,  164,    2, 0x06 /* Public */,
       6,    0,  167,    2, 0x06 /* Public */,
       7,    1,  168,    2, 0x06 /* Public */,
       8,    1,  171,    2, 0x06 /* Public */,
       9,    1,  174,    2, 0x06 /* Public */,
      10,    1,  177,    2, 0x06 /* Public */,
      12,    1,  180,    2, 0x06 /* Public */,
      13,    1,  183,    2, 0x06 /* Public */,
      14,    1,  186,    2, 0x06 /* Public */,
      15,    1,  189,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  192,    2, 0x08 /* Private */,
      17,    0,  193,    2, 0x08 /* Private */,
      18,    0,  194,    2, 0x08 /* Private */,
      19,    0,  195,    2, 0x08 /* Private */,
      20,    2,  196,    2, 0x08 /* Private */,
      21,    0,  201,    2, 0x08 /* Private */,
      22,    0,  202,    2, 0x08 /* Private */,
      23,    0,  203,    2, 0x08 /* Private */,
      24,    0,  204,    2, 0x08 /* Private */,
      25,    0,  205,    2, 0x08 /* Private */,
      26,    0,  206,    2, 0x08 /* Private */,
      27,    0,  207,    2, 0x08 /* Private */,
      28,    0,  208,    2, 0x08 /* Private */,
      29,    0,  209,    2, 0x08 /* Private */,
      30,    0,  210,    2, 0x08 /* Private */,
      31,    0,  211,    2, 0x08 /* Private */,
      32,    1,  212,    2, 0x0a /* Public */,
      33,    2,  215,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

       0        // eod
};

void TelaUsuario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaUsuario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicou_ir_cadastrar((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        case 1: _t->clicou_excluir_usuario((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clicou_confirmar_excluir(); break;
        case 3: _t->clicou_dados_conta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clicou_minhas_compras((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->clicou_meus_eventos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->clicou_alterar_cpf((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 7: _t->clicou_alterar_senha((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 8: _t->clicou_alterar_cartao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 9: _t->clicou_alterar_codigoCartao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 10: _t->clicou_alterar_dataCartao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 11: _t->on_Cadastrar_clicked(); break;
        case 12: _t->on_voltar_cadastrar_clicked(); break;
        case 13: _t->on_ir_cadastrar_clicked(); break;
        case 14: _t->on_Excluir_clicked(); break;
        case 15: _t->on_Excluir_clicked_logado((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 16: _t->on_Dados_clicked(); break;
        case 17: _t->on_Compras_clicked(); break;
        case 18: _t->on_Eventos_clicked(); break;
        case 19: _t->on_cancelar_exclusao_clicked(); break;
        case 20: _t->on_confirmar_exclusao_clicked(); break;
        case 21: _t->on_alterar_cpf_clicked(); break;
        case 22: _t->on_alterar_senha_clicked(); break;
        case 23: _t->on_alterar_cartao_clicked(); break;
        case 24: _t->on_alterar_codigo_clicked(); break;
        case 25: _t->on_alterar_data_clicked(); break;
        case 26: _t->on_voltar_conta_clicked(); break;
        case 27: _t->on_notificar_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_mostre_dados_conta((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TelaUsuario::*)(EstruturaUsuario , EstruturaCartaoCredito );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_ir_cadastrar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_excluir_usuario)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_confirmar_excluir)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_dados_conta)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_minhas_compras)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_meus_eventos)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_cpf)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_senha)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_cartao)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_codigoCartao)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_dataCartao)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TelaUsuario::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TelaUsuario.data,
    qt_meta_data_TelaUsuario,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TelaUsuario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaUsuario::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TelaUsuario.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TelaUsuario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void TelaUsuario::clicou_ir_cadastrar(EstruturaUsuario _t1, EstruturaCartaoCredito _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TelaUsuario::clicou_excluir_usuario(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TelaUsuario::clicou_confirmar_excluir()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TelaUsuario::clicou_dados_conta(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TelaUsuario::clicou_minhas_compras(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TelaUsuario::clicou_meus_eventos(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TelaUsuario::clicou_alterar_cpf(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TelaUsuario::clicou_alterar_senha(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TelaUsuario::clicou_alterar_cartao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TelaUsuario::clicou_alterar_codigoCartao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TelaUsuario::clicou_alterar_dataCartao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
