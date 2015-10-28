# arraryList
Data Structures Asignment 2 (fall 2013)
Prompt:
HOMEWORK #2:
Rebuilding the ArrayList 

Due Date:  Wednesday, September the 18th, 12:00 midnight
For this assignment, you need to submit a file called ‘arraylist.hpp’. 
Remember to put your name and section at the top of your program file.
Problem
Bender has once again put the “Planet Express” crew in trouble! In a rush to download software of dubious origin into the ships computers, Bender has overwritten essential software modules of the ship’s operating system!   
Thankfully, there is a backup tape available from which to restore the ship’s software. However, when testing the backup tape, the crew discovered that the software was incomplete.

A very important module of the operating system consists of two files:
‘arraylist.h’ : an specification of a templated ArrayList class.
‘arraylist.hpp’ : the implementation of the ArrayList class.

Unfortunately, while the backup tape contains the ‘arraylist.h’ file, the ‘arraylist.hpp’ file is damaged.


Your Job
Use your mad coding skillz and help the “Planet Express” crew recreate the ‘arraylist.hpp’ file from your knowledge of Data Structures and the documentation contained in the ‘arraylist.h’ file.
Testing
The backup tape also contains sample programs that make use of the ArrayList class and their corresponding outputs. You can use them to check if your implementation is working correctly. As long as your ArrayList class behaves just like the original, The crew will be able to restore the ship’s operating system.
For example, the program ‘smalltester.cpp’ uses the ArrayList class and is supposed to produce the output ‘smalloutput.txt’.

Useful Hints
Carefully read the comments of each member function. 
Write down an algorithm for the function before you start coding it. 
Develop your member functions one at a time, starting from the simplest ones.
Move to the next function only after the previous one has been tested. 
Trying to code the whole class and then remove the bugs may prove to be too big a task.
Use the provided friend function operator<< to observe the status of your lists.
When a function that needs to return something “panics”, return the ‘m_errobj’ member.
The default constructor and function max() are inline on the class definition. You do not need to implement them.
