This is guide on how to use this logging header file.
setup:
to set it up, download the files, and delete every file except for the Log.h, and this file.
Then, and the Log.h, to the same folder with the code you wish to use this data logger with.
Then, in your code file where you are going to use this, type this, "#include "Log.h"".
your setup is complete.

Use Guide:

each function is easily usable, and you can also edit the data logger for yourself.
The entire data logger is the Log.h file, and the reason you would keep this, is to refer to the instructions when you need them.
The basic log function will print something to the console without creating the new line.
the logln function will print something to the console and create a new line.
type Tstart to starta  block of code, where you can enter any code that will be tried.
and ETry to end this block of code.
type CStart to add code to catch any errors in the block of code above.
type a parenthesis on the space directly after the CStart to add parameters for the block of code.
type ECatch to end this block.
create a new LoggingLevel with a constructor to give an initial level.
The different levels are Working, Not Working, Runtime Error, and Compile Error.
use the switchLevel function to change the level.
That is the guide for my data logger class.
