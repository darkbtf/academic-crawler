//********************************************************************************
//
// File :           AC_MainWindow.cpp
//
// Description :    implement main window of academic-crawler
//
// Dependencies:    Qt-4.6.2
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-24
//
//********************************************************************************

#include "QtGui/QMenuBar"
#include "QtGui/QMenu"
#include "QtGui/QToolBar"
#include "QtGui/QStatusBar"
#include "QtGui/QAction"
#include "QtGui/QMessageBox"
#include "QtCore/QString"
#include "QtGui/QFileDialog"

//#include "AC_CentralManager.h"

#include "AC_MainWindow.h"

//--------------------------------------------------------------------------------
AC_MainWindow::AC_MainWindow( QWidget *parent /* = 0 */, Qt::WFlags flags /* = 0 */ )
: QMainWindow( parent, flags )
{
    this->createActions();
    this->createMenus();
    this->createToolBar();
    this->createStatusBar();
    this->setupSignalSlotMap();

    //this->centralWidget_ = new AC_CentralWidget( this );
    //this->setCentralWidget( this->centralWidget_ );

    this->setWindowTitle( "Academic-Crawler V1.0" );
    this->setGeometry( 100, 100, 800, 600 );
}
//

//--------------------------------------------------------------------------------
AC_MainWindow::~AC_MainWindow( void )
{
    //delete this->centralWidget_;
    //this->centralWidget_ = 0;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::createActions( void )
{
    this->actionExitMainWindow_ = new QAction( "Exit", this );
    this->actionAboutTheme_ = new QAction( "About Theme", this );
    this->actionAboutSoftware_ = new QAction( "About Software", this );

    this->actionExitMainWindow_->setStatusTip( "Exit The Program" );
    this->actionAboutTheme_->setStatusTip( "About Use Of The Program" );
    this->actionAboutSoftware_->setStatusTip( "About Version Information Of The Program" );

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::createMenus( void )
{
    this->menuFile_ = this->menuBar()->addMenu( "File" );
    this->menuHelp_ = this->menuBar()->addMenu( "Help" );

    this->menuFile_->addSeparator();
    this->menuFile_->addAction( this->actionExitMainWindow_ );

    this->menuHelp_->addAction( this->actionAboutTheme_ );
    this->menuHelp_->addAction( this->actionAboutSoftware_ );

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::createToolBar( void )
{
    this->toolBarMain_ = this->addToolBar( "MainToolBar" );

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::createStatusBar( void )
{
    this->statusBar();

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::setupSignalSlotMap( void )
{
    // action signal-slot map
    connect( this->actionExitMainWindow_, SIGNAL( triggered() ), this, SLOT( exitMainWindow() ) );

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::exitMainWindow( void )
{
    //QMessageBox::information( 0, "Notice", "ExitMainWindow Commencing" );

    this->close();

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::aboutTheme( void )
{
    QMessageBox::information( 0, "Notice", "AboutTheme Commencing" );

    return true;
}
//

//--------------------------------------------------------------------------------
bool AC_MainWindow::aboutSoftware( void )
{
    QMessageBox::information( 0, "Notice", "AboutSoftware Commencing" );

    return true;
}
//


