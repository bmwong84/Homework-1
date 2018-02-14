*******************************************************
*  Name      :      Bryant Wong    
*  Student ID:      107571009           
*  Class     :  CSC 2421           
*  HW#       :  1                
*  Due Date  :  Jan. 25, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program "Guess"is supposed to be a pseudo-game where the system asks
a single player to choose n random integers from a range of 1 to m and then 
gives them 3 tries to guess the n integers correctly.  There can be repeats
and the player is informed of how many correct numbers they have guessed each try.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This has a member function call that contains all of the actual code.

Name:  Guess.h
   Contains the definition for the class Guess.

Name: Guess.cpp
   Contains void Guess::STartGuess() that contains all of the code to run the game.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************
The program compiles successfully on csegrid.
The program runs on csegrid however, some logic errors exist in the code in which
the scan never detects a correct number and leaves all foundVector values at 0.
	
Developed on Visual Studio Community 2015 14.0.25431.01 Update 3.
Compiled and run on csegrid.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WongHW1]

   Now you should see a directory named homework with the files:
        main.cpp
	Guess.cpp
	Guess.h
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WongHW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./hw1

4. Delete the obj files, executables, and core dump by
   %./make clean
