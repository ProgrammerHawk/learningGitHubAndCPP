#pragma once


#include <iostream>

/*notes: */

#define TStart try{

#define ETry }

#define CStart catch

#define ECatch }
//________________________________________________


template <class T>
void logln(T printable)
{
    /*notes: Sometimes gives error when printing things, because to print certain things, calls are ambigous.*/
    std::cout << printable << std::endl;
}

template <class L>
void log(L printable)
{
    /*notes: Sometimes gives error when printing things, because to print certain things, calls are ambigous.*/
    std::cout << printable;
}

class LoggingLevel
/*notes: */
{
public:
    std::string level;
    LoggingLevel(std::string Lvl)
    {
        if (Lvl != "Working"
            && Lvl != "Not Working"
            && Lvl != "Runtime Error"
            && Lvl != "Compiling Error"
            && Lvl != "NULL"
            && Lvl != "Warning")
        {
            log("Invalid level, level will be set to NULL");
            level = "NULL";
        }
        else
        {
            level = Lvl;
        }
        
    }
    
    void switchLevel(std::string lvl)
    {
        if (lvl != "Working"
            && lvl != "Not Working"
            && lvl != "Runtime Error"
            && lvl != "Compiling Error"
            && lvl != "NULL"
            && lvl != "Warning")
        {
            log("Invalid level, level will be set to NULL");
            level = "NULL";
        }
        else
        {
            level = lvl;
        }
    }
};
