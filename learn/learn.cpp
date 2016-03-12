// learn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//main
int main()
{
	//init vars
	int a,b,sum;

	//ask for values
	cout << "I'm a little computer brain that can add up two numbers. What's the first number you want me to add up?\n";
	cin >> a; 
	cout << "And the second?\n";
	cin >> b;

	//calc sum
	sum = a + b;

	//print to console
	cout << "\nHmm...thinking. \n\n13? 48? 1,433,456? \n\nNope. The sum must be " << sum << ".\n\n\n";

	//exit
    return 0;
}

