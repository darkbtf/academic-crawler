//********************************************************************************
//
// File :           AC_DllTest.cpp
//
// Description :    test for academic-crawler dll generation
//
// Dependencies:    
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-28
//
//********************************************************************************

#include "AC_DllTest.h"

#include "../AcademicCrawler/AC_LibTest.h"		// lib dependency

#include <iostream>

#include <vector>

// bool dllTestFunction( void )
bool dllTestFunction( void )
{
    std::cout << "Test DLL Function..." << std::endl << std::endl;

    libTest(); std::cout << std::endl;

    std::cout << "AcademicCrawlerDLL.dll Called Successfully..." << std::endl << std::endl;
    std::cout << "---------------------------------------------" << std::endl << std::endl;

    return true;
}
//

// bool dllTestClass( void )
bool dllTestClass( void )
{
    std::cout << "Test DLL Class..." << std::endl << std::endl;

    std::vector< DllTestPoint2D > vecPoint; vecPoint.clear();

    DllTestPoint2D p0; vecPoint.push_back( p0 );
    DllTestPoint2D p1( 0, 1 ), p2( 2, 3 ); vecPoint.push_back( p1 ); vecPoint.push_back( p2 );
    DllTestPoint2D p3( p1 ); vecPoint.push_back( p3 );
    DllTestPoint2D p4 = p3; vecPoint.push_back( p4 );
    DllTestPoint2D p5 = p1 + p2; vecPoint.push_back( p5 );

    for ( size_t i = 0; i < vecPoint.size(); i ++ )
    {
        std::cout << "p" << i << " = "; vecPoint[i].print(); std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl << std::endl;

    return true;
}
//

// DllTestPoint2D::DllTestPoint2D( void )
DllTestPoint2D::DllTestPoint2D( void ) : x( 0 ), y( 0 ){}
//

// DllTestPoint2D::DllTestPoint2D( const int tx, const int ty )
DllTestPoint2D::DllTestPoint2D( const int tx, const int ty ) : x( tx ), y( ty ){}
//

// DllTestPoint2D::DllTestPoint2D( const DllTestPoint2D& tp )
DllTestPoint2D::DllTestPoint2D( const DllTestPoint2D& tp ) : x( tp.x ), y( tp.y ){}
//

// DllTestPoint2D DllTestPoint2D::operator +( const DllTestPoint2D &tp )
DllTestPoint2D DllTestPoint2D::operator +( const DllTestPoint2D &tp )
{
    DllTestPoint2D retPoint2D( this->x + tp.x, this->y + tp.y );

    return retPoint2D;
}
//

// void DllTestPoint2D::operator =(const DllTestPoint2D &tp)
void DllTestPoint2D::operator =( const DllTestPoint2D &tp )
{
    this->x = tp.x; this->y = tp.y;
}
//

// void DllTestPoint2D::print( void )
void DllTestPoint2D::print( void )
{
    std::cout << "( " << this->x << ", " << this->y << " )" << std::endl;
}
//

