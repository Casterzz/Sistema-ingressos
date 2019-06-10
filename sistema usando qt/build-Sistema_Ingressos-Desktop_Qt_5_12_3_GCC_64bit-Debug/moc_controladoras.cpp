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
    QByteArrayData data[6];
    char stringdata0[73];
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
QT_MOC_LITERAL(5, 58, 14) // "executarEveGUI"

    },
    "CntrGeral\0altere_statusGUI\0\0executarAutGUI\0"
    "executarUsuGUI\0executarEveGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrGeral[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x0a /* Public */,
       4,    0,   38,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
    QByteArrayData data[9];
    char stringdata0[161];
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
QT_MOC_LITERAL(4, 56, 20), // "executarCadastrarGUI"
QT_MOC_LITERAL(5, 77, 16), // "EstruturaUsuario"
QT_MOC_LITERAL(6, 94, 22), // "EstruturaCartaoCredito"
QT_MOC_LITERAL(7, 117, 25), // "executarExcluirUsuarioGUI"
QT_MOC_LITERAL(8, 143, 17) // "excluirUsuarioGUI"

    },
    "CntrIAUsuario\0notifique_situacao\0\0"
    "inicia_exclusao_conta\0executarCadastrarGUI\0"
    "EstruturaUsuario\0EstruturaCartaoCredito\0"
    "executarExcluirUsuarioGUI\0excluirUsuarioGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CntrIAUsuario[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   43,    2, 0x0a /* Public */,
       7,    0,   48,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CntrIAUsuario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CntrIAUsuario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notifique_situacao((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->inicia_exclusao_conta(); break;
        case 2: _t->executarCadastrarGUI((*reinterpret_cast< EstruturaUsuario(*)>(_a[1])),(*reinterpret_cast< EstruturaCartaoCredito(*)>(_a[2]))); break;
        case 3: _t->executarExcluirUsuarioGUI(); break;
        case 4: _t->excluirUsuarioGUI(); break;
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
            using _t = void (CntrIAUsuario::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CntrIAUsuario::inicia_exclusao_conta)) {
                *result = 1;
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
void CntrIAUsuario::notifique_situacao(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CntrIAUsuario::inicia_exclusao_conta()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
