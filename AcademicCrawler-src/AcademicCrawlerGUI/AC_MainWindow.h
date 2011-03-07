//********************************************************************************
//
// File :           AC_MainWindow.h
//
// Description :    defining main window of academic-crawler
//
// Dependencies:    Qt-4.6.2
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-24
//
//********************************************************************************

#ifndef AC_MAIN_WINDOW_H_

#define AC_MAIN_WINDOW_H_

#include "QtGui/QMainWindow"

//#include "CentralWidget.h"

class QWidget;
class QAction;
class QMenu;

// class AC_MainWindow
class AC_MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    AC_MainWindow( QWidget *parent = 0, Qt::WFlags flags = 0 );

    ~AC_MainWindow( void );

private slots:

    bool onExitMainWindow( void );

    bool onAboutTheme( void );

    bool onAboutSoftware( void );

private:

    bool createActions( void );

    bool createMenus( void );

    bool createToolBar( void );

    bool createStatusBar( void );

    bool setupSignalSlotMap( void );

    //AC_CentralWidget* centralWidget_;

    QMenu* menuFile_;
    QMenu* menuHelp_;

    QToolBar* toolBarMain_;

    QAction* actionExitMainWindow_;
    QAction* actionAboutTheme_;
    QAction* actionAboutSoftware_;

};
// ! AC_MainWindow

#endif //AC_MAIN_WINDOW_H_
