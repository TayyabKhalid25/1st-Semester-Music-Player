/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Music_Player/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "PlaySong",
    "",
    "file",
    "durationChanged",
    "duration",
    "positionChanged",
    "progress",
    "on_pushButton_PlayPause_clicked",
    "on_pushButton_SeekForward_clicked",
    "on_pushButton_SeekBackward_clicked",
    "on_pushButton_Mute_clicked",
    "on_Seek_sliderMoved",
    "value",
    "on_Volume_valueChanged",
    "savePlaylist",
    "loadPlaylist",
    "on_pushButton_AddMedia_clicked",
    "on_pushButton_MediaBackward_clicked",
    "on_pushButton_MediaForward_clicked",
    "on_pushButton_RemoveMedia_clicked",
    "on_playlistWidget_itemDoubleClicked",
    "currentSong",
    "selectSong",
    "on_pushButton_Playback_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[50];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[16];
    char stringdata5[9];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[32];
    char stringdata9[34];
    char stringdata10[35];
    char stringdata11[27];
    char stringdata12[20];
    char stringdata13[6];
    char stringdata14[23];
    char stringdata15[13];
    char stringdata16[13];
    char stringdata17[31];
    char stringdata18[36];
    char stringdata19[35];
    char stringdata20[34];
    char stringdata21[36];
    char stringdata22[12];
    char stringdata23[11];
    char stringdata24[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 8),  // "PlaySong"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "file"
        QT_MOC_LITERAL(26, 15),  // "durationChanged"
        QT_MOC_LITERAL(42, 8),  // "duration"
        QT_MOC_LITERAL(51, 15),  // "positionChanged"
        QT_MOC_LITERAL(67, 8),  // "progress"
        QT_MOC_LITERAL(76, 31),  // "on_pushButton_PlayPause_clicked"
        QT_MOC_LITERAL(108, 33),  // "on_pushButton_SeekForward_cli..."
        QT_MOC_LITERAL(142, 34),  // "on_pushButton_SeekBackward_cl..."
        QT_MOC_LITERAL(177, 26),  // "on_pushButton_Mute_clicked"
        QT_MOC_LITERAL(204, 19),  // "on_Seek_sliderMoved"
        QT_MOC_LITERAL(224, 5),  // "value"
        QT_MOC_LITERAL(230, 22),  // "on_Volume_valueChanged"
        QT_MOC_LITERAL(253, 12),  // "savePlaylist"
        QT_MOC_LITERAL(266, 12),  // "loadPlaylist"
        QT_MOC_LITERAL(279, 30),  // "on_pushButton_AddMedia_clicked"
        QT_MOC_LITERAL(310, 35),  // "on_pushButton_MediaBackward_c..."
        QT_MOC_LITERAL(346, 34),  // "on_pushButton_MediaForward_cl..."
        QT_MOC_LITERAL(381, 33),  // "on_pushButton_RemoveMedia_cli..."
        QT_MOC_LITERAL(415, 35),  // "on_playlistWidget_itemDoubleC..."
        QT_MOC_LITERAL(451, 11),  // "currentSong"
        QT_MOC_LITERAL(463, 10),  // "selectSong"
        QT_MOC_LITERAL(474, 30)   // "on_pushButton_Playback_clicked"
    },
    "MainWindow",
    "PlaySong",
    "",
    "file",
    "durationChanged",
    "duration",
    "positionChanged",
    "progress",
    "on_pushButton_PlayPause_clicked",
    "on_pushButton_SeekForward_clicked",
    "on_pushButton_SeekBackward_clicked",
    "on_pushButton_Mute_clicked",
    "on_Seek_sliderMoved",
    "value",
    "on_Volume_valueChanged",
    "savePlaylist",
    "loadPlaylist",
    "on_pushButton_AddMedia_clicked",
    "on_pushButton_MediaBackward_clicked",
    "on_pushButton_MediaForward_clicked",
    "on_pushButton_RemoveMedia_clicked",
    "on_playlistWidget_itemDoubleClicked",
    "currentSong",
    "selectSong",
    "on_pushButton_Playback_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x08,    1 /* Private */,
       4,    1,  131,    2, 0x08,    3 /* Private */,
       6,    1,  134,    2, 0x08,    5 /* Private */,
       8,    0,  137,    2, 0x08,    7 /* Private */,
       9,    0,  138,    2, 0x08,    8 /* Private */,
      10,    0,  139,    2, 0x08,    9 /* Private */,
      11,    0,  140,    2, 0x08,   10 /* Private */,
      12,    1,  141,    2, 0x08,   11 /* Private */,
      14,    1,  144,    2, 0x08,   13 /* Private */,
      15,    0,  147,    2, 0x08,   15 /* Private */,
      16,    0,  148,    2, 0x08,   16 /* Private */,
      17,    0,  149,    2, 0x08,   17 /* Private */,
      18,    0,  150,    2, 0x08,   18 /* Private */,
      19,    0,  151,    2, 0x08,   19 /* Private */,
      20,    0,  152,    2, 0x08,   20 /* Private */,
      21,    0,  153,    2, 0x08,   21 /* Private */,
      22,    0,  154,    2, 0x08,   22 /* Private */,
      23,    0,  155,    2, 0x08,   23 /* Private */,
      24,    0,  156,    2, 0x08,   24 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::Void, QMetaType::ULongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'PlaySong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'on_pushButton_PlayPause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_SeekForward_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_SeekBackward_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Mute_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Seek_sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Volume_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'savePlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_AddMedia_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MediaBackward_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MediaForward_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_RemoveMedia_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playlistWidget_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentSong'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Playback_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlaySong((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 3: _t->on_pushButton_PlayPause_clicked(); break;
        case 4: _t->on_pushButton_SeekForward_clicked(); break;
        case 5: _t->on_pushButton_SeekBackward_clicked(); break;
        case 6: _t->on_pushButton_Mute_clicked(); break;
        case 7: _t->on_Seek_sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_Volume_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->savePlaylist(); break;
        case 10: _t->loadPlaylist(); break;
        case 11: _t->on_pushButton_AddMedia_clicked(); break;
        case 12: _t->on_pushButton_MediaBackward_clicked(); break;
        case 13: _t->on_pushButton_MediaForward_clicked(); break;
        case 14: _t->on_pushButton_RemoveMedia_clicked(); break;
        case 15: _t->on_playlistWidget_itemDoubleClicked(); break;
        case 16: { int _r = _t->currentSong();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->selectSong(); break;
        case 18: _t->on_pushButton_Playback_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
