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


bool dllTest( void )
{
    libTest();

    std::cout << "AcademicCrawlerDLL.dll Called Successfully..." << std::endl << std::endl;

    return true;
}

