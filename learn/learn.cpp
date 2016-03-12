// learn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//main
int main()
{
	//init vars
	int a, b, sum, exit;

	//ask for values
	cout << "I'm a little computer brain that can add up two numbers. What's the first number you want me to add up?\n";
	cin >> a; 
	cout << "And the second?\n";
	cin >> b;

	//calc sum
	sum = a + b;

	//print to console
	cout << "\nHmm...thinking. \n\n13? 48? 1,433,456? \n\nNope. The sum must be " << sum << ".\n\n\n";
	cout << "Type any number and hit the enter key to exit...\n";
	cin >> exit;

	//exit
    return 0;
}

