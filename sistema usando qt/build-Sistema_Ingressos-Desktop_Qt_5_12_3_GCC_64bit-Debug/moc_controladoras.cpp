/****************************************************************************
** Meta object code from reading C++ file 'controladoras.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Sistema_Ingressos/controladoras.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controladoras.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CntrGeral_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CntrGeral_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CntrGeral_t qt_meta_stringdata_CntrGeral = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CntrGeral"
QT_MOC_LITERAL(1, 10, 16), // "altere_statusGUI"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "executarAutGUI"
QT_MOC_LITERAL(4, 43, 14), // "executarUsuGUI"
QT_MOC_LITERAL(5, 58, 14), // "executarEveGUI"
QT_MOC_LITERAL(6, 73, 19) // "executarDeslogarGUI"

    },
    "CntrGeral\0altere_statusGUI\0\0executarAutGUI\0"
    "executarUsuGUI\0executarEveGUI\0"
    "executarDeslogarGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrGeral[] = {

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
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x0a /* Public */,
       4,    0,   43,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CntrGeral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CntrGeral *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->altere_statusGUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->executarAutGUI(); break;
        case 2: _t->executarUsuGUI(); break;
        case 3: _t->executarEveGUI(); break;
        case 4: _t->executarDeslogarGUI(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CntrGeral::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrGeral::altere_statusGUI)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CntrGeral::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CntrGeral.data,
    qt_meta_data_CntrGeral,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CntrGeral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CntrGeral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CntrGeral.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CntrGeral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CntrGeral::altere_statusGUI(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CntrIAAutenticacao_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CntrIAAutenticacao_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CntrIAAutenticacao_t qt_meta_stringdata_CntrIAAutenticacao = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CntrIAAutenticacao"
QT_MOC_LITERAL(1, 19, 18), // "notifique_situacao"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8) // "logarGUI"

    },
    "CntrIAAutenticacao\0notifique_situacao\0"
    "\0logarGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrIAAutenticacao[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void CntrIAAutenticacao::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CntrIAAutenticacao *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifique_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->logarGUI((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CntrIAAutenticacao::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAAutenticacao::notifique_situacao)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CntrIAAutenticacao::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CntrIAAutenticacao.data,
    qt_meta_data_CntrIAAutenticacao,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CntrIAAutenticacao::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CntrIAAutenticacao::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CntrIAAutenticacao.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAAutenticacao"))
        return static_cast< IAAutenticacao*>(this);
    return QObject::qt_metacast(_clname);
}

int CntrIAAutenticacao::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CntrIAAutenticacao::notifique_situacao(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CntrIAUsuario_t {
    QByteArrayData data[46];
    char stringdata0[937];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CntrIAUsuario_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CntrIAUsuario_t qt_meta_stringdata_CntrIAUsuario = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CntrIAUsuario"
QT_MOC_LITERAL(1, 14, 18), // "notifique_situacao"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "inicia_exclusao_conta"
QT_MOC_LITERAL(4, 56, 6), // "string"
QT_MOC_LITERAL(5, 63, 18), // "mostre_dados_conta"
QT_MOC_LITERAL(6, 82, 16), // "EstruturaUsuario"
QT_MOC_LITERAL(7, 99, 22), // "EstruturaCartaoCredito"
QT_MOC_LITERAL(8, 122, 24), // "inicia_mostrar_ingressos"
QT_MOC_LITERAL(9, 147, 14), // "list<Ingresso>"
QT_MOC_LITERAL(10, 162, 18), // "list<Apresentacao>"
QT_MOC_LITERAL(11, 181, 12), // "list<Evento>"
QT_MOC_LITERAL(12, 194, 27), // "inicia_mostrar_meus_eventos"
QT_MOC_LITERAL(13, 222, 23), // "inicia_vendas_efetuadas"
QT_MOC_LITERAL(14, 246, 20), // "inicia_editar_evento"
QT_MOC_LITERAL(15, 267, 15), // "EstruturaEvento"
QT_MOC_LITERAL(16, 283, 22), // "status_exclusao_evento"
QT_MOC_LITERAL(17, 306, 26), // "inicia_mostrar_compradores"
QT_MOC_LITERAL(18, 333, 9), // "list<CPF>"
QT_MOC_LITERAL(19, 343, 18), // "CodigoApresentacao"
QT_MOC_LITERAL(20, 362, 20), // "executarCadastrarGUI"
QT_MOC_LITERAL(21, 383, 25), // "executarExcluirUsuarioGUI"
QT_MOC_LITERAL(22, 409, 17), // "excluirUsuarioGUI"
QT_MOC_LITERAL(23, 427, 21), // "executarDadosContaGUI"
QT_MOC_LITERAL(24, 449, 24), // "executarMinhasComprasGUI"
QT_MOC_LITERAL(25, 474, 22), // "executarMeusEventosGUI"
QT_MOC_LITERAL(26, 497, 23), // "processarMeusEventosGUI"
QT_MOC_LITERAL(27, 521, 23), // "processarCompradoresGUI"
QT_MOC_LITERAL(28, 545, 13), // "alterarCPFGUI"
QT_MOC_LITERAL(29, 559, 15), // "alterarSenhaGUI"
QT_MOC_LITERAL(30, 575, 16), // "alterarCartaoGUI"
QT_MOC_LITERAL(31, 592, 22), // "alterarCartaoCodigoGUI"
QT_MOC_LITERAL(32, 615, 20), // "alterarCartaoDataGUI"
QT_MOC_LITERAL(33, 636, 20), // "alterarNomeEventoGUI"
QT_MOC_LITERAL(34, 657, 22), // "alterarClasseEventoGUI"
QT_MOC_LITERAL(35, 680, 21), // "alterarFaixaEventoGUI"
QT_MOC_LITERAL(36, 702, 22), // "alterarCidadeEventoGUI"
QT_MOC_LITERAL(37, 725, 22), // "alterarEstadoEventoGUI"
QT_MOC_LITERAL(38, 748, 26), // "alterarDataApresentacaoGUI"
QT_MOC_LITERAL(39, 775, 29), // "alterarHorarioApresentacaoGUI"
QT_MOC_LITERAL(40, 805, 27), // "alterarPrecoApresentacaoGUI"
QT_MOC_LITERAL(41, 833, 26), // "alterarSalaApresentacaoGUI"
QT_MOC_LITERAL(42, 860, 22), // "excluirApresentacaoGUI"
QT_MOC_LITERAL(43, 883, 12), // "addEventoGUI"
QT_MOC_LITERAL(44, 896, 18), // "addApresentacaoGUI"
QT_MOC_LITERAL(45, 915, 21) // "EstruturaApresentacao"

    },
    "CntrIAUsuario\0notifique_situacao\0\0"
    "inicia_exclusao_conta\0string\0"
    "mostre_dados_conta\0EstruturaUsuario\0"
    "EstruturaCartaoCredito\0inicia_mostrar_ingressos\0"
    "list<Ingresso>\0list<Apresentacao>\0"
    "list<Evento>\0inicia_mostrar_meus_eventos\0"
    "inicia_vendas_efetuadas\0inicia_editar_evento\0"
    "EstruturaEvento\0status_exclusao_evento\0"
    "inicia_mostrar_compradores\0list<CPF>\0"
    "CodigoApresentacao\0executarCadastrarGUI\0"
    "executarExcluirUsuarioGUI\0excluirUsuarioGUI\0"
    "executarDadosContaGUI\0executarMinhasComprasGUI\0"
    "executarMeusEventosGUI\0processarMeusEventosGUI\0"
    "processarCompradoresGUI\0alterarCPFGUI\0"
    "alterarSenhaGUI\0alterarCartaoGUI\0"
    "alterarCartaoCodigoGUI\0alterarCartaoDataGUI\0"
    "alterarNomeEventoGUI\0alterarClasseEventoGUI\0"
    "alterarFaixaEventoGUI\0alterarCidadeEventoGUI\0"
    "alterarEstadoEventoGUI\0"
    "alterarDataApresentacaoGUI\0"
    "alterarHorarioApresentacaoGUI\0"
    "alterarPrecoApresentacaoGUI\0"
    "alterarSalaApresentacaoGUI\0"
    "excluirApresentacaoGUI\0addEventoGUI\0"
    "addApresentacaoGUI\0EstruturaApresentacao"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrIAUsuario[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       3,    2,  187,    2, 0x06 /* Public */,
       5,    2,  192,    2, 0x06 /* Public */,
       8,    3,  197,    2, 0x06 /* Public */,
      12,    1,  204,    2, 0x06 /* Public */,
      13,    2,  207,    2, 0x06 /* Public */,
      14,    2,  212,    2, 0x06 /* Public */,
      16,    1,  217,    2, 0x06 /* Public */,
      17,    2,  220,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  225,    2, 0x0a /* Public */,
      21,    0,  230,    2, 0x0a /* Public */,
      22,    0,  231,    2, 0x0a /* Public */,
      23,    0,  232,    2, 0x0a /* Public */,
      24,    0,  233,    2, 0x0a /* Public */,
      25,    0,  234,    2, 0x0a /* Public */,
      26,    2,  235,    2, 0x0a /* Public */,
      27,    3,  240,    2, 0x0a /* Public */,
      28,    1,  247,    2, 0x0a /* Public */,
      29,    1,  250,    2, 0x0a /* Public */,
      30,    1,  253,    2, 0x0a /* Public */,
      31,    1,  256,    2, 0x0a /* Public */,
      32,    1,  259,    2, 0x0a /* Public */,
      33,    2,  262,    2, 0x0a /* Public */,
      34,    2,  267,    2, 0x0a /* Public */,
      35,    2,  272,    2, 0x0a /* Public */,
      36,    2,  277,    2, 0x0a /* Public */,
      37,    2,  282,    2, 0x0a /* Public */,
      38,    2,  287,    2, 0x0a /* Public */,
      39,    2,  292,    2, 0x0a /* Public */,
      40,    2,  297,    2, 0x0a /* Public */,
      41,    2,  302,    2, 0x0a /* Public */,
      42,    1,  307,    2, 0x0a /* Public */,
      43,    1,  310,    2, 0x0a /* Public */,
      44,    1,  313,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10, 0x80000000 | 11,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 10,    2,    2,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 10,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 19,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 19,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 45,    2,

       0        // eod
};

void CntrIAUsuario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CntrIAUsuario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifique_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->inicia_exclusao_conta((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 2: _t->mostre_dados_conta((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        case 3: _t->inicia_mostrar_ingressos((*reinterpret_cast< list<Ingresso>(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2])),(*reinterpret_cast< list<Evento>(*)>(_a[3]))); break;
        case 4: _t->inicia_mostrar_meus_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 5: _t->inicia_vendas_efetuadas((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2]))); break;
        case 6: _t->inicia_editar_evento((*reinterpret_cast< EstruturaEvento(*)>(_a[1])),(*reinterpret_cast< list<Apresentacao>(*)>(_a[2]))); break;
        case 7: _t->status_exclusao_evento((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->inicia_mostrar_compradores((*reinterpret_cast< list<CPF>(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
        case 9: _t->executarCadastrarGUI((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        case 10: _t->executarExcluirUsuarioGUI(); break;
        case 11: _t->excluirUsuarioGUI(); break;
        case 12: _t->executarDadosContaGUI(); break;
        case 13: _t->executarMinhasComprasGUI(); break;
        case 14: _t->executarMeusEventosGUI(); break;
        case 15: _t->processarMeusEventosGUI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->processarCompradoresGUI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[3]))); break;
        case 17: _t->alterarCPFGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 18: _t->alterarSenhaGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 19: _t->alterarCartaoGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 20: _t->alterarCartaoCodigoGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 21: _t->alterarCartaoDataGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 22: _t->alterarNomeEventoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 23: _t->alterarClasseEventoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 24: _t->alterarFaixaEventoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 25: _t->alterarCidadeEventoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 26: _t->alterarEstadoEventoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 27: _t->alterarDataApresentacaoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 28: _t->alterarHorarioApresentacaoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 29: _t->alterarPrecoApresentacaoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 30: _t->alterarSalaApresentacaoGUI((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 31: _t->excluirApresentacaoGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 32: _t->addEventoGUI((*reinterpret_cast< EstruturaEvento(*)>(_a[1]))); break;
        case 33: _t->addApresentacaoGUI((*reinterpret_cast< EstruturaApresentacao(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CntrIAUsuario::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::notifique_situacao)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(string , string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_exclusao_conta)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(EstruturaUsuario , EstruturaCartaoCredito );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::mostre_dados_conta)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(list<Ingresso> , list<Apresentacao> , list<Evento> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_mostrar_ingressos)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(list<Evento> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_mostrar_meus_eventos)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(string , list<Apresentacao> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_vendas_efetuadas)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(EstruturaEvento , list<Apresentacao> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_editar_evento)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::status_exclusao_evento)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CntrIAUsuario::*)(list<CPF> , CodigoApresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_mostrar_compradores)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CntrIAUsuario::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CntrIAUsuario.data,
    qt_meta_data_CntrIAUsuario,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CntrIAUsuario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CntrIAUsuario::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CntrIAUsuario.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAUsuario"))
        return static_cast< IAUsuario*>(this);
    return QObject::qt_metacast(_clname);
}

int CntrIAUsuario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void CntrIAUsuario::notifique_situacao(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CntrIAUsuario::inicia_exclusao_conta(string _t1, string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CntrIAUsuario::mostre_dados_conta(EstruturaUsuario _t1, EstruturaCartaoCredito _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CntrIAUsuario::inicia_mostrar_ingressos(list<Ingresso> _t1, list<Apresentacao> _t2, list<Evento> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CntrIAUsuario::inicia_mostrar_meus_eventos(list<Evento> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CntrIAUsuario::inicia_vendas_efetuadas(string _t1, list<Apresentacao> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CntrIAUsuario::inicia_editar_evento(EstruturaEvento _t1, list<Apresentacao> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CntrIAUsuario::status_exclusao_evento(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CntrIAUsuario::inicia_mostrar_compradores(list<CPF> _t1, CodigoApresentacao _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_CntrIAEventos_t {
    QByteArrayData data[15];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CntrIAEventos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CntrIAEventos_t qt_meta_stringdata_CntrIAEventos = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CntrIAEventos"
QT_MOC_LITERAL(1, 14, 20), // "mostre_todos_eventos"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "list<Evento>"
QT_MOC_LITERAL(4, 49, 14), // "mostre_eventos"
QT_MOC_LITERAL(5, 64, 18), // "notifique_situacao"
QT_MOC_LITERAL(6, 83, 32), // "inicia_apresentacoes_disponiveis"
QT_MOC_LITERAL(7, 116, 18), // "list<Apresentacao>"
QT_MOC_LITERAL(8, 135, 15), // "encerrarEventos"
QT_MOC_LITERAL(9, 151, 28), // "executarMostrarEventosEspGUI"
QT_MOC_LITERAL(10, 180, 6), // "string"
QT_MOC_LITERAL(11, 187, 25), // "processarApresentacoesGUI"
QT_MOC_LITERAL(12, 213, 12), // "CodigoEvento"
QT_MOC_LITERAL(13, 226, 10), // "pre_compra"
QT_MOC_LITERAL(14, 237, 18) // "CodigoApresentacao"

    },
    "CntrIAEventos\0mostre_todos_eventos\0\0"
    "list<Evento>\0mostre_eventos\0"
    "notifique_situacao\0inicia_apresentacoes_disponiveis\0"
    "list<Apresentacao>\0encerrarEventos\0"
    "executarMostrarEventosEspGUI\0string\0"
    "processarApresentacoesGUI\0CodigoEvento\0"
    "pre_compra\0CodigoApresentacao"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrIAEventos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       8,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   67,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    2,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,    2,    2,

       0        // eod
};

void CntrIAEventos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CntrIAEventos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mostre_todos_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 1: _t->mostre_eventos((*reinterpret_cast< list<Evento>(*)>(_a[1]))); break;
        case 2: _t->notifique_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->inicia_apresentacoes_disponiveis((*reinterpret_cast< list<Apresentacao>(*)>(_a[1]))); break;
        case 4: _t->encerrarEventos(); break;
        case 5: _t->executarMostrarEventosEspGUI((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 6: _t->processarApresentacoesGUI((*reinterpret_cast< CodigoEvento(*)>(_a[1]))); break;
        case 7: _t->pre_compra((*reinterpret_cast< CodigoEvento(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CntrIAEventos::*)(list<Evento> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAEventos::mostre_todos_eventos)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CntrIAEventos::*)(list<Evento> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAEventos::mostre_eventos)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CntrIAEventos::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAEventos::notifique_situacao)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CntrIAEventos::*)(list<Apresentacao> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAEventos::inicia_apresentacoes_disponiveis)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CntrIAEventos::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAEventos::encerrarEventos)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CntrIAEventos::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CntrIAEventos.data,
    qt_meta_data_CntrIAEventos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CntrIAEventos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CntrIAEventos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CntrIAEventos.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAEventos"))
        return static_cast< IAEventos*>(this);
    return QObject::qt_metacast(_clname);
}

int CntrIAEventos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CntrIAEventos::mostre_todos_eventos(list<Evento> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CntrIAEventos::mostre_eventos(list<Evento> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CntrIAEventos::notifique_situacao(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CntrIAEventos::inicia_apresentacoes_disponiveis(list<Apresentacao> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CntrIAEventos::encerrarEventos()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_CntrIAVendas_t {
    QByteArrayData data[11];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CntrIAVendas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CntrIAVendas_t qt_meta_stringdata_CntrIAVendas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CntrIAVendas"
QT_MOC_LITERAL(1, 13, 14), // "atualize_dados"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "CartaoCredito"
QT_MOC_LITERAL(4, 43, 6), // "Evento"
QT_MOC_LITERAL(5, 50, 12), // "Apresentacao"
QT_MOC_LITERAL(6, 63, 26), // "lista_ingressos_adquiridos"
QT_MOC_LITERAL(7, 90, 14), // "list<Ingresso>"
QT_MOC_LITERAL(8, 105, 17), // "executarCompraGUI"
QT_MOC_LITERAL(9, 123, 12), // "CodigoEvento"
QT_MOC_LITERAL(10, 136, 18) // "CodigoApresentacao"

    },
    "CntrIAVendas\0atualize_dados\0\0CartaoCredito\0"
    "Evento\0Apresentacao\0lista_ingressos_adquiridos\0"
    "list<Ingresso>\0executarCompraGUI\0"
    "CodigoEvento\0CodigoApresentacao"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrIAVendas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10,    2,    2,

       0        // eod
};

void CntrIAVendas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CntrIAVendas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->atualize_dados((*reinterpret_cast< CartaoCredito(*)>(_a[1])),(*reinterpret_cast< Evento(*)>(_a[2])),(*reinterpret_cast< Apresentacao(*)>(_a[3]))); break;
        case 1: _t->lista_ingressos_adquiridos((*reinterpret_cast< list<Ingresso>(*)>(_a[1]))); break;
        case 2: _t->executarCompraGUI((*reinterpret_cast< CodigoEvento(*)>(_a[1])),(*reinterpret_cast< CodigoApresentacao(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CntrIAVendas::*)(CartaoCredito , Evento , Apresentacao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAVendas::atualize_dados)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CntrIAVendas::*)(list<Ingresso> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAVendas::lista_ingressos_adquiridos)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CntrIAVendas::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CntrIAVendas.data,
    qt_meta_data_CntrIAVendas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CntrIAVendas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CntrIAVendas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CntrIAVendas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAVendas"))
        return static_cast< IAVendas*>(this);
    return QObject::qt_metacast(_clname);
}

int CntrIAVendas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CntrIAVendas::atualize_dados(CartaoCredito _t1, Evento _t2, Apresentacao _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CntrIAVendas::lista_ingressos_adquiridos(list<Ingresso> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
