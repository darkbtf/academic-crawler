/****************************************************************************
** Meta object code from reading C++ file 'AC_MainWindow.h'
**
** Created: Sun Feb 27 20:29:53 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AC_MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AC_MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AC_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   15,   14, 0x08,
      39,   14,   15,   14, 0x08,
      54,   14,   15,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AC_MainWindow[] = {
    "AC_MainWindow\0\0bool\0onExitMainWindow()\0"
    "onAboutTheme()\0onAboutSoftware()\0"
};

const QMetaObject AC_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AC_MainWindow,
      qt_meta_data_AC_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AC_MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AC_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AC_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AC_MainWindow))
        return static_cast<void*>(const_cast< AC_MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AC_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = onExitMainWindow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = onAboutTheme();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = onAboutSoftware();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
