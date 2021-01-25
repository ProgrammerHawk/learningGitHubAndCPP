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

class LoggingLevel
/*notes: */
{
public:
    std::string level;
    Level(std::string Lvl)
    {
        if (lvl != "Working" && lvl != "Not Working" && lvl != "Runtime Error" && lvl != "Compiling Error" && lvl != "NULL")
        {
            log("Invalid level");
        }
        else
        {
            level = lvl
        }
        
    }
    
    void switchLevel(std::string lvl)
    {
        if (lvl != "Working" && lvl != "Not Working" && lvl != "Runtime Error" && lvl != "Compiling Error" && lvl != "NULL")
        {
            log("Invalid level");
        }
        else
        {
            level = lvl
        }
    }
}
