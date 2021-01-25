#pragma once


#include <iostream>

#define errorTryStart try{

#define errorEndTry }

#define errorCatchStart catch(int type){

#define errorEndCatch }

template <class T>
void log(T printable)
{
    std::cout << printable << std::endl;
}

template <class L>
void logln (L printable)
{
    std::cout << printable;
}

