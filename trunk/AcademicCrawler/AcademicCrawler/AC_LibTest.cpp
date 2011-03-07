//********************************************************************************
//
// File :           AC_LibTest.cpp
//
// Description :    test for academic-crawler lib generation
//
// Dependencies:    
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-27
//
//********************************************************************************

#include "AC_LibTest.h"

#include "../AcademicCrawlerDLL/AC_DllTest.h"

#include <iostream>
#include <vector>

// bool libTest( void )
bool libTest( void )
{
    std::cout << "AcademicCrawler.lib Called Successfully..." << std::endl;

    dllTestFunction();

    dllTestClass();

    return true;
}
//

// bool dllTestFunction( void )
bool dllTestFunction( void )
{
    std::cout << "Test DLL Function..." << std::endl << std::endl;

    std::cout << std::endl;

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