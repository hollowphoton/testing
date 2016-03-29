//headers
#include "stdafx.h"
#include "classes.h"
#include "functions.h"

//methods

	//constructor
	mathBot::mathBot() {

		//clear screen
		std::cout << std::string(50, '\n');

		//bootup text
		std::cout << "mathBot v.12.32.35.6676 activated\n\n";
		std::cout << "...reticulating splines...\n";
		std::cout << "...safe mode on...\n";
		std::cout << "...higher intelligence disabled...\n\n";
		std::cout << "...ready...\n\n";
	}

	//add
	void mathBot::add() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		int a, b;

		//call function and print answer
		std::cout << "Ok. Let's add up two numbers.\n";
		std::cout << "What's the first number you want to add up?\n";
		std::cin >> a;
		std::cout << "And the second?\n";
		std::cin >> b;
		mathBot::giveResult(addNum(a, b));

	}

	//subtract
	void mathBot::subtract() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		int a, b;

		//call function and print answer
		std::cout << "Ok. Let's subtract two numbers.\n";
		std::cout << "What's the number you want to subtract from?\n";
		std::cin >> a;
		std::cout << "And the number to subtract?\n";
		std::cin >> b;
		mathBot::giveResult(subtractNum(a, b));

	}

	//divide
	void mathBot::divide() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		double a;
		int b;

		//call function and print answer
		std::cout << "Ok. Let's divide two numbers.\n";
		std::cout << "What's the number you want to divide?\n";
		std::cin >> a;
		std::cout << "And the number to divide by?\n";
		std::cin >> b;
		mathBot::giveResult(divideNum(a, b));

	}

	//multiply
	void mathBot::multiply() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		int a, b;

		//call function and print answer
		std::cout << "Ok. Let's multiply two numbers.\n";
		std::cout << "What's the first number you want to multiply?\n";
		std::cin >> a;
		std::cout << "And the second?\n";
		std::cin >> b;
		mathBot::giveResult(multiplyNum(a, b));

	}

	//exponent
	void mathBot::exponent() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		int a, b;

		//call function and print answer
		std::cout << "Ok. Let's calculate a number with an exponent.\n";
		std::cout << "What's the base number?\n";
		std::cin >> a;
		std::cout << "And the exponent?\n";
		std::cin >> b;
		mathBot::giveResult(exponentNum(a, b));

	}

	//factorial
	void mathBot::factorial() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		int a;

		//call function and print answer
		std::cout << "Ok. Let's calculate the factorial of a number.\n";
		std::cout << "What's the number?\n";
		std::cin >> a;
		mathBot::giveResult(factorialNum(a));

	}

	//list options
	void mathBot::listOptions() {

		//clear screen
		std::cout << std::string(50, '\n');

		//init vars
		int choice;

		//list options
		std::cout << "Not much works in safe mode, here's what I can do:\n";
		std::cout << "1) Add two numbers\n";
		std::cout << "2) Subtract two numbers\n";
		std::cout << "3) Multiply two numbers\n";
		std::cout << "4) Divide two numbers\n";
		std::cout << "5) Calculate the value of a number with an exponent\n";
		std::cout << "6) Calculate the factorial of a number\n";
		std::cout << "\nPlease enter the number that corresponds to your choice:\n\n";

		//get choice
		std::cin >> choice;

		//call method depending on the choice
		switch (choice) {
			//math functions
			case 1: mathBot::add();
			case 2: mathBot::subtract();
			case 3: mathBot::multiply();
			case 4: mathBot::divide();
			case 5: mathBot::exponent();
			case 6: mathBot::factorial();
			//invalid choice
			default: std::cout << "Right... Option #" << choice << "...\n\nThat's the option where I don't do anything.\n";
		}

	}

	//give result
	void mathBot::giveResult(double answer) {

		//init vars
		int randomNum[3];

		//make random numbers
		randomNum[0] = rand();
		randomNum[1] = rand();
		randomNum[2] = rand();

		//prepare answer string
		std::cout << "\nHmm...thinking. \n\n" << randomNum[0] << "? " << randomNum[1] << "? " << randomNum[2] << "? Nope. \n\nThe answer must be " << answer << "\n\n";
		system("pause");

		//clear screen
		std::cout << std::string(50, '\n');

		//go back to main menu
		mathBot::mainMenu();

	}

	//main menu
	void mathBot::mainMenu() {

		//init vars
		int option = 0;

		//intro
		std::cout << "===-Main Menu-===\n";
		std::cout << "=-   1) Math   -=\n";
		std::cout << "=-   2) Quit   -=\n";
		std::cout << "===-----------===\n";

		//get choice
		std::cin >> option;

		//make choice
		if (option == 1) {
			//math functions
			mathBot::listOptions();
		}

	}