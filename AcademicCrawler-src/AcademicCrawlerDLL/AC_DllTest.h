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

// Function to Test Dll Generation
AC_DLL_TEST_EXPORT bool dllTestFunction( void );
//

// Class to Test Dll Generation
class AC_DLL_TEST_EXPORT DllTestPoint2D
{

public:

    DllTestPoint2D( void );

    DllTestPoint2D( const int tx, const int ty );

    DllTestPoint2D( const DllTestPoint2D& tp );

    DllTestPoint2D operator +( const DllTestPoint2D& tp );

    void operator =( const DllTestPoint2D& tp );

    void print( void );

public:

    int x, y;

};
// ! DllTestPoint2D

// Function to Test Dll Generation
AC_DLL_TEST_EXPORT bool dllTestClass( void );
//


#endif  // ! AC_DLL_TEST_H_

