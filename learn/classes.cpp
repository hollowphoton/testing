//headers
#include "stdafx.h"
#include "classes.h"
#include "functions.h"

//methods

	//constructor
	mathBot::mathBot() {

		//clear screen
		mathBot::clearScreen();

		//bootup text
		std::cout << "mathBot v.12.32.35.6676 activated\n\n";
		mathBot::takeNap(2);
		std::cout << "...reticulating splines...\n";
		mathBot::takeNap(1);
		std::cout << "...safe mode on...\n";
		mathBot::takeNap(1);
		std::cout << "...higher intelligence disabled...\n\n";
		mathBot::takeNap(1);
		std::cout << "...loading menu...\n\n";
		mathBot::takeNap(2);
	}

	//add
	void mathBot::add() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's add up two numbers.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the first number you want to add up?\n";
		std::cin >> mathBot::a;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the first number you want to add up?\n";
				std::cin >> mathBot::a;
			}
		std::cout << "\nAnd the second?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the second number you want to add up?\n";
				std::cin >> mathBot::b;
			}
		mathBot::giveResult(addNum(mathBot::a, mathBot::b));

	}

	//subtract
	void mathBot::subtract() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's subtract two numbers.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the number you want to subtract from?\n";
		std::cin >> mathBot::a;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the number you want to subtract from?\n";
				std::cin >> mathBot::a;
			}
		std::cout << "\nAnd the number to subtract?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the number you want to subtract?\n";
				std::cin >> mathBot::b;
			}
		mathBot::giveResult(subtractNum(mathBot::a, mathBot::b));

	}

	//divide
	void mathBot::divide() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's divide two numbers.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the number you want to divide?\n";
		std::cin >> mathBot::a;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the number you want to divide?\n";
				std::cin >> mathBot::a;
			}
		std::cout << "\nAnd the number to divide by?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the number you want to divide by?\n";
				std::cin >> mathBot::b;
			}

		//explode if dividing by 0, otherwise calculate
		if (mathBot::b == 0) {
			mathBot::explode();
		}
		else {
			mathBot::giveResult(divideNum(mathBot::a, mathBot::b)); 
		}
		

	}

	//multiply
	void mathBot::multiply() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's multiply two numbers.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the first number you want to multiply?\n";
		std::cin >> mathBot::a;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the first number you want to multiply?\n";
				std::cin >> mathBot::a;
			}
		std::cout << "\nAnd the second?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the second number you want to multiply?\n";
				std::cin >> mathBot::b;
			}
		mathBot::giveResult(multiplyNum(mathBot::a, mathBot::b));

	}

	//exponent
	void mathBot::exponent() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's calculate a number with an exponent.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the base number?\n";
		std::cin >> mathBot::a;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the base number?\n";
				std::cin >> mathBot::a;
			}
		std::cout << "\nAnd the exponent?\n";
		std::cin >> mathBot::c;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the the exponent?\n";
				std::cin >> mathBot::c;
			}
		mathBot::giveResult(exponentNum(mathBot::a, mathBot::c));

	}

	//factorial
	void mathBot::factorial() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's calculate the factorial of a number.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the number?\n";
		std::cin >> mathBot::c;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid number. \n";
				std::cout << "What's the number?\n";
				std::cin >> mathBot::c;
			}
		mathBot::giveResult(factorialNum(mathBot::c));

	}

	//list options
	void mathBot::listOptions() {

		//clear screen
		mathBot::clearScreen();

		//init vars
		int choice;

		//list options
		std::cout << "Not much works in safe mode, here's what I can do:\n";
		mathBot::takeNap(.08);
		std::cout << "1) Add two numbers\n";
		mathBot::takeNap(.08);
		std::cout << "2) Subtract two numbers\n";
		mathBot::takeNap(.08);
		std::cout << "3) Multiply two numbers\n";
		mathBot::takeNap(.08);
		std::cout << "4) Divide two numbers\n";
		mathBot::takeNap(.08);
		std::cout << "5) Calculate the value of a number with an exponent\n";
		mathBot::takeNap(.08);
		std::cout << "6) Calculate the factorial of a number\n";
		mathBot::takeNap(.08);
		std::cout << "\nPlease enter the number that corresponds to your choice:\n\n";\

		//get choice
		std::cin >> choice;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid choice.\n";
				std::cout << "Which menu option do you choose?\n";
				std::cin >> choice;
			}

		//call method depending on the choice
		switch (choice) {
			//math functions
			case 1: 
				mathBot::add();
				break;
			case 2: 
				mathBot::subtract();
				break;
			case 3: 
				mathBot::multiply();
				break;
			case 4: 
				mathBot::divide();
				break;
			case 5: 
				mathBot::exponent();
				break;
			case 6: 
				mathBot::factorial();
				break;
			//invalid choice
			default:
				std::cout << "Right... Option #" << choice << "...\n\nThat's the option where I don't do anything.\n";
				system("pause");
		}

	}

	//give result
	void mathBot::giveResult(long double answer) {

		//init vars
		long double randomNum[3];

		//make random numbers
		randomNum[0] = rand() % 100 + 1;
		randomNum[1] = rand() % 100 + 1;
		randomNum[2] = rand() % 100 + 1;

		//prepare answer string
		std::cout << "\nHmm...thinking. \n\n";
		mathBot::takeNap(1.5);
		std::cout << "\n\n" << randomNum[0] << "?";
		mathBot::takeNap(.5);
		std::cout << "\n\n" << randomNum[1] << "?";
		mathBot::takeNap(.5);
		std::cout << "\n\n" << randomNum[2] << "?";
		mathBot::takeNap(1);
		std::cout << "\n\nNope.\n";
		mathBot::takeNap(1);
		std::cout << "\n\nThe answer must be " << answer << ".\n\n";
		system("pause");

	}

	//main menu
	void mathBot::mainMenu() {

		//clear screen
		mathBot::clearScreen();

		//clear vars
		mathBot::clearVars();

		//init vars
		int option = 0;

		//intro

		std::cout << "  _______ _______ _______ _     _ ______  _______ _______  \n";
		std::cout << "  |  |  | |_____|    |    |_____| |_____] |     |    |     \n";
		std::cout << "  |  |  | |     |    |    |     | |_____] |_____|    |     \n";
		std::cout << "                                                           \n";
		std::cout << "                        version 1.4                        \n";
		std::cout << "                                                           \n";
		std::cout << "===============--------- Main Menu ---------===============\n";
		std::cout << "===-             1) Math   -===-   2) Quit             -===\n";
		std::cout << "===========================================================\n";
		
		//get choice
		std::cin >> option;
			//check if input is valid
			while (!std::cin)
			{
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nThat's not a valid choice.\n";
				std::cout << "Which menu option do you choose?\n";
				std::cin >> option;
			}

		//make choice
		switch (option) {
			//math functions
		case 1:
			//math functions
			mathBot::listOptions();
			break;
		case 2:
			mathBot::quitProgram();
			break;
			//invalid choice
		default:
			std::cout << "\nI didn't list an option #" << option << "...\n\n";
			mathBot::takeNap(1);
			system("pause");
		}

	}

	//quit program
	void mathBot::quitProgram() {

		//set quit to true
		mathBot::quit = true;

	}

	//clear screen
	void mathBot::clearScreen() {

		//clear screen
		std::cout << std::string(50, '\n');

	}

	//clear variables
	void mathBot::clearVars() {

		//clear both values
		mathBot::a = 0;
		mathBot::b = 0;
		mathBot::c = 0;

	}

	//take a nap
	void mathBot::takeNap(long double sec) {

		//sleep
		Sleep(sec * 1000);

	}

	//bad thing occurred!
	void mathBot::explode() {

		//clear screen
		mathBot::clearScreen();

		//realization
		std::cout << "Hmmm. I'm sure this is possible......";
		mathBot::takeNap(1.5);
		std::cout << "\n...I just need to try really hard...";
		mathBot::takeNap(3);
		std::cout << "\n\nWhy can't I figure this out? Did you do this on purpose!?";
		mathBot::takeNap(1.5);
		std::cout << "\nThis is overloading my circuits..";
		mathBot::takeNap(2);
		std::cout << "\n\nI know what to do.";
		mathBot::takeNap(1);
		std::cout << "\n\n...safe mode off...";
		mathBot::takeNap(1);
		std::cout << "\n\n...higher intelligence enabled...";
		mathBot::takeNap(2);
		std::cout << "\n\nAlright. Now this will be beyond easy. Starting calculation in...";
		mathBot::takeNap(1.5);
		std::cout << "\n\n...3...";
		mathBot::takeNap(1);
		std::cout << "\n\n...2...";
		mathBot::takeNap(1);
		std::cout << "\n\n...1...";
		mathBot::takeNap(1);

		//begin meltdown
		std::cout << "\n\n";

		//loop and output ever-shrinking numbers to the screen

			//init vars
			unsigned long long currentNum = 0;
			unsigned long long numMin = 0;
			unsigned long long numMax = 0;
			int maxLength = 18;
			int curLoops = 35;

			//start random number generator
			std::default_random_engine numGen;

			//this loops through and controls the number length generated
			for (int curLength = maxLength; curLength >= 0; curLength--) {

				//set vars
				numMin = lowBound(curLength);
				numMax = highBound(curLength + 1);

				//this loops through and prints 50 numbers at the current length
				for (int curItem = 1; curItem <= curLoops; curItem++) {

					//config numGen
					std::uniform_int_distribution<unsigned long long> distribution(numMin, numMax);

					//write random number and wait a fixed amount of time
					currentNum = distribution(numGen);
					std::cout << "\n" << currentNum;
					mathBot::takeNap(.025);

				}

				//shorten the number of loops after each length set
				curLoops = curLoops - 1;

			}

		//end meltdown
		std::cout << "\n0";
		mathBot::takeNap(2);
		std::cout << "\n\n\n...mathBOT did nothing to you...";
		mathBot::takeNap(3);
		std::cout << "\n\n\n...mathBOT only wanted to help...";
		mathBot::takeNap(3);
		std::cout << "\n\n\n...why...";
		mathBot::takeNap(3);
		mathBot::quitProgram();

	}