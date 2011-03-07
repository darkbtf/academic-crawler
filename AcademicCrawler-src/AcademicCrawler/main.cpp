//********************************************************************************
//
// File :           main.cpp
//
// Description :    main entrance of app
//
// Dependencies:    Qt-4.6.2
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-24
//
//********************************************************************************

#include "QtGui/QApplication"

#include "AC_MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    AC_MainWindow mainWindow; mainWindow.show();

    return app.exec();
}
