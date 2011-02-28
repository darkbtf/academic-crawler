//********************************************************************************
//
// File :           AC_DllTest.h
//
// Description :    test for academic-crawler dll
//
// Dependencies:    
//
// Author :         UlMonkey1987( WU Kan )
//
// Date :           2011-2-28
//
//********************************************************************************

#ifndef AC_DLL_TEST_H_
#define AC_DLL_TEST_H_

// switch

#define EXPORTING_AC_DLL_TEST_

// ! switch

#ifdef EXPORTING_AC_DLL_TEST_
    #define AC_DLL_TEST_EXPORT __declspec(dllexport)
#else
    #define AC_DLL_TEST_EXPORT __declspec(dllimport)
#endif

// Function to Test Lib Generation
AC_DLL_TEST_EXPORT bool dllTest( void );
//

#endif  // ! AC_DLL_TEST_H_

