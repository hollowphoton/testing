// learn.cpp - This is where I will be testing out things in the C++ course I'm taking

//headers
#include "stdafx.h"
#include "functions.h"

//main
int main()
{
	//init vars
	int a, b, exit;
	int randomNum[3];
	std::string text[5];
	std::ostringstream rString;

	//set vars
	srand(time(0));
	randomNum[0] = rand();
	randomNum[1] = rand();
	randomNum[2] = rand();
	rString << "\nHmm...thinking. \n\n" << randomNum[0] << "? " << randomNum[1] << "? " << randomNum[2] << "? \n\nNope. The sum must be ";

	//set text vars
	text[0] = "I'm a little computer brain that can add up two numbers. What's the first number you want me to add up?\n";
	text[1] = "And the second?\n";
	text[2] = rString.str();
	text[3] = ".\n\n\n";
	text[4] = "Type any number and hit the enter key to exit...\n";

	//ask for values
	std::cout << text[0];
	std::cin >> a;
	std::cout << text[1];
	std::cin >> b;

	//print to console
	std::cout << text[2] << addNum(a,b) << text[3];
	std::cout << text[4];
	std::cin >> exit;

	//exit
    return 0;
}