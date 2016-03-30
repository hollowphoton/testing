// learn.cpp - This is where I will be testing out things in the C++ course I'm taking

//headers
#include "stdafx.h"
#include "functions.h"
#include "classes.h"

//main
int main()
{

	//seed random number generator
	srand(time(0));

	//initialize mathbot
	mathBot Bender;

	//program loop
	while (Bender.quit == false) {
		//load main menu
		Bender.mainMenu();
	}
	
	//exit
    return 0;
}