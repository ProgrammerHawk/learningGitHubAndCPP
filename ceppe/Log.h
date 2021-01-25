#pragma once

#include <iostream>

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
