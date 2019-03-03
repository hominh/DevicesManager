/****************************************************************************
** Meta object code from reading C++ file 'tcpconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tcp/tcpconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpConnection_t {
    QByteArrayData data[30];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpConnection_t qt_meta_stringdata_TcpConnection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TcpConnection"
QT_MOC_LITERAL(1, 14, 9), // "connected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "disconnected"
QT_MOC_LITERAL(4, 38, 9), // "readyRead"
QT_MOC_LITERAL(5, 48, 12), // "bytesWritten"
QT_MOC_LITERAL(6, 61, 5), // "bytes"
QT_MOC_LITERAL(7, 67, 12), // "stateChanged"
QT_MOC_LITERAL(8, 80, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(9, 109, 11), // "socketState"
QT_MOC_LITERAL(10, 121, 5), // "error"
QT_MOC_LITERAL(11, 127, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 156, 11), // "socketError"
QT_MOC_LITERAL(13, 168, 18), // "de_paket_7bit_buff"
QT_MOC_LITERAL(14, 187, 15), // "unsigned char[]"
QT_MOC_LITERAL(15, 203, 10), // "in2outbuff"
QT_MOC_LITERAL(16, 214, 5), // "count"
QT_MOC_LITERAL(17, 220, 13), // "workCmdBuffer"
QT_MOC_LITERAL(18, 234, 12), // "CheckTimeOut"
QT_MOC_LITERAL(19, 247, 21), // "make_packet_7bit_buff"
QT_MOC_LITERAL(20, 269, 9), // "buffer_in"
QT_MOC_LITERAL(21, 279, 6), // "length"
QT_MOC_LITERAL(22, 286, 8), // "sendData"
QT_MOC_LITERAL(23, 295, 9), // "update2DB"
QT_MOC_LITERAL(24, 305, 6), // "status"
QT_MOC_LITERAL(25, 312, 3), // "cmd"
QT_MOC_LITERAL(26, 316, 9), // "dayinweek"
QT_MOC_LITERAL(27, 326, 10), // "updated_at"
QT_MOC_LITERAL(28, 337, 4), // "name"
QT_MOC_LITERAL(29, 342, 9) // "refreshDB"

    },
    "TcpConnection\0connected\0\0disconnected\0"
    "readyRead\0bytesWritten\0bytes\0stateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "error\0QAbstractSocket::SocketError\0"
    "socketError\0de_paket_7bit_buff\0"
    "unsigned char[]\0in2outbuff\0count\0"
    "workCmdBuffer\0CheckTimeOut\0"
    "make_packet_7bit_buff\0buffer_in\0length\0"
    "sendData\0update2DB\0status\0cmd\0dayinweek\0"
    "updated_at\0name\0refreshDB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      13,    2,   91,    2, 0x0a /* Public */,
      17,    0,   96,    2, 0x0a /* Public */,
      18,    0,   97,    2, 0x0a /* Public */,
      19,    2,   98,    2, 0x0a /* Public */,
      22,    0,  103,    2, 0x0a /* Public */,
      23,    5,  104,    2, 0x0a /* Public */,
      29,    0,  115,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::UChar, 0x80000000 | 14, QMetaType::UChar,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UChar, 0x80000000 | 14, QMetaType::UChar,   20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   25,   26,   27,   28,
    QMetaType::Void,

       0        // eod
};

void TcpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpConnection *_t = static_cast<TcpConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->readyRead(); break;
        case 3: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: { unsigned char _r = _t->de_paket_7bit_buff((*reinterpret_cast< unsigned char(*)[]>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->workCmdBuffer(); break;
        case 8: _t->CheckTimeOut(); break;
        case 9: { unsigned char _r = _t->make_packet_7bit_buff((*reinterpret_cast< unsigned char(*)[]>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->sendData(); break;
        case 11: _t->update2DB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 12: _t->refreshDB(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject TcpConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpConnection.data,
      qt_meta_data_TcpConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
