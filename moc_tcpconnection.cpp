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
    QByteArrayData data[32];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpConnection_t qt_meta_stringdata_TcpConnection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TcpConnection"
QT_MOC_LITERAL(1, 14, 12), // "dataReceived"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 9), // "connected"
QT_MOC_LITERAL(5, 43, 12), // "disconnected"
QT_MOC_LITERAL(6, 56, 9), // "readyRead"
QT_MOC_LITERAL(7, 66, 12), // "bytesWritten"
QT_MOC_LITERAL(8, 79, 5), // "bytes"
QT_MOC_LITERAL(9, 85, 12), // "stateChanged"
QT_MOC_LITERAL(10, 98, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(11, 127, 11), // "socketState"
QT_MOC_LITERAL(12, 139, 5), // "error"
QT_MOC_LITERAL(13, 145, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(14, 174, 11), // "socketError"
QT_MOC_LITERAL(15, 186, 18), // "de_paket_7bit_buff"
QT_MOC_LITERAL(16, 205, 15), // "unsigned char[]"
QT_MOC_LITERAL(17, 221, 10), // "in2outbuff"
QT_MOC_LITERAL(18, 232, 5), // "count"
QT_MOC_LITERAL(19, 238, 13), // "workCmdBuffer"
QT_MOC_LITERAL(20, 252, 12), // "CheckTimeOut"
QT_MOC_LITERAL(21, 265, 21), // "make_packet_7bit_buff"
QT_MOC_LITERAL(22, 287, 9), // "buffer_in"
QT_MOC_LITERAL(23, 297, 6), // "length"
QT_MOC_LITERAL(24, 304, 8), // "sendData"
QT_MOC_LITERAL(25, 313, 9), // "update2DB"
QT_MOC_LITERAL(26, 323, 6), // "status"
QT_MOC_LITERAL(27, 330, 3), // "cmd"
QT_MOC_LITERAL(28, 334, 9), // "dayinweek"
QT_MOC_LITERAL(29, 344, 10), // "updated_at"
QT_MOC_LITERAL(30, 355, 4), // "name"
QT_MOC_LITERAL(31, 360, 9) // "refreshDB"

    },
    "TcpConnection\0dataReceived\0\0data\0"
    "connected\0disconnected\0readyRead\0"
    "bytesWritten\0bytes\0stateChanged\0"
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x0a /* Public */,
       5,    0,   88,    2, 0x0a /* Public */,
       6,    0,   89,    2, 0x0a /* Public */,
       7,    1,   90,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      15,    2,   99,    2, 0x0a /* Public */,
      19,    0,  104,    2, 0x0a /* Public */,
      20,    0,  105,    2, 0x0a /* Public */,
      21,    2,  106,    2, 0x0a /* Public */,
      24,    0,  111,    2, 0x0a /* Public */,
      25,    5,  112,    2, 0x0a /* Public */,
      31,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::UChar, 0x80000000 | 16, QMetaType::UChar,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UChar, 0x80000000 | 16, QMetaType::UChar,   22,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   26,   27,   28,   29,   30,
    QMetaType::Void,

       0        // eod
};

void TcpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpConnection *_t = static_cast<TcpConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->readyRead(); break;
        case 4: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: { unsigned char _r = _t->de_paket_7bit_buff((*reinterpret_cast< unsigned char(*)[]>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->workCmdBuffer(); break;
        case 9: _t->CheckTimeOut(); break;
        case 10: { unsigned char _r = _t->make_packet_7bit_buff((*reinterpret_cast< unsigned char(*)[]>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->sendData(); break;
        case 12: _t->update2DB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 13: _t->refreshDB(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TcpConnection::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpConnection::dataReceived)) {
                *result = 0;
                return;
            }
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TcpConnection::dataReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
