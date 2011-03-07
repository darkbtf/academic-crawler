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

#include <iostream>

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

