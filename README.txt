This is he guide on how to use this logging header file.
setup:
To set it up, download the files, and delete every file except for the .h files, and this file.
Then, put all the .h files, to the same folder with the code you wish to use this data logger with.
Then, in your code file where you are going to use this, type this, "#include "eachofthedotHfiles.h"".
Your setup is complete.

User Guide:

Each function is easily usable, and you can also edit the data logger for yourself.
The entire data logger is made up of the .h files, and the reason you would keep this, is to refer to the instructions when you need them.
The basic log function will print something to the console without creating the new line.
The logln function will print something to the console and create a new line.
Type Tstart to starta  block of code, where you can enter any code that will be tried.
Add ETry to end this block of code.
Type CStart to add code to catch any errors in the block of code above.
Type a parenthesis on the space directly after the CStart to add parameters for the block of code.
Type ECatch to end this block.
Create a new LoggingLevel with a constructor to give an initial level.
The different levels are Working, Not Working, Runtime Error, Compile Error, NULL, and Warning.
Use the switchLevel function to change the level.
That is the guide for my data logger class.
