//********************************************************************************
//
// File :           main.cpp
//
// Description :    entrance of app
//
// Dependencies:    Qt-4.6.2
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-24
//
//********************************************************************************


#include "../AcademicCrawler/AC_LibTest.h"		// outside dependency

#include <iostream>

#include "AC_MainWindow.h"

#include "QtGui/QApplication"


int main( int argc, char* argv[] )
{
    QApplication app(argc, argv);

    AC_MainWindow mainWindow; mainWindow.show();


    libTest();

    //dllTestFunction();

    //dllTestClass();

    return app.exec();
}
