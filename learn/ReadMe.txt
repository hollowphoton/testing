  _______ _______ _______ _     _ ______  _______ _______  
  |  |  | |_____|    |    |_____| |_____] |     |    |     
  |  |  | |     |    |    |     | |_____] |_____|    |     
                                                           
                        version 1.4                        
                                                           
===============---------- READ ME ----------===============

This app is my testbed for learning C++ again. I'm updating
this as I learn new things here and there. Please check
this out and let me know if you find any issues, bugs, or
can think of any better ways to implement existing code.

===============---------- UP NEXT ----------===============

-Need to find a way to block errors like submitting '1a' in
 the options menu; it works as 1 when ingested as an int.
-add raw arithmetic parser? long term goal.
-call explode() if an error is returned by any function.

===============---------- CHANGES ----------===============

2016-04-05
	-updated error checking on the main menu & func list

2016-04-04
	-previously, if a non-number was entered in a function,
	 the program 'misheard' the user and suggested a random
	 number. I have removed this, despite being funny, and
	 now have it clear the CIN and ask again infinitely.
	-added CIN fail checking to the main menu and list of
	 options.
	-fixed the factorial function to only work on whole
	 numbers.
	-changed all vars & functions to use number types with
	 the largest possible range. 
	-fixed the exponent function to properly calculate
	 negative exponents.

2016-04-03
	-added meltdown method (for impossible calculations)
	-now checks CIN fail + corrects for it
	-added pauses for look & feel
	-moved math vars inside mathBOT
	-added menu graphics
	-all functions support floats now
	-improved random # generation
	-checks for divide by 0, causes meltdown
	-all methods private besides mainMenu

2016-03-29
	-made a mathBOT class with many functions
	-all interaction with mathBOT is now done through
	 methods
	-now features 6 math functions: add, subtract,
	 multiply, divide, exponent, factorial
	-fixed some issues with unwanted recursion

2016-03-21
	-added guesses for the solution using random numbers
	-added arrays for values and a function for the
	 addition calculation

2016-03-12
	-Setup GitHub, tested pushing a release successfully
	-The program can add two values
	-Exit the program by entering any int value and hitting
	 enter