#pragma once


#include <iostream>

/*notes: */

#define errorTryStart try{

#define errorEndTry }

#define errorCatchStart catch

#define errorEndCatch }
//________________________________________________


template <class T>
void log(T printable)
{
    /*notes: */
    std::cout << printable << std::endl;
}

template <class L>
void logln (L printable)
{
    /*notes: */
    std::cout << printable;
}

