/****************************************************************************
** Meta object code from reading C++ file 'MainForm.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x08,
      39,    9,    9,    9, 0x08,
      60,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainForm[] = {
    "MainForm\0\0state\0CheckBox_Toggled(bool)\0"
    "PushButton_Clicked()\0Action_Triggered()\0"
};

void MainForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainForm *_t = static_cast<MainForm *>(_o);
        switch (_id) {
        case 0: _t->CheckBox_Toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->PushButton_Clicked(); break;
        case 2: _t->Action_Triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainForm,
      qt_meta_data_MainForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainForm))
        return static_cast<void*>(const_cast< MainForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
