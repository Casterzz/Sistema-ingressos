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
    QByteArrayData data[93];
    char stringdata0[2393];
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
QT_MOC_LITERAL(6, 96, 15), // "excluiu_usuario"
QT_MOC_LITERAL(7, 112, 24), // "clicou_confirmar_excluir"
QT_MOC_LITERAL(8, 137, 18), // "clicou_dados_conta"
QT_MOC_LITERAL(9, 156, 21), // "clicou_minhas_compras"
QT_MOC_LITERAL(10, 178, 19), // "clicou_meus_eventos"
QT_MOC_LITERAL(11, 198, 18), // "clicou_alterar_cpf"
QT_MOC_LITERAL(12, 217, 6), // "string"
QT_MOC_LITERAL(13, 224, 20), // "clicou_alterar_senha"
QT_MOC_LITERAL(14, 245, 21), // "clicou_alterar_cartao"
QT_MOC_LITERAL(15, 267, 27), // "clicou_alterar_codigoCartao"
QT_MOC_LITERAL(16, 295, 25), // "clicou_alterar_dataCartao"
QT_MOC_LITERAL(17, 321, 26), // "clicou_tabela_meus_eventos"
QT_MOC_LITERAL(18, 348, 30), // "clicou_tabela_vendas_efetuadas"
QT_MOC_LITERAL(19, 379, 18), // "CodigoApresentacao"
QT_MOC_LITERAL(20, 398, 26), // "clicou_alterar_nome_evento"
QT_MOC_LITERAL(21, 425, 28), // "clicou_alterar_classe_evento"
QT_MOC_LITERAL(22, 454, 27), // "clicou_alterar_faixa_evento"
QT_MOC_LITERAL(23, 482, 28), // "clicou_alterar_cidade_evento"
QT_MOC_LITERAL(24, 511, 28), // "clicou_alterar_estado_evento"
QT_MOC_LITERAL(25, 540, 30), // "clicou_confirmar_editar_evento"
QT_MOC_LITERAL(26, 571, 27), // "clicou_excluir_apresentacao"
QT_MOC_LITERAL(27, 599, 31), // "clicou_alterar_dataApresentacao"
QT_MOC_LITERAL(28, 631, 34), // "clicou_alterar_horarioApresen..."
QT_MOC_LITERAL(29, 666, 32), // "clicou_alterar_precoApresentacao"
QT_MOC_LITERAL(30, 699, 31), // "clicou_alterar_salaApresentacao"
QT_MOC_LITERAL(31, 731, 29), // "clicou_concluir_nova_apresent"
QT_MOC_LITERAL(32, 761, 21), // "EstruturaApresentacao"
QT_MOC_LITERAL(33, 783, 29), // "clicou_finalizar_criar_evento"
QT_MOC_LITERAL(34, 813, 15), // "EstruturaEvento"
QT_MOC_LITERAL(35, 829, 20), // "on_Cadastrar_clicked"
QT_MOC_LITERAL(36, 850, 27), // "on_voltar_cadastrar_clicked"
QT_MOC_LITERAL(37, 878, 23), // "on_ir_cadastrar_clicked"
QT_MOC_LITERAL(38, 902, 18), // "on_Excluir_clicked"
QT_MOC_LITERAL(39, 921, 25), // "on_Excluir_clicked_logado"
QT_MOC_LITERAL(40, 947, 16), // "on_Dados_clicked"
QT_MOC_LITERAL(41, 964, 18), // "on_Compras_clicked"
QT_MOC_LITERAL(42, 983, 18), // "on_Eventos_clicked"
QT_MOC_LITERAL(43, 1002, 28), // "on_cancelar_exclusao_clicked"
QT_MOC_LITERAL(44, 1031, 29), // "on_confirmar_exclusao_clicked"
QT_MOC_LITERAL(45, 1061, 22), // "on_alterar_cpf_clicked"
QT_MOC_LITERAL(46, 1084, 24), // "on_alterar_senha_clicked"
QT_MOC_LITERAL(47, 1109, 25), // "on_alterar_cartao_clicked"
QT_MOC_LITERAL(48, 1135, 25), // "on_alterar_codigo_clicked"
QT_MOC_LITERAL(49, 1161, 23), // "on_alterar_data_clicked"
QT_MOC_LITERAL(50, 1185, 23), // "on_voltar_conta_clicked"
QT_MOC_LITERAL(51, 1209, 25), // "on_voltar_compras_clicked"
QT_MOC_LITERAL(52, 1235, 30), // "on_voltar_meus_eventos_clicked"
QT_MOC_LITERAL(53, 1266, 38), // "on_tabelaMeusEventos_cellDoub..."
QT_MOC_LITERAL(54, 1305, 3), // "row"
QT_MOC_LITERAL(55, 1309, 6), // "column"
QT_MOC_LITERAL(56, 1316, 34), // "on_voltar_vendas_efetuadas_cl..."
QT_MOC_LITERAL(57, 1351, 42), // "on_tabelaVendasEfetuadas_cell..."
QT_MOC_LITERAL(58, 1394, 29), // "on_voltar_compradores_clicked"
QT_MOC_LITERAL(59, 1424, 26), // "on_criarNovoEvento_clicked"
QT_MOC_LITERAL(60, 1451, 33), // "on_cancelar_editar_evento_cli..."
QT_MOC_LITERAL(61, 1485, 34), // "on_confirmar_editar_evento_cl..."
QT_MOC_LITERAL(62, 1520, 30), // "on_alterar_nome_evento_clicked"
QT_MOC_LITERAL(63, 1551, 32), // "on_alterar_classe_evento_clicked"
QT_MOC_LITERAL(64, 1584, 31), // "on_alterar_faixa_evento_clicked"
QT_MOC_LITERAL(65, 1616, 32), // "on_alterar_cidade_evento_clicked"
QT_MOC_LITERAL(66, 1649, 32), // "on_alterar_estado_evento_clicked"
QT_MOC_LITERAL(67, 1682, 31), // "on_voltar_edit_apresent_clicked"
QT_MOC_LITERAL(68, 1714, 39), // "on_tabelaEditApresent_cellDou..."
QT_MOC_LITERAL(69, 1754, 37), // "on_voltar_edit_apresent_unica..."
QT_MOC_LITERAL(70, 1792, 32), // "on_alterar_data_apresent_clicked"
QT_MOC_LITERAL(71, 1825, 35), // "on_alterar_horario_apresent_c..."
QT_MOC_LITERAL(72, 1861, 33), // "on_alterar_preco_apresent_cli..."
QT_MOC_LITERAL(73, 1895, 32), // "on_alterar_sala_apresent_clicked"
QT_MOC_LITERAL(74, 1928, 34), // "on_confirmar_edit_apresent_cl..."
QT_MOC_LITERAL(75, 1963, 32), // "on_cancelar_criar_evento_clicked"
QT_MOC_LITERAL(76, 1996, 33), // "on_cancelar_nova_apresent_cli..."
QT_MOC_LITERAL(77, 2030, 33), // "on_concluir_nova_apresent_cli..."
QT_MOC_LITERAL(78, 2064, 28), // "on_add_edit_apresent_clicked"
QT_MOC_LITERAL(79, 2093, 33), // "on_finalizar_criar_evento_cli..."
QT_MOC_LITERAL(80, 2127, 36), // "on_add_apresent_criar_evento_..."
QT_MOC_LITERAL(81, 2164, 21), // "on_notificar_situacao"
QT_MOC_LITERAL(82, 2186, 21), // "on_mostre_dados_conta"
QT_MOC_LITERAL(83, 2208, 19), // "on_mostre_ingressos"
QT_MOC_LITERAL(84, 2228, 14), // "list<Ingresso>"
QT_MOC_LITERAL(85, 2243, 18), // "list<Apresentacao>"
QT_MOC_LITERAL(86, 2262, 12), // "list<Evento>"
QT_MOC_LITERAL(87, 2275, 22), // "on_mostre_meus_eventos"
QT_MOC_LITERAL(88, 2298, 19), // "on_vendas_efetuadas"
QT_MOC_LITERAL(89, 2318, 16), // "on_editar_evento"
QT_MOC_LITERAL(90, 2335, 25), // "on_status_exclusao_evento"
QT_MOC_LITERAL(91, 2361, 21), // "on_mostre_compradores"
QT_MOC_LITERAL(92, 2383, 9) // "list<CPF>"

    },
    "TelaUsuario\0clicou_ir_cadastrar\0\0"
    "EstruturaUsuario\0EstruturaCartaoCredito\0"
    "clicou_excluir_usuario\0excluiu_usuario\0"
    "clicou_confirmar_excluir\0clicou_dados_conta\0"
    "clicou_minhas_compras\0clicou_meus_eventos\0"
    "clicou_alterar_cpf\0string\0"
    "clicou_alterar_senha\0clicou_alterar_cartao\0"
    "clicou_alterar_codigoCartao\0"
    "clicou_alterar_dataCartao\0"
    "clicou_tabela_meus_eventos\0"
    "clicou_tabela_vendas_efetuadas\0"
    "CodigoApresentacao\0clicou_alterar_nome_evento\0"
    "clicou_alterar_classe_evento\0"
    "clicou_alterar_faixa_evento\0"
    "clicou_alterar_cidade_evento\0"
    "clicou_alterar_estado_evento\0"
    "clicou_confirmar_editar_evento\0"
    "clicou_excluir_apresentacao\0"
    "clicou_alterar_dataApresentacao\0"
    "clicou_alterar_horarioApresentacao\0"
    "clicou_alterar_precoApresentacao\0"
    "clicou_alterar_salaApresentacao\0"
    "clicou_concluir_nova_apresent\0"
    "EstruturaApresentacao\0"
    "clicou_finalizar_criar_evento\0"
    "EstruturaEvento\0on_Cadastrar_clicked\0"
    "on_voltar_cadastrar_clicked\0"
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
    "on_voltar_edit_apresent_clicked\0"
    "on_tabelaEditApresent_cellDoubleClicked\0"
    "on_voltar_edit_apresent_unica_clicked\0"
    "on_alterar_data_apresent_clicked\0"
    "on_alterar_horario_apresent_clicked\0"
    "on_alterar_preco_apresent_clicked\0"
    "on_alterar_sala_apresent_clicked\0"
    "on_confirmar_edit_apresent_clicked\0"
    "on_cancelar_criar_evento_clicked\0"
    "on_cancelar_nova_apresent_clicked\0"
    "on_concluir_nova_apresent_clicked\0"
    "on_add_edit_apresent_clicked\0"
    "on_finalizar_criar_evento_clicked\0"
    "on_add_apresent_criar_evento_clicked\0"
    "on_notificar_situacao\0on_mostre_dados_conta\0"
    "on_mostre_ingressos\0list<Ingresso>\0"
    "list<Apresentacao>\0list<Evento>\0"
    "on_mostre_meus_eventos\0on_vendas_efetuadas\0"
    "on_editar_evento\0on_status_exclusao_evento\0"
    "on_mostre_compradores\0list<CPF>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaUsuario[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      79,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  409,    2, 0x06 /* Public */,
       5,    1,  414,    2, 0x06 /* Public */,
       6,    0,  417,    2, 0x06 /* Public */,
       7,    0,  418,    2, 0x06 /* Public */,
       8,    1,  419,    2, 0x06 /* Public */,
       9,    1,  422,    2, 0x06 /* Public */,
      10,    1,  425,    2, 0x06 /* Public */,
      11,    1,  428,    2, 0x06 /* Public */,
      13,    1,  431,    2, 0x06 /* Public */,
      14,    1,  434,    2, 0x06 /* Public */,
      15,    1,  437,    2, 0x06 /* Public */,
      16,    1,  440,    2, 0x06 /* Public */,
      17,    2,  443,    2, 0x06 /* Public */,
      18,    3,  448,    2, 0x06 /* Public */,
      20,    2,  455,    2, 0x06 /* Public */,
      21,    2,  460,    2, 0x06 /* Public */,
      22,    2,  465,    2, 0x06 /* Public */,
      23,    2,  470,    2, 0x06 /* Public */,
      24,    2,  475,    2, 0x06 /* Public */,
      25,    1,  480,    2, 0x06 /* Public */,
      26,    1,  483,    2, 0x06 /* Public */,
      27,    2,  486,    2, 0x06 /* Public */,
      28,    2,  491,    2, 0x06 /* Public */,
      29,    2,  496,    2, 0x06 /* Public */,
      30,    2,  501,    2, 0x06 /* Public */,
      31,    1,  506,    2, 0x06 /* Public */,
      33,    1,  509,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    0,  512,    2, 0x08 /* Private */,
      36,    0,  513,    2, 0x08 /* Private */,
      37,    0,  514,    2, 0x08 /* Private */,
      38,    0,  515,    2, 0x08 /* Private */,
      39,    2,  516,    2, 0x08 /* Private */,
      40,    0,  521,    2, 0x08 /* Private */,
      41,    0,  522,    2, 0x08 /* Private */,
      42,    0,  523,    2, 0x08 /* Private */,
      43,    0,  524,    2, 0x08 /* Private */,
      44,    0,  525,    2, 0x08 /* Private */,
      45,    0,  526,    2, 0x08 /* Private */,
      46,    0,  527,    2, 0x08 /* Private */,
      47,    0,  528,    2, 0x08 /* Private */,
      48,    0,  529,    2, 0x08 /* Private */,
      49,    0,  530,    2, 0x08 /* Private */,
      50,    0,  531,    2, 0x08 /* Private */,
      51,    0,  532,    2, 0x08 /* Private */,
      52,    0,  533,    2, 0x08 /* Private */,
      53,    2,  534,    2, 0x08 /* Private */,
      56,    0,  539,    2, 0x08 /* Private */,
      57,    2,  540,    2, 0x08 /* Private */,
      58,    0,  545,    2, 0x08 /* Private */,
      59,    0,  546,    2, 0x08 /* Private */,
      60,    0,  547,    2, 0x08 /* Private */,
      61,    0,  548,    2, 0x08 /* Private */,
      62,    0,  549,    2, 0x08 /* Private */,
      63,    0,  550,    2, 0x08 /* Private */,
      64,    0,  551,    2, 0x08 /* Private */,
      65,    0,  552,    2, 0x08 /* Private */,
      66,    0,  553,    2, 0x08 /* Private */,
      67,    0,  554,    2, 0x08 /* Private */,
      68,    2,  555,    2, 0x08 /* Private */,
      69,    0,  560,    2, 0x08 /* Private */,
      70,    0,  561,    2, 0x08 /* Private */,
      71,    0,  562,    2, 0x08 /* Private */,
      72,    0,  563,    2, 0x08 /* Private */,
      73,    0,  564,    2, 0x08 /* Private */,
      74,    0,  565,    2, 0x08 /* Private */,
      75,    0,  566,    2, 0x08 /* Private */,
      76,    0,  567,    2, 0x08 /* Private */,
      77,    0,  568,    2, 0x08 /* Private */,
      78,    0,  569,    2, 0x08 /* Private */,
      79,    0,  570,    2, 0x08 /* Private */,
      80,    0,  571,    2, 0x08 /* Private */,
      81,    1,  572,    2, 0x0a /* Public */,
      82,    2,  575,    2, 0x0a /* Public */,
      83,    3,  580,    2, 0x0a /* Public */,
      87,    1,  587,    2, 0x0a /* Public */,
      88,    2,  590,    2, 0x0a /* Public */,
      89,    2,  595,    2, 0x0a /* Public */,
      90,    1,  600,    2, 0x0a /* Public */,
      91,    2,  603,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 19,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
    QMetaType::Void, 0x80000000 | 32,    2,
    QMetaType::Void, 0x80000000 | 34,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   54,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   54,   55,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   54,   55,
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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 84, 0x80000000 | 85, 0x80000000 | 86,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 86,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 85,    2,    2,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 85,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 92, 0x80000000 | 19,    2,    2,

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
        case 2: _t->excluiu_usuario(); break;
        case 3: _t->clicou_confirmar_excluir(); break;
        case 4: _t->clicou_dados_conta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->clicou_minhas_compras((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->clicou_meus_eventos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->clicou_alterar_cpf((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 8: _t->clicou_alterar_senha((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 9: _t->clicou_alterar_cartao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 10: _t->clicou_alterar_codigoCartao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 11: _t->clicou_alterar_dataCartao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 12: _t->clicou_tabela_meus_eventos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->clicou_tabela_vendas_efetuadas((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[3]))); break;
        case 14: _t->clicou_alterar_nome_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 15: _t->clicou_alterar_classe_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 16: _t->clicou_alterar_faixa_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 17: _t->clicou_alterar_cidade_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 18: _t->clicou_alterar_estado_evento((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 19: _t->clicou_confirmar_editar_evento((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 20: _t->clicou_excluir_apresentacao((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 21: _t->clicou_alterar_dataApresentacao((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 22: _t->clicou_alterar_horarioApresentacao((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 23: _t->clicou_alterar_precoApresentacao((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 24: _t->clicou_alterar_salaApresentacao((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 25: _t->clicou_concluir_nova_apresent((*reinterpret_cast< EstruturaApresentacao(*)>(_a[1]))); break;
        case 26: _t->clicou_finalizar_criar_evento((*reinterpret_cast< EstruturaEvento(*)>(_a[1]))); break;
        case 27: _t->on_Cadastrar_clicked(); break;
        case 28: _t->on_voltar_cadastrar_clicked(); break;
        case 29: _t->on_ir_cadastrar_clicked(); break;
        case 30: _t->on_Excluir_clicked(); break;
        case 31: _t->on_Excluir_clicked_logado((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 32: _t->on_Dados_clicked(); break;
        case 33: _t->on_Compras_clicked(); break;
        case 34: _t->on_Eventos_clicked(); break;
        case 35: _t->on_cancelar_exclusao_clicked(); break;
        case 36: _t->on_confirmar_exclusao_clicked(); break;
        case 37: _t->on_alterar_cpf_clicked(); break;
        case 38: _t->on_alterar_senha_clicked(); break;
        case 39: _t->on_alterar_cartao_clicked(); break;
        case 40: _t->on_alterar_codigo_clicked(); break;
        case 41: _t->on_alterar_data_clicked(); break;
        case 42: _t->on_voltar_conta_clicked(); break;
        case 43: _t->on_voltar_compras_clicked(); break;
        case 44: _t->on_voltar_meus_eventos_clicked(); break;
        case 45: _t->on_tabelaMeusEventos_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->on_voltar_vendas_efetuadas_clicked(); break;
        case 47: _t->on_tabelaVendasEfetuadas_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->on_voltar_compradores_clicked(); break;
        case 49: _t->on_criarNovoEvento_clicked(); break;
        case 50: _t->on_cancelar_editar_evento_clicked(); break;
        case 51: _t->on_confirmar_editar_evento_clicked(); break;
        case 52: _t->on_alterar_nome_evento_clicked(); break;
        case 53: _t->on_alterar_classe_evento_clicked(); break;
        case 54: _t->on_alterar_faixa_evento_clicked(); break;
        case 55: _t->on_alterar_cidade_evento_clicked(); break;
        case 56: _t->on_alterar_estado_evento_clicked(); break;
        case 57: _t->on_voltar_edit_apresent_clicked(); break;
        case 58: _t->on_tabelaEditApresent_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 59: _t->on_voltar_edit_apresent_unica_clicked(); break;
        case 60: _t->on_alterar_data_apresent_clicked(); break;
        case 61: _t->on_alterar_horario_apresent_clicked(); break;
        case 62: _t->on_alterar_preco_apresent_clicked(); break;
        case 63: _t->on_alterar_sala_apresent_clicked(); break;
        case 64: _t->on_confirmar_edit_apresent_clicked(); break;
        case 65: _t->on_cancelar_criar_evento_clicked(); break;
        case 66: _t->on_cancelar_nova_apresent_clicked(); break;
        case 67: _t->on_concluir_nova_apresent_clicked(); break;
        case 68: _t->on_add_edit_apresent_clicked(); break;
        case 69: _t->on_finalizar_criar_evento_clicked(); break;
        case 70: _t->on_add_apresent_criar_evento_clicked(); break;
        case 71: _t->on_notificar_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->on_mostre_dados_conta((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        case 73: _t->on_mostre_ingressos((*reinterpret_cast< list<Ingresso>(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2])),(*reinterpret_cast< list<Evento>(*)>(_a[3]))); break;
        case 74: _t->on_mostre_meus_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 75: _t->on_vendas_efetuadas((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2]))); break;
        case 76: _t->on_editar_evento((*reinterpret_cast< EstruturaEvento(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2]))); break;
        case 77: _t->on_status_exclusao_evento((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->on_mostre_compradores((*reinterpret_cast< list<CPF>(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::excluiu_usuario)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_confirmar_excluir)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_dados_conta)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_minhas_compras)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_meus_eventos)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_cpf)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_senha)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_cartao)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_codigoCartao)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_dataCartao)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_tabela_meus_eventos)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(int , int , CodigoApresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_tabela_vendas_efetuadas)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_nome_evento)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_classe_evento)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_faixa_evento)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_cidade_evento)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_estado_evento)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_confirmar_editar_evento)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_excluir_apresentacao)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_dataApresentacao)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_horarioApresentacao)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_precoApresentacao)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_alterar_salaApresentacao)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(EstruturaApresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_concluir_nova_apresent)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (TelaUsuario::*)(EstruturaEvento );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TelaUsuario::clicou_finalizar_criar_evento)) {
                *result = 26;
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
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 79)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 79;
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
void TelaUsuario::excluiu_usuario()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TelaUsuario::clicou_confirmar_excluir()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TelaUsuario::clicou_dados_conta(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TelaUsuario::clicou_minhas_compras(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TelaUsuario::clicou_meus_eventos(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TelaUsuario::clicou_alterar_cpf(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TelaUsuario::clicou_alterar_senha(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TelaUsuario::clicou_alterar_cartao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TelaUsuario::clicou_alterar_codigoCartao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TelaUsuario::clicou_alterar_dataCartao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TelaUsuario::clicou_tabela_meus_eventos(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TelaUsuario::clicou_tabela_vendas_efetuadas(int _t1, int _t2, CodigoApresentacao _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TelaUsuario::clicou_alterar_nome_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TelaUsuario::clicou_alterar_classe_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TelaUsuario::clicou_alterar_faixa_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TelaUsuario::clicou_alterar_cidade_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void TelaUsuario::clicou_alterar_estado_evento(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void TelaUsuario::clicou_confirmar_editar_evento(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void TelaUsuario::clicou_excluir_apresentacao(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void TelaUsuario::clicou_alterar_dataApresentacao(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void TelaUsuario::clicou_alterar_horarioApresentacao(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void TelaUsuario::clicou_alterar_precoApresentacao(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void TelaUsuario::clicou_alterar_salaApresentacao(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void TelaUsuario::clicou_concluir_nova_apresent(EstruturaApresentacao _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void TelaUsuario::clicou_finalizar_criar_evento(EstruturaEvento _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
struct qt_meta_stringdata_telaEventos_t {
    QByteArrayData data[22];
    char stringdata0[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_telaEventos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_telaEventos_t qt_meta_stringdata_telaEventos = {
    {
QT_MOC_LITERAL(0, 0, 11), // "telaEventos"
QT_MOC_LITERAL(1, 12, 20), // "pesquisar_por_evento"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "string"
QT_MOC_LITERAL(4, 41, 33), // "clicou_tabela_eventos_pesquis..."
QT_MOC_LITERAL(5, 75, 12), // "CodigoEvento"
QT_MOC_LITERAL(6, 88, 7), // "comprar"
QT_MOC_LITERAL(7, 96, 18), // "CodigoApresentacao"
QT_MOC_LITERAL(8, 115, 27), // "on_PesquisarEventos_clicked"
QT_MOC_LITERAL(9, 143, 32), // "on_voltarPesquisaEventos_clicked"
QT_MOC_LITERAL(10, 176, 29), // "on_irPesquisarEventos_clicked"
QT_MOC_LITERAL(11, 206, 21), // "on_notificar_situacao"
QT_MOC_LITERAL(12, 228, 38), // "on_tabelaEventosDisp_cellDoub..."
QT_MOC_LITERAL(13, 267, 3), // "row"
QT_MOC_LITERAL(14, 271, 6), // "column"
QT_MOC_LITERAL(15, 278, 36), // "on_voltarEventoApresentacoes_..."
QT_MOC_LITERAL(16, 315, 40), // "on_tabelaApresentacoes_cellDo..."
QT_MOC_LITERAL(17, 356, 21), // "mostrar_todos_eventos"
QT_MOC_LITERAL(18, 378, 12), // "list<Evento>"
QT_MOC_LITERAL(19, 391, 15), // "mostrar_eventos"
QT_MOC_LITERAL(20, 407, 20), // "mostre_apresentacoes"
QT_MOC_LITERAL(21, 428, 18) // "list<Apresentacao>"

    },
    "telaEventos\0pesquisar_por_evento\0\0"
    "string\0clicou_tabela_eventos_pesquisados\0"
    "CodigoEvento\0comprar\0CodigoApresentacao\0"
    "on_PesquisarEventos_clicked\0"
    "on_voltarPesquisaEventos_clicked\0"
    "on_irPesquisarEventos_clicked\0"
    "on_notificar_situacao\0"
    "on_tabelaEventosDisp_cellDoubleClicked\0"
    "row\0column\0on_voltarEventoApresentacoes_clicked\0"
    "on_tabelaApresentacoes_cellDoubleClicked\0"
    "mostrar_todos_eventos\0list<Evento>\0"
    "mostrar_eventos\0mostre_apresentacoes\0"
    "list<Apresentacao>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_telaEventos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    2,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      12,    2,   96,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    2,  102,    2, 0x08 /* Private */,
      17,    1,  107,    2, 0x0a /* Public */,
      19,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 21,    2,

       0        // eod
};

void telaEventos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<telaEventos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pesquisar_por_evento((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->clicou_tabela_eventos_pesquisados((*reinterpret_cast< CodigoEvento(*)>(_a[1]))); break;
        case 2: _t->comprar((*reinterpret_cast< CodigoEvento(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
        case 3: _t->on_PesquisarEventos_clicked(); break;
        case 4: _t->on_voltarPesquisaEventos_clicked(); break;
        case 5: _t->on_irPesquisarEventos_clicked(); break;
        case 6: _t->on_notificar_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_tabelaEventosDisp_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_voltarEventoApresentacoes_clicked(); break;
        case 9: _t->on_tabelaApresentacoes_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->mostrar_todos_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 11: _t->mostrar_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 12: _t->mostre_apresentacoes((*reinterpret_cast< list<Apresentacao>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (telaEventos::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&telaEventos::pesquisar_por_evento)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (telaEventos::*)(CodigoEvento );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&telaEventos::clicou_tabela_eventos_pesquisados)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (telaEventos::*)(CodigoEvento , CodigoApresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&telaEventos::comprar)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject telaEventos::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_telaEventos.data,
    qt_meta_data_telaEventos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *telaEventos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *telaEventos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_telaEventos.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int telaEventos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void telaEventos::pesquisar_por_evento(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void telaEventos::clicou_tabela_eventos_pesquisados(CodigoEvento _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void telaEventos::comprar(CodigoEvento _t1, CodigoApresentacao _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_telaVendas_t {
    QByteArrayData data[13];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_telaVendas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_telaVendas_t qt_meta_stringdata_telaVendas = {
    {
QT_MOC_LITERAL(0, 0, 10), // "telaVendas"
QT_MOC_LITERAL(1, 11, 21), // "clicouConfirmarCompra"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "CodigoEvento"
QT_MOC_LITERAL(4, 47, 18), // "CodigoApresentacao"
QT_MOC_LITERAL(5, 66, 15), // "atualizar_dados"
QT_MOC_LITERAL(6, 82, 13), // "CartaoCredito"
QT_MOC_LITERAL(7, 96, 6), // "Evento"
QT_MOC_LITERAL(8, 103, 12), // "Apresentacao"
QT_MOC_LITERAL(9, 116, 23), // "mostrar_lista_ingressos"
QT_MOC_LITERAL(10, 140, 14), // "list<Ingresso>"
QT_MOC_LITERAL(11, 155, 26), // "on_confirmarCompra_clicked"
QT_MOC_LITERAL(12, 182, 28) // "on_concluirIngressos_clicked"

    },
    "telaVendas\0clicouConfirmarCompra\0\0"
    "CodigoEvento\0CodigoApresentacao\0"
    "atualizar_dados\0CartaoCredito\0Evento\0"
    "Apresentacao\0mostrar_lista_ingressos\0"
    "list<Ingresso>\0on_confirmarCompra_clicked\0"
    "on_concluirIngressos_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_telaVendas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   44,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7, 0x80000000 | 8,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void telaVendas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<telaVendas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicouConfirmarCompra((*reinterpret_cast< CodigoEvento(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
        case 1: _t->atualizar_dados((*reinterpret_cast< CartaoCredito(*)>(_a[1])),(*reinterpret_cast< Evento(*)>(_a[2])),(*reinterpret_cast< Apresentacao(*)>(_a[3]))); break;
        case 2: _t->mostrar_lista_ingressos((*reinterpret_cast< list<Ingresso>(*)>(_a[1]))); break;
        case 3: _t->on_confirmarCompra_clicked(); break;
        case 4: _t->on_concluirIngressos_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (telaVendas::*)(CodigoEvento , CodigoApresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&telaVendas::clicouConfirmarCompra)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject telaVendas::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_telaVendas.data,
    qt_meta_data_telaVendas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *telaVendas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *telaVendas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_telaVendas.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int telaVendas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void telaVendas::clicouConfirmarCompra(CodigoEvento _t1, CodigoApresentacao _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
