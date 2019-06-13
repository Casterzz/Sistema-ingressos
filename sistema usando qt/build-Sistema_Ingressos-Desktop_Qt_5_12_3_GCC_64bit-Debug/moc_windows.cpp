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
    QByteArrayData data[69];
    char stringdata0[1622];
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
QT_MOC_LITERAL(16, 305, 26), // "clicou_tabela_meus_eventos"
QT_MOC_LITERAL(17, 332, 30), // "clicou_tabela_vendas_efetuadas"
QT_MOC_LITERAL(18, 363, 18), // "CodigoApresentacao"
QT_MOC_LITERAL(19, 382, 26), // "clicou_alterar_nome_evento"
QT_MOC_LITERAL(20, 409, 28), // "clicou_alterar_classe_evento"
QT_MOC_LITERAL(21, 438, 27), // "clicou_alterar_faixa_evento"
QT_MOC_LITERAL(22, 466, 28), // "clicou_alterar_cidade_evento"
QT_MOC_LITERAL(23, 495, 28), // "clicou_alterar_estado_evento"
QT_MOC_LITERAL(24, 524, 20), // "on_Cadastrar_clicked"
QT_MOC_LITERAL(25, 545, 27), // "on_voltar_cadastrar_clicked"
QT_MOC_LITERAL(26, 573, 23), // "on_ir_cadastrar_clicked"
QT_MOC_LITERAL(27, 597, 18), // "on_Excluir_clicked"
QT_MOC_LITERAL(28, 616, 25), // "on_Excluir_clicked_logado"
QT_MOC_LITERAL(29, 642, 16), // "on_Dados_clicked"
QT_MOC_LITERAL(30, 659, 18), // "on_Compras_clicked"
QT_MOC_LITERAL(31, 678, 18), // "on_Eventos_clicked"
QT_MOC_LITERAL(32, 697, 28), // "on_cancelar_exclusao_clicked"
QT_MOC_LITERAL(33, 726, 29), // "on_confirmar_exclusao_clicked"
QT_MOC_LITERAL(34, 756, 22), // "on_alterar_cpf_clicked"
QT_MOC_LITERAL(35, 779, 24), // "on_alterar_senha_clicked"
QT_MOC_LITERAL(36, 804, 25), // "on_alterar_cartao_clicked"
QT_MOC_LITERAL(37, 830, 25), // "on_alterar_codigo_clicked"
QT_MOC_LITERAL(38, 856, 23), // "on_alterar_data_clicked"
QT_MOC_LITERAL(39, 880, 23), // "on_voltar_conta_clicked"
QT_MOC_LITERAL(40, 904, 25), // "on_voltar_compras_clicked"
QT_MOC_LITERAL(41, 930, 30), // "on_voltar_meus_eventos_clicked"
QT_MOC_LITERAL(42, 961, 38), // "on_tabelaMeusEventos_cellDoub..."
QT_MOC_LITERAL(43, 1000, 3), // "row"
QT_MOC_LITERAL(44, 1004, 6), // "column"
QT_MOC_LITERAL(45, 1011, 34), // "on_voltar_vendas_efetuadas_cl..."
QT_MOC_LITERAL(46, 1046, 42), // "on_tabelaVendasEfetuadas_cell..."
QT_MOC_LITERAL(47, 1089, 29), // "on_voltar_compradores_clicked"
QT_MOC_LITERAL(48, 1119, 26), // "on_criarNovoEvento_clicked"
QT_MOC_LITERAL(49, 1146, 33), // "on_cancelar_editar_evento_cli..."
QT_MOC_LITERAL(50, 1180, 34), // "on_confirmar_editar_evento_cl..."
QT_MOC_LITERAL(51, 1215, 30), // "on_alterar_nome_evento_clicked"
QT_MOC_LITERAL(52, 1246, 32), // "on_alterar_classe_evento_clicked"
QT_MOC_LITERAL(53, 1279, 31), // "on_alterar_faixa_evento_clicked"
QT_MOC_LITERAL(54, 1311, 32), // "on_alterar_cidade_evento_clicked"
QT_MOC_LITERAL(55, 1344, 32), // "on_alterar_estado_evento_clicked"
QT_MOC_LITERAL(56, 1377, 21), // "on_notificar_situacao"
QT_MOC_LITERAL(57, 1399, 21), // "on_mostre_dados_conta"
QT_MOC_LITERAL(58, 1421, 19), // "on_mostre_ingressos"
QT_MOC_LITERAL(59, 1441, 14), // "list<Ingresso>"
QT_MOC_LITERAL(60, 1456, 18), // "list<Apresentacao>"
QT_MOC_LITERAL(61, 1475, 12), // "list<Evento>"
QT_MOC_LITERAL(62, 1488, 22), // "on_mostre_meus_eventos"
QT_MOC_LITERAL(63, 1511, 19), // "on_vendas_efetuadas"
QT_MOC_LITERAL(64, 1531, 16), // "on_editar_evento"
QT_MOC_LITERAL(65, 1548, 15), // "EstruturaEvento"
QT_MOC_LITERAL(66, 1564, 25), // "on_status_exclusao_evento"
QT_MOC_LITERAL(67, 1590, 21), // "on_mostre_compradores"
QT_MOC_LITERAL(68, 1612, 9) // "list<CPF>"

    },
    "TelaUsuario\0clicou_ir_cadastrar\0\0"
    "EstruturaUsuario\0EstruturaCartaoCredito\0"
    "clicou_excluir_usuario\0clicou_confirmar_excluir\0"
    "clicou_dados_conta\0clicou_minhas_compras\0"
    "clicou_meus_eventos\0clicou_alterar_cpf\0"
    "string\0clicou_alterar_senha\0"
    "clicou_alterar_cartao\0clicou_alterar_codigoCartao\0"
    "clicou_alterar_dataCartao\0"
    "clicou_tabela_meus_eventos\0"
    "clicou_tabela_vendas_efetuadas\0"
    "CodigoApresentacao\0clicou_alterar_nome_evento\0"
    "clicou_alterar_classe_evento\0"
    "clicou_alterar_faixa_evento\0"
    "clicou_alterar_cidade_evento\0"
    "clicou_alterar_estado_evento\0"
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
    "on_voltar_compras_clicked\0"
    "on_voltar_meus_eventos_clicked\0"
    "on_tabelaMeusEventos_cellDoubleClicked\0"
    "row\0column\0on_voltar_vendas_efetuadas_clicked\0"
    "on_tabelaVendasEfetuadas_cellDoubleClicked\0"
    "on_voltar_compradores_clicked\0"
    "on_criarNovoEvento_clicked\0"
    "on_cancelar_editar_evento_clicked\0"
    "on_confirmar_editar_evento_clicked\0"
    "on_alterar_nome_evento_clicked\0"
    "on_alterar_classe_evento_clicked\0"
    "on_alterar_faixa_evento_clicked\0"
    "on_alterar_cidade_evento_clicked\0"
    "on_alterar_estado_evento_clicked\0"
    "on_notificar_situacao\0on_mostre_dados_conta\0"
    "on_mostre_ingressos\0list<Ingresso>\0"
    "list<Apresentacao>\0list<Evento>\0"
    "on_mostre_meus_eventos\0on_vendas_efetuadas\0"
    "on_editar_evento\0EstruturaEvento\0"
    "on_status_exclusao_evento\0"
    "on_mostre_compradores\0list<CPF>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaUsuario[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  294,    2, 0x06 /* Public */,
       5,    1,  299,    2, 0x06 /* Public */,
       6,    0,  302,    2, 0x06 /* Public */,
       7,    1,  303,    2, 0x06 /* Public */,
       8,    1,  306,    2, 0x06 /* Public */,
       9,    1,  309,    2, 0x06 /* Public */,
      10,    1,  312,    2, 0x06 /* Public */,
      12,    1,  315,    2, 0x06 /* Public */,
      13,    1,  318,    2, 0x06 /* Public */,
      14,    1,  321,    2, 0x06 /* Public */,
      15,    1,  324,    2, 0x06 /* Public */,
      16,    2,  327,    2, 0x06 /* Public */,
      17,    3,  332,    2, 0x06 /* Public */,
      19,    2,  339,    2, 0x06 /* Public */,
      20,    2,  344,    2, 0x06 /* Public */,
      21,    2,  349,    2, 0x06 /* Public */,
      22,    2,  354,    2, 0x06 /* Public */,
      23,    2,  359,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  364,    2, 0x08 /* Private */,
      25,    0,  365,    2, 0x08 /* Private */,
      26,    0,  366,    2, 0x08 /* Private */,
      27,    0,  367,    2, 0x08 /* Private */,
      28,    2,  368,    2, 0x08 /* Private */,
      29,    0,  373,    2, 0x08 /* Private */,
      30,    0,  374,    2, 0x08 /* Private */,
      31,    0,  375,    2, 0x08 /* Private */,
      32,    0,  376,    2, 0x08 /* Private */,
      33,    0,  377,    2, 0x08 /* Private */,
      34,    0,  378,    2, 0x08 /* Private */,
      35,    0,  379,    2, 0x08 /* Private */,
      36,    0,  380,    2, 0x08 /* Private */,
      37,    0,  381,    2, 0x08 /* Private */,
      38,    0,  382,    2, 0x08 /* Private */,
      39,    0,  383,    2, 0x08 /* Private */,
      40,    0,  384,    2, 0x08 /* Private */,
      41,    0,  385,    2, 0x08 /* Private */,
      42,    2,  386,    2, 0x08 /* Private */,
      45,    0,  391,    2, 0x08 /* Private */,
      46,    2,  392,    2, 0x08 /* Private */,
      47,    0,  397,    2, 0x08 /* Private */,
      48,    0,  398,    2, 0x08 /* Private */,
      49,    0,  399,    2, 0x08 /* Private */,
      50,    0,  400,    2, 0x08 /* Private */,
      51,    0,  401,    2, 0x08 /* Private */,
      52,    0,  402,    2, 0x08 /* Private */,
      53,    0,  403,    2, 0x08 /* Private */,
      54,    0,  404,    2, 0x08 /* Private */,
      55,    0,  405,    2, 0x08 /* Private */,
      56,    1,  406,    2, 0x0a /* Public */,
      57,    2,  409,    2, 0x0a /* Public */,
      58,    3,  414,    2, 0x0a /* Public */,
      62,    1,  421,    2, 0x0a /* Public */,
      63,    2,  424,    2, 0x0a /* Public */,
      64,    2,  429,    2, 0x0a /* Public */,
      66,    1,  434,    2, 0x0a /* Public */,
      67,    2,  437,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 18,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   43,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   43,   44,
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
    QMetaType::Void, 0x80000000 | 59, 0x80000000 | 60, 0x80000000 | 61,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 61,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 60,    2,    2,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 60,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 68, 0x80000000 | 18,    2,    2,

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
        case 11: _t->clicou_tabela_meus_eventos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->clicou_tabela_vendas_efetuadas((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[3]))); break;
        case 13: _t->clicou_alterar_nome_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 14: _t->clicou_alterar_classe_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 15: _t->clicou_alterar_faixa_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 16: _t->clicou_alterar_cidade_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 17: _t->clicou_alterar_estado_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 18: _t->on_Cadastrar_clicked(); break;
        case 19: _t->on_voltar_cadastrar_clicked(); break;
        case 20: _t->on_ir_cadastrar_clicked(); break;
        case 21: _t->on_Excluir_clicked(); break;
        case 22: _t->on_Excluir_clicked_logado((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 23: _t->on_Dados_clicked(); break;
        case 24: _t->on_Compras_clicked(); break;
        case 25: _t->on_Eventos_clicked(); break;
        case 26: _t->on_cancelar_exclusao_clicked(); break;
        case 27: _t->on_confirmar_exclusao_clicked(); break;
        case 28: _t->on_alterar_cpf_clicked(); break;
        case 29: _t->on_alterar_senha_clicked(); break;
        case 30: _t->on_alterar_cartao_clicked(); break;
        case 31: _t->on_alterar_codigo_clicked(); break;
        case 32: _t->on_alterar_data_clicked(); break;
        case 33: _t->on_voltar_conta_clicked(); break;
        case 34: _t->on_voltar_compras_clicked(); break;
        case 35: _t->on_voltar_meus_eventos_clicked(); break;
        case 36: _t->on_tabelaMeusEventos_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->on_voltar_vendas_efetuadas_clicked(); break;
        case 38: _t->on_tabelaVendasEfetuadas_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->on_voltar_compradores_clicked(); break;
        case 40: _t->on_criarNovoEvento_clicked(); break;
        case 41: _t->on_cancelar_editar_evento_clicked(); break;
        case 42: _t->on_confirmar_editar_evento_clicked(); break;
        case 43: _t->on_alterar_nome_evento_clicked(); break;
        case 44: _t->on_alterar_classe_evento_clicked(); break;
        case 45: _t->on_alterar_faixa_evento_clicked(); break;
        case 46: _t->on_alterar_cidade_evento_clicked(); break;
        case 47: _t->on_alterar_estado_evento_clicked(); break;
        case 48: _t->on_notificar_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_mostre_dados_conta((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        case 50: _t->on_mostre_ingressos((*reinterpret_cast< list<Ingresso>(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2])),(*reinterpret_cast< list<Evento>(*)>(_a[3]))); break;
        case 51: _t->on_mostre_meus_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 52: _t->on_vendas_efetuadas((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2]))); break;
        case 53: _t->on_editar_evento((*reinterpret_cast< EstruturaEvento(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2]))); break;
        case 54: _t->on_status_exclusao_evento((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_mostre_compradores((*reinterpret_cast< list<CPF>(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
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
        {
            using _t = void (TelaUsuario::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_tabela_meus_eventos)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int , int , CodigoApresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_tabela_vendas_efetuadas)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_nome_evento)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_classe_evento)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_faixa_evento)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_cidade_evento)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_estado_evento)) {
                *result = 17;
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
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 56;
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

// SIGNAL 11
void TelaUsuario::clicou_tabela_meus_eventos(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TelaUsuario::clicou_tabela_vendas_efetuadas(int _t1, int _t2, CodigoApresentacao _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TelaUsuario::clicou_alterar_nome_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TelaUsuario::clicou_alterar_classe_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TelaUsuario::clicou_alterar_faixa_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TelaUsuario::clicou_alterar_cidade_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TelaUsuario::clicou_alterar_estado_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
