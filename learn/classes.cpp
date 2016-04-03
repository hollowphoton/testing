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
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::a = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::a << " right? Ok.\n";
				
			}
		std::cout << "\nAnd the second?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::b = rand() % 100 + 1;
				
				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::b << " right? Ok.\n";
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
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::a = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::a << " right? Ok.\n";

			}
		std::cout << "\nAnd the number to subtract?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::b = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::b << " right? Ok.\n";
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
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::a = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::a << " right? Ok.\n";

			}
		std::cout << "\nAnd the number to divide by?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::b = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::b << " right? Ok.\n";
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
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::a = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::a << " right? Ok.\n";

			}
		std::cout << "\nAnd the second?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::b = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::b << " right? Ok.\n";
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
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::a = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::a << " right? Ok.\n";

			}
		std::cout << "\nAnd the exponent?\n";
		std::cin >> mathBot::b;
			//check if input is valid
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::b = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::b << " right? Ok.\n";
			}
		mathBot::giveResult(exponentNum(mathBot::a, mathBot::b));

	}

	//factorial
	void mathBot::factorial() {

		//clear screen
		mathBot::clearScreen();

		//call function and print answer
		std::cout << "Ok. Let's calculate the factorial of a number.\n";
		mathBot::takeNap(.5);
		std::cout << "What's the number?\n";
		std::cin >> mathBot::a;
			//check if input is valid
			if (!std::cin)
			{
				//code a with random # between 1 and 100
				mathBot::a = rand() % 100 + 1;

				// reset failure
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				//inform user
				std::cout << "\nI didn't hear you too well. You said " << mathBot::a << " right? Ok.\n";

			}
		mathBot::giveResult(factorialNum(mathBot::a));

	}

	//list options
	void mathBot::listOptions() {

		//clear screen
		mathBot::clearScreen();

		//init vars
		int choice;

		//list options
		std::cout << "Not much works in safe mode, here's what I can do:\n";
		mathBot::takeNap(1);
		std::cout << "1) Add two numbers\n";
		mathBot::takeNap(.1);
		std::cout << "2) Subtract two numbers\n";
		mathBot::takeNap(.1);
		std::cout << "3) Multiply two numbers\n";
		mathBot::takeNap(.1);
		std::cout << "4) Divide two numbers\n";
		mathBot::takeNap(.1);
		std::cout << "5) Calculate the value of a number with an exponent\n";
		mathBot::takeNap(.1);
		std::cout << "6) Calculate the factorial of a number\n";
		mathBot::takeNap(.1);
		std::cout << "\nPlease enter the number that corresponds to your choice:\n\n";\

		//get choice
		std::cin >> choice;

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
	void mathBot::giveResult(float answer) {

		//init vars
		float randomNum[3];

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

		std::cout << "  _______ _______ _______ _     _ ______   _____  _______  \n";
		std::cout << "  |  |  | |_____|    |    |_____| |_____] |     |    |     \n";
		std::cout << "  |  |  | |     |    |    |     | |_____] |_____|    |     \n";
		std::cout << "                                                           \n";
		std::cout << "                        version 1.2                        \n";
		std::cout << "                                                           \n";
		std::cout << "===============--------- Main Menu ---------===============\n";
		std::cout << "===-             1) Math   -===-   2) Quit             -===\n";
		std::cout << "===========================================================\n";
		
		//get choice
		std::cin >> option;

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
			std::cout << "\nI didn't list an Option #" << option << "...\n";
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

	}

	//take a nap
	void mathBot::takeNap(float sec) {

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
		std::cout << "\n\nAlright. Now this will be beyond easy. Starting calculation in 3...";
		mathBot::takeNap(1);
		std::cout << "\n\n...2...";
		mathBot::takeNap(1);
		std::cout << "\n\n...1...";
		mathBot::takeNap(1);
		//meltdown
		std::cout << "\n\n";
		std::cout << "\n5611333186758";
		mathBot::takeNap(.025);
		std::cout << "\n2477465498022";
		mathBot::takeNap(.025);
		std::cout << "\n2826204721194";
		mathBot::takeNap(.025);
		std::cout << "\n7526469888391";
		mathBot::takeNap(.025);
		std::cout << "\n4450068294255";
		mathBot::takeNap(.025);
		std::cout << "\n5289644823963";
		mathBot::takeNap(.025);
		std::cout << "\n9556175750492";
		mathBot::takeNap(.025);
		std::cout << "\n7994752537454";
		mathBot::takeNap(.025);
		std::cout << "\n2438311992420";
		mathBot::takeNap(.025);
		std::cout << "\n5937425171491";
		mathBot::takeNap(.025);
		std::cout << "\n9852828221840";
		mathBot::takeNap(.025);
		std::cout << "\n3723613051908";
		mathBot::takeNap(.025);
		std::cout << "\n6553392239096";
		mathBot::takeNap(.025);
		std::cout << "\n6839147558233";
		mathBot::takeNap(.025);
		std::cout << "\n3744415853869";
		mathBot::takeNap(.025);
		std::cout << "\n2541983907130";
		mathBot::takeNap(.025);
		std::cout << "\n4373055007709";
		mathBot::takeNap(.025);
		std::cout << "\n8919307854282";
		mathBot::takeNap(.025);
		std::cout << "\n9096826171755";
		mathBot::takeNap(.025);
		std::cout << "\n6092895753643";
		mathBot::takeNap(.025);
		std::cout << "\n3640673747611";
		mathBot::takeNap(.025);
		std::cout << "\n1817030547430";
		mathBot::takeNap(.025);
		std::cout << "\n5017391939211";
		mathBot::takeNap(.025);
		std::cout << "\n6337016118354";
		mathBot::takeNap(.025);
		std::cout << "\n4666081602853";
		mathBot::takeNap(.025);
		std::cout << "\n3643922396956";
		mathBot::takeNap(.025);
		std::cout << "\n3518170626949";
		mathBot::takeNap(.025);
		std::cout << "\n5928751675454";
		mathBot::takeNap(.025);
		std::cout << "\n8644262075110";
		mathBot::takeNap(.025);
		std::cout << "\n8886615050590";
		mathBot::takeNap(.025);
		std::cout << "\n7713225665834";
		mathBot::takeNap(.025);
		std::cout << "\n498652759438";
		mathBot::takeNap(.025);
		std::cout << "\n977515747545";
		mathBot::takeNap(.025);
		std::cout << "\n633207592817";
		mathBot::takeNap(.025);
		std::cout << "\n896507545377";
		mathBot::takeNap(.025);
		std::cout << "\n741600303938";
		mathBot::takeNap(.025);
		std::cout << "\n688328259934";
		mathBot::takeNap(.025);
		std::cout << "\n368332638054";
		mathBot::takeNap(.025);
		std::cout << "\n253667729089";
		mathBot::takeNap(.025);
		std::cout << "\n252955735003";
		mathBot::takeNap(.025);
		std::cout << "\n604953469044";
		mathBot::takeNap(.025);
		std::cout << "\n787924465891";
		mathBot::takeNap(.025);
		std::cout << "\n755369588453";
		mathBot::takeNap(.025);
		std::cout << "\n476298954841";
		mathBot::takeNap(.025);
		std::cout << "\n457643922672";
		mathBot::takeNap(.025);
		std::cout << "\n895994566644";
		mathBot::takeNap(.025);
		std::cout << "\n946307306737";
		mathBot::takeNap(.025);
		std::cout << "\n356096553856";
		mathBot::takeNap(.025);
		std::cout << "\n673867856044";
		mathBot::takeNap(.025);
		std::cout << "\n311311922460";
		mathBot::takeNap(.025);
		std::cout << "\n193898560379";
		mathBot::takeNap(.025);
		std::cout << "\n597054528417";
		mathBot::takeNap(.025);
		std::cout << "\n636845539345";
		mathBot::takeNap(.025);
		std::cout << "\n288471523580";
		mathBot::takeNap(.025);
		std::cout << "\n723570257250";
		mathBot::takeNap(.025);
		std::cout << "\n581476809518";
		mathBot::takeNap(.025);
		std::cout << "\n355181693934";
		mathBot::takeNap(.025);
		std::cout << "\n688099739875";
		mathBot::takeNap(.025);
		std::cout << "\n152373931482";
		mathBot::takeNap(.025);
		std::cout << "\n416018550517";
		mathBot::takeNap(.025);
		std::cout << "\n488281971146";
		mathBot::takeNap(.025);
		std::cout << "\n415061872852";
		mathBot::takeNap(.025);
		std::cout << "\n263162820987";
		mathBot::takeNap(.025);
		std::cout << "\n219918398232";
		mathBot::takeNap(.025);
		std::cout << "\n704242487883";
		mathBot::takeNap(.025);
		std::cout << "\n646221470066";
		mathBot::takeNap(.025);
		std::cout << "\n134750135613";
		mathBot::takeNap(.025);
		std::cout << "\n675831105152";
		mathBot::takeNap(.025);
		std::cout << "\n289792494553";
		mathBot::takeNap(.025);
		std::cout << "\n175299168956";
		mathBot::takeNap(.025);
		std::cout << "\n878011464490";
		mathBot::takeNap(.025);
		std::cout << "\n530175823844";
		mathBot::takeNap(.025);
		std::cout << "\n598210434381";
		mathBot::takeNap(.025);
		std::cout << "\n214386103365";
		mathBot::takeNap(.025);
		std::cout << "\n436834706050";
		mathBot::takeNap(.025);
		std::cout << "\n95147754597";
		mathBot::takeNap(.025);
		std::cout << "\n68617174560";
		mathBot::takeNap(.025);
		std::cout << "\n13954165262";
		mathBot::takeNap(.025);
		std::cout << "\n70636264604";
		mathBot::takeNap(.025);
		std::cout << "\n59986717643";
		mathBot::takeNap(.025);
		std::cout << "\n72334232947";
		mathBot::takeNap(.025);
		std::cout << "\n50237935824";
		mathBot::takeNap(.025);
		std::cout << "\n62571969394";
		mathBot::takeNap(.025);
		std::cout << "\n20317405226";
		mathBot::takeNap(.025);
		std::cout << "\n49336544020";
		mathBot::takeNap(.025);
		std::cout << "\n71781159256";
		mathBot::takeNap(.025);
		std::cout << "\n23713826615";
		mathBot::takeNap(.025);
		std::cout << "\n31418743633";
		mathBot::takeNap(.025);
		std::cout << "\n12490753616";
		mathBot::takeNap(.025);
		std::cout << "\n50477799093";
		mathBot::takeNap(.025);
		std::cout << "\n74039837414";
		mathBot::takeNap(.025);
		std::cout << "\n66772951078";
		mathBot::takeNap(.025);
		std::cout << "\n32117056817";
		mathBot::takeNap(.025);
		std::cout << "\n17323998869";
		mathBot::takeNap(.025);
		std::cout << "\n36041976060";
		mathBot::takeNap(.025);
		std::cout << "\n68459423598";
		mathBot::takeNap(.025);
		std::cout << "\n43201682343";
		mathBot::takeNap(.025);
		std::cout << "\n82115964268";
		mathBot::takeNap(.025);
		std::cout << "\n57558765587";
		mathBot::takeNap(.025);
		std::cout << "\n78313768383";
		mathBot::takeNap(.025);
		std::cout << "\n16282060858";
		mathBot::takeNap(.025);
		std::cout << "\n54599624176";
		mathBot::takeNap(.025);
		std::cout << "\n53764015572";
		mathBot::takeNap(.025);
		std::cout << "\n67691176897";
		mathBot::takeNap(.025);
		std::cout << "\n72344099233";
		mathBot::takeNap(.025);
		std::cout << "\n18245204653";
		mathBot::takeNap(.025);
		std::cout << "\n17099850264";
		mathBot::takeNap(.025);
		std::cout << "\n75617322367";
		mathBot::takeNap(.025);
		std::cout << "\n19343763166";
		mathBot::takeNap(.025);
		std::cout << "\n58672522626";
		mathBot::takeNap(.025);
		std::cout << "\n86425592270";
		mathBot::takeNap(.025);
		std::cout << "\n29105582328";
		mathBot::takeNap(.025);
		std::cout << "\n56909103735";
		mathBot::takeNap(.025);
		std::cout << "\n76579849114";
		mathBot::takeNap(.025);
		std::cout << "\n20185465348";
		mathBot::takeNap(.025);
		std::cout << "\n80039659338";
		mathBot::takeNap(.025);
		std::cout << "\n76649497890";
		mathBot::takeNap(.025);
		std::cout << "\n76575655361";
		mathBot::takeNap(.025);
		std::cout << "\n63832616692";
		mathBot::takeNap(.025);
		std::cout << "\n18233232197";
		mathBot::takeNap(.025);
		std::cout << "\n41549718449";
		mathBot::takeNap(.025);
		std::cout << "\n76360568357";
		mathBot::takeNap(.025);
		std::cout << "\n45625754087";
		mathBot::takeNap(.025);
		std::cout << "\n57785635437";
		mathBot::takeNap(.025);
		std::cout << "\n17145143347";
		mathBot::takeNap(.025);
		std::cout << "\n23897357213";
		mathBot::takeNap(.025);
		std::cout << "\n17573985843";
		mathBot::takeNap(.025);
		std::cout << "\n98340047356";
		mathBot::takeNap(.025);
		std::cout << "\n23289867663";
		mathBot::takeNap(.025);
		std::cout << "\n57252562300";
		mathBot::takeNap(.025);
		std::cout << "\n33864740056";
		mathBot::takeNap(.025);
		std::cout << "\n68934448275";
		mathBot::takeNap(.025);
		std::cout << "\n29000143616";
		mathBot::takeNap(.025);
		std::cout << "\n94428611438";
		mathBot::takeNap(.025);
		std::cout << "\n17244938389";
		mathBot::takeNap(.025);
		std::cout << "\n94997668042";
		mathBot::takeNap(.025);
		std::cout << "\n30010862051";
		mathBot::takeNap(.025);
		std::cout << "\n12169115399";
		mathBot::takeNap(.025);
		std::cout << "\n48788633495";
		mathBot::takeNap(.025);
		std::cout << "\n2622068904";
		mathBot::takeNap(.025);
		std::cout << "\n3682318618";
		mathBot::takeNap(.025);
		std::cout << "\n5167570558";
		mathBot::takeNap(.025);
		std::cout << "\n9076120781";
		mathBot::takeNap(.025);
		std::cout << "\n6473289159";
		mathBot::takeNap(.025);
		std::cout << "\n5924843207";
		mathBot::takeNap(.025);
		std::cout << "\n7808076327";
		mathBot::takeNap(.025);
		std::cout << "\n3441340883";
		mathBot::takeNap(.025);
		std::cout << "\n4382296334";
		mathBot::takeNap(.025);
		std::cout << "\n9920017559";
		mathBot::takeNap(.025);
		std::cout << "\n8396476165";
		mathBot::takeNap(.025);
		std::cout << "\n9327474704";
		mathBot::takeNap(.025);
		std::cout << "\n3075676917";
		mathBot::takeNap(.025);
		std::cout << "\n5391529816";
		mathBot::takeNap(.025);
		std::cout << "\n8705632202";
		mathBot::takeNap(.025);
		std::cout << "\n5129041700";
		mathBot::takeNap(.025);
		std::cout << "\n4329123083";
		mathBot::takeNap(.025);
		std::cout << "\n1686092841";
		mathBot::takeNap(.025);
		std::cout << "\n6619521747";
		mathBot::takeNap(.025);
		std::cout << "\n5800871177";
		mathBot::takeNap(.025);
		std::cout << "\n9993726099";
		mathBot::takeNap(.025);
		std::cout << "\n9918700788";
		mathBot::takeNap(.025);
		std::cout << "\n4059433653";
		mathBot::takeNap(.025);
		std::cout << "\n7689111203";
		mathBot::takeNap(.025);
		std::cout << "\n3403538778";
		mathBot::takeNap(.025);
		std::cout << "\n1286956104";
		mathBot::takeNap(.025);
		std::cout << "\n4326542830";
		mathBot::takeNap(.025);
		std::cout << "\n8261941682";
		mathBot::takeNap(.025);
		std::cout << "\n8294341476";
		mathBot::takeNap(.025);
		std::cout << "\n1385194237";
		mathBot::takeNap(.025);
		std::cout << "\n7174531662";
		mathBot::takeNap(.025);
		std::cout << "\n3546726677";
		mathBot::takeNap(.025);
		std::cout << "\n8706071744";
		mathBot::takeNap(.025);
		std::cout << "\n7043855746";
		mathBot::takeNap(.025);
		std::cout << "\n6440186822";
		mathBot::takeNap(.025);
		std::cout << "\n8727397543";
		mathBot::takeNap(.025);
		std::cout << "\n1964910489";
		mathBot::takeNap(.025);
		std::cout << "\n6536793987";
		mathBot::takeNap(.025);
		std::cout << "\n8467744923";
		mathBot::takeNap(.025);
		std::cout << "\n4276340845";
		mathBot::takeNap(.025);
		std::cout << "\n3301856630";
		mathBot::takeNap(.025);
		std::cout << "\n8753638161";
		mathBot::takeNap(.025);
		std::cout << "\n9957056093";
		mathBot::takeNap(.025);
		std::cout << "\n2942064149";
		mathBot::takeNap(.025);
		std::cout << "\n7497681940";
		mathBot::takeNap(.025);
		std::cout << "\n2268705629";
		mathBot::takeNap(.025);
		std::cout << "\n2806499188";
		mathBot::takeNap(.025);
		std::cout << "\n9172400515";
		mathBot::takeNap(.025);
		std::cout << "\n5729335114";
		mathBot::takeNap(.025);
		std::cout << "\n4544628890";
		mathBot::takeNap(.025);
		std::cout << "\n2831164011";
		mathBot::takeNap(.025);
		std::cout << "\n2926013312";
		mathBot::takeNap(.025);
		std::cout << "\n6184866832";
		mathBot::takeNap(.025);
		std::cout << "\n8320427539";
		mathBot::takeNap(.025);
		std::cout << "\n2747195720";
		mathBot::takeNap(.025);
		std::cout << "\n6682206581";
		mathBot::takeNap(.025);
		std::cout << "\n8054616194";
		mathBot::takeNap(.025);
		std::cout << "\n9389902233";
		mathBot::takeNap(.025);
		std::cout << "\n9467492117";
		mathBot::takeNap(.025);
		std::cout << "\n3842489086";
		mathBot::takeNap(.025);
		std::cout << "\n5159256585";
		mathBot::takeNap(.025);
		std::cout << "\n4379402564";
		mathBot::takeNap(.025);
		std::cout << "\n2913944165";
		mathBot::takeNap(.025);
		std::cout << "\n6218124960";
		mathBot::takeNap(.025);
		std::cout << "\n9020599230";
		mathBot::takeNap(.025);
		std::cout << "\n3221000380";
		mathBot::takeNap(.025);
		std::cout << "\n7427365932";
		mathBot::takeNap(.025);
		std::cout << "\n3934614760";
		mathBot::takeNap(.025);
		std::cout << "\n2613622812";
		mathBot::takeNap(.025);
		std::cout << "\n2517375969";
		mathBot::takeNap(.025);
		std::cout << "\n2779496427";
		mathBot::takeNap(.025);
		std::cout << "\n1488444236";
		mathBot::takeNap(.025);
		std::cout << "\n4498711665";
		mathBot::takeNap(.025);
		std::cout << "\n4559174952";
		mathBot::takeNap(.025);
		std::cout << "\n8122934938";
		mathBot::takeNap(.025);
		std::cout << "\n3592469789";
		mathBot::takeNap(.025);
		std::cout << "\n4100347122";
		mathBot::takeNap(.025);
		std::cout << "\n5036139908";
		mathBot::takeNap(.025);
		std::cout << "\n7120394040";
		mathBot::takeNap(.025);
		std::cout << "\n6640506373";
		mathBot::takeNap(.025);
		std::cout << "\n7759723110";
		mathBot::takeNap(.025);
		std::cout << "\n2996370063";
		mathBot::takeNap(.025);
		std::cout << "\n3344515760";
		mathBot::takeNap(.025);
		std::cout << "\n8366425939";
		mathBot::takeNap(.025);
		std::cout << "\n6131031520";
		mathBot::takeNap(.025);
		std::cout << "\n4497545111";
		mathBot::takeNap(.025);
		std::cout << "\n7788485798";
		mathBot::takeNap(.025);
		std::cout << "\n3457447361";
		mathBot::takeNap(.025);
		std::cout << "\n7554953604";
		mathBot::takeNap(.025);
		std::cout << "\n4307470316";
		mathBot::takeNap(.025);
		std::cout << "\n680668000";
		mathBot::takeNap(.025);
		std::cout << "\n429980551";
		mathBot::takeNap(.025);
		std::cout << "\n609573358";
		mathBot::takeNap(.025);
		std::cout << "\n465043675";
		mathBot::takeNap(.025);
		std::cout << "\n275189368";
		mathBot::takeNap(.025);
		std::cout << "\n664939118";
		mathBot::takeNap(.025);
		std::cout << "\n474932655";
		mathBot::takeNap(.025);
		std::cout << "\n507184813";
		mathBot::takeNap(.025);
		std::cout << "\n289212268";
		mathBot::takeNap(.025);
		std::cout << "\n857455043";
		mathBot::takeNap(.025);
		std::cout << "\n766386103";
		mathBot::takeNap(.025);
		std::cout << "\n615857917";
		mathBot::takeNap(.025);
		std::cout << "\n565797855";
		mathBot::takeNap(.025);
		std::cout << "\n484765861";
		mathBot::takeNap(.025);
		std::cout << "\n765020631";
		mathBot::takeNap(.025);
		std::cout << "\n451155019";
		mathBot::takeNap(.025);
		std::cout << "\n215082603";
		mathBot::takeNap(.025);
		std::cout << "\n449447383";
		mathBot::takeNap(.025);
		std::cout << "\n507270065";
		mathBot::takeNap(.025);
		std::cout << "\n144231001";
		mathBot::takeNap(.025);
		std::cout << "\n393755872";
		mathBot::takeNap(.025);
		std::cout << "\n351212762";
		mathBot::takeNap(.025);
		std::cout << "\n223243709";
		mathBot::takeNap(.025);
		std::cout << "\n543491146";
		mathBot::takeNap(.025);
		std::cout << "\n554001284";
		mathBot::takeNap(.025);
		std::cout << "\n728209570";
		mathBot::takeNap(.025);
		std::cout << "\n355470778";
		mathBot::takeNap(.025);
		std::cout << "\n532055906";
		mathBot::takeNap(.025);
		std::cout << "\n160432480";
		mathBot::takeNap(.025);
		std::cout << "\n690977778";
		mathBot::takeNap(.025);
		std::cout << "\n231587886";
		mathBot::takeNap(.025);
		std::cout << "\n822429329";
		mathBot::takeNap(.025);
		std::cout << "\n920338493";
		mathBot::takeNap(.025);
		std::cout << "\n976370478";
		mathBot::takeNap(.025);
		std::cout << "\n239665853";
		mathBot::takeNap(.025);
		std::cout << "\n553550314";
		mathBot::takeNap(.025);
		std::cout << "\n843913445";
		mathBot::takeNap(.025);
		std::cout << "\n719829235";
		mathBot::takeNap(.025);
		std::cout << "\n865363008";
		mathBot::takeNap(.025);
		std::cout << "\n646120517";
		mathBot::takeNap(.025);
		std::cout << "\n41544329";
		mathBot::takeNap(.025);
		std::cout << "\n45046313";
		mathBot::takeNap(.025);
		std::cout << "\n35435730";
		mathBot::takeNap(.025);
		std::cout << "\n47410292";
		mathBot::takeNap(.025);
		std::cout << "\n48255721";
		mathBot::takeNap(.025);
		std::cout << "\n32126788";
		mathBot::takeNap(.025);
		std::cout << "\n40878736";
		mathBot::takeNap(.025);
		std::cout << "\n49743814";
		mathBot::takeNap(.025);
		std::cout << "\n39213274";
		mathBot::takeNap(.025);
		std::cout << "\n46921076";
		mathBot::takeNap(.025);
		std::cout << "\n47741076";
		mathBot::takeNap(.025);
		std::cout << "\n74041608";
		mathBot::takeNap(.025);
		std::cout << "\n59720019";
		mathBot::takeNap(.025);
		std::cout << "\n41280134";
		mathBot::takeNap(.025);
		std::cout << "\n13344815";
		mathBot::takeNap(.025);
		std::cout << "\n46305577";
		mathBot::takeNap(.025);
		std::cout << "\n93251654";
		mathBot::takeNap(.025);
		std::cout << "\n11402368";
		mathBot::takeNap(.025);
		std::cout << "\n72428286";
		mathBot::takeNap(.025);
		std::cout << "\n53274179";
		mathBot::takeNap(.025);
		std::cout << "\n26349166";
		mathBot::takeNap(.025);
		std::cout << "\n23245262";
		mathBot::takeNap(.025);
		std::cout << "\n43753577";
		mathBot::takeNap(.025);
		std::cout << "\n21549651";
		mathBot::takeNap(.025);
		std::cout << "\n81987621";
		mathBot::takeNap(.025);
		std::cout << "\n66042665";
		mathBot::takeNap(.025);
		std::cout << "\n46623094";
		mathBot::takeNap(.025);
		std::cout << "\n69272891";
		mathBot::takeNap(.025);
		std::cout << "\n70971087";
		mathBot::takeNap(.025);
		std::cout << "\n91247108";
		mathBot::takeNap(.025);
		std::cout << "\n93949953";
		mathBot::takeNap(.025);
		std::cout << "\n75603379";
		mathBot::takeNap(.025);
		std::cout << "\n52626697";
		mathBot::takeNap(.025);
		std::cout << "\n83518154";
		mathBot::takeNap(.025);
		std::cout << "\n68103001";
		mathBot::takeNap(.025);
		std::cout << "\n9092969";
		mathBot::takeNap(.025);
		std::cout << "\n5043843";
		mathBot::takeNap(.025);
		std::cout << "\n5591241";
		mathBot::takeNap(.025);
		std::cout << "\n7150282";
		mathBot::takeNap(.025);
		std::cout << "\n5713375";
		mathBot::takeNap(.025);
		std::cout << "\n3615366";
		mathBot::takeNap(.025);
		std::cout << "\n1729481";
		mathBot::takeNap(.025);
		std::cout << "\n8950340";
		mathBot::takeNap(.025);
		std::cout << "\n5817471";
		mathBot::takeNap(.025);
		std::cout << "\n3712797";
		mathBot::takeNap(.025);
		std::cout << "\n9841385";
		mathBot::takeNap(.025);
		std::cout << "\n7717068";
		mathBot::takeNap(.025);
		std::cout << "\n8432362";
		mathBot::takeNap(.025);
		std::cout << "\n7546847";
		mathBot::takeNap(.025);
		std::cout << "\n4422902";
		mathBot::takeNap(.025);
		std::cout << "\n6088057";
		mathBot::takeNap(.025);
		std::cout << "\n8930064";
		mathBot::takeNap(.025);
		std::cout << "\n5673966";
		mathBot::takeNap(.025);
		std::cout << "\n1135050";
		mathBot::takeNap(.025);
		std::cout << "\n6076242";
		mathBot::takeNap(.025);
		std::cout << "\n4994600";
		mathBot::takeNap(.025);
		std::cout << "\n4894627";
		mathBot::takeNap(.025);
		std::cout << "\n5542515";
		mathBot::takeNap(.025);
		std::cout << "\n6317251";
		mathBot::takeNap(.025);
		std::cout << "\n9658946";
		mathBot::takeNap(.025);
		std::cout << "\n6840736";
		mathBot::takeNap(.025);
		std::cout << "\n6148764";
		mathBot::takeNap(.025);
		std::cout << "\n2841887";
		mathBot::takeNap(.025);
		std::cout << "\n7470456";
		mathBot::takeNap(.025);
		std::cout << "\n1867651";
		mathBot::takeNap(.025);
		std::cout << "\n8121927";
		mathBot::takeNap(.025);
		std::cout << "\n5381011";
		mathBot::takeNap(.025);
		std::cout << "\n2180546";
		mathBot::takeNap(.025);
		std::cout << "\n4615441";
		mathBot::takeNap(.025);
		std::cout << "\n8033922";
		mathBot::takeNap(.025);
		std::cout << "\n4425844";
		mathBot::takeNap(.025);
		std::cout << "\n1571810";
		mathBot::takeNap(.025);
		std::cout << "\n7226466";
		mathBot::takeNap(.025);
		std::cout << "\n856924";
		mathBot::takeNap(.025);
		std::cout << "\n428243";
		mathBot::takeNap(.025);
		std::cout << "\n117844";
		mathBot::takeNap(.025);
		std::cout << "\n675592";
		mathBot::takeNap(.025);
		std::cout << "\n498760";
		mathBot::takeNap(.025);
		std::cout << "\n118169";
		mathBot::takeNap(.025);
		std::cout << "\n226945";
		mathBot::takeNap(.025);
		std::cout << "\n348217";
		mathBot::takeNap(.025);
		std::cout << "\n400068";
		mathBot::takeNap(.025);
		std::cout << "\n844602";
		mathBot::takeNap(.025);
		std::cout << "\n629082";
		mathBot::takeNap(.025);
		std::cout << "\n945640";
		mathBot::takeNap(.025);
		std::cout << "\n555131";
		mathBot::takeNap(.025);
		std::cout << "\n184772";
		mathBot::takeNap(.025);
		std::cout << "\n282516";
		mathBot::takeNap(.025);
		std::cout << "\n492580";
		mathBot::takeNap(.025);
		std::cout << "\n114595";
		mathBot::takeNap(.025);
		std::cout << "\n273005";
		mathBot::takeNap(.025);
		std::cout << "\n141308";
		mathBot::takeNap(.025);
		std::cout << "\n300924";
		mathBot::takeNap(.025);
		std::cout << "\n325740";
		mathBot::takeNap(.025);
		std::cout << "\n864398";
		mathBot::takeNap(.025);
		std::cout << "\n353172";
		mathBot::takeNap(.025);
		std::cout << "\n807765";
		mathBot::takeNap(.025);
		std::cout << "\n828610";
		mathBot::takeNap(.025);
		std::cout << "\n474917";
		mathBot::takeNap(.025);
		std::cout << "\n637097";
		mathBot::takeNap(.025);
		std::cout << "\n746808";
		mathBot::takeNap(.025);
		std::cout << "\n545096";
		mathBot::takeNap(.025);
		std::cout << "\n607532";
		mathBot::takeNap(.025);
		std::cout << "\n126760";
		mathBot::takeNap(.025);
		std::cout << "\n864198";
		mathBot::takeNap(.025);
		std::cout << "\n896251";
		mathBot::takeNap(.025);
		std::cout << "\n599236";
		mathBot::takeNap(.025);
		std::cout << "\n570215";
		mathBot::takeNap(.025);
		std::cout << "\n187184";
		mathBot::takeNap(.025);
		std::cout << "\n615898";
		mathBot::takeNap(.025);
		std::cout << "\n653628";
		mathBot::takeNap(.025);
		std::cout << "\n535525";
		mathBot::takeNap(.025);
		std::cout << "\n462900";
		mathBot::takeNap(.025);
		std::cout << "\n986219";
		mathBot::takeNap(.025);
		std::cout << "\n599590";
		mathBot::takeNap(.025);
		std::cout << "\n188093";
		mathBot::takeNap(.025);
		std::cout << "\n58835";
		mathBot::takeNap(.025);
		std::cout << "\n55152";
		mathBot::takeNap(.025);
		std::cout << "\n74742";
		mathBot::takeNap(.025);
		std::cout << "\n81220";
		mathBot::takeNap(.025);
		std::cout << "\n68366";
		mathBot::takeNap(.025);
		std::cout << "\n57725";
		mathBot::takeNap(.025);
		std::cout << "\n85629";
		mathBot::takeNap(.025);
		std::cout << "\n12132";
		mathBot::takeNap(.025);
		std::cout << "\n71538";
		mathBot::takeNap(.025);
		std::cout << "\n21682";
		mathBot::takeNap(.025);
		std::cout << "\n89954";
		mathBot::takeNap(.025);
		std::cout << "\n70274";
		mathBot::takeNap(.025);
		std::cout << "\n27341";
		mathBot::takeNap(.025);
		std::cout << "\n77890";
		mathBot::takeNap(.025);
		std::cout << "\n26672";
		mathBot::takeNap(.025);
		std::cout << "\n49704";
		mathBot::takeNap(.025);
		std::cout << "\n28050";
		mathBot::takeNap(.025);
		std::cout << "\n73071";
		mathBot::takeNap(.025);
		std::cout << "\n14316";
		mathBot::takeNap(.025);
		std::cout << "\n72657";
		mathBot::takeNap(.025);
		std::cout << "\n72722";
		mathBot::takeNap(.025);
		std::cout << "\n27978";
		mathBot::takeNap(.025);
		std::cout << "\n35123";
		mathBot::takeNap(.025);
		std::cout << "\n62348";
		mathBot::takeNap(.025);
		std::cout << "\n88093";
		mathBot::takeNap(.025);
		std::cout << "\n18115";
		mathBot::takeNap(.025);
		std::cout << "\n78164";
		mathBot::takeNap(.025);
		std::cout << "\n65029";
		mathBot::takeNap(.025);
		std::cout << "\n57450";
		mathBot::takeNap(.025);
		std::cout << "\n41149";
		mathBot::takeNap(.025);
		std::cout << "\n71869";
		mathBot::takeNap(.025);
		std::cout << "\n75450";
		mathBot::takeNap(.025);
		std::cout << "\n25381";
		mathBot::takeNap(.025);
		std::cout << "\n24986";
		mathBot::takeNap(.025);
		std::cout << "\n15687";
		mathBot::takeNap(.025);
		std::cout << "\n83297";
		mathBot::takeNap(.025);
		std::cout << "\n94557";
		mathBot::takeNap(.025);
		std::cout << "\n45199";
		mathBot::takeNap(.025);
		std::cout << "\n90991";
		mathBot::takeNap(.025);
		std::cout << "\n74351";
		mathBot::takeNap(.025);
		std::cout << "\n90281";
		mathBot::takeNap(.025);
		std::cout << "\n78867";
		mathBot::takeNap(.025);
		std::cout << "\n33590";
		mathBot::takeNap(.025);
		std::cout << "\n82749";
		mathBot::takeNap(.025);
		std::cout << "\n70571";
		mathBot::takeNap(.025);
		std::cout << "\n33928";
		mathBot::takeNap(.025);
		std::cout << "\n75679";
		mathBot::takeNap(.025);
		std::cout << "\n13679";
		mathBot::takeNap(.025);
		std::cout << "\n95070";
		mathBot::takeNap(.025);
		std::cout << "\n71670";
		mathBot::takeNap(.025);
		std::cout << "\n5149";
		mathBot::takeNap(.025);
		std::cout << "\n9574";
		mathBot::takeNap(.025);
		std::cout << "\n8198";
		mathBot::takeNap(.025);
		std::cout << "\n3264";
		mathBot::takeNap(.025);
		std::cout << "\n3667";
		mathBot::takeNap(.025);
		std::cout << "\n3833";
		mathBot::takeNap(.025);
		std::cout << "\n7981";
		mathBot::takeNap(.025);
		std::cout << "\n4390";
		mathBot::takeNap(.025);
		std::cout << "\n3311";
		mathBot::takeNap(.025);
		std::cout << "\n7966";
		mathBot::takeNap(.025);
		std::cout << "\n3848";
		mathBot::takeNap(.025);
		std::cout << "\n6381";
		mathBot::takeNap(.025);
		std::cout << "\n2465";
		mathBot::takeNap(.025);
		std::cout << "\n5608";
		mathBot::takeNap(.025);
		std::cout << "\n6776";
		mathBot::takeNap(.025);
		std::cout << "\n3129";
		mathBot::takeNap(.025);
		std::cout << "\n6945";
		mathBot::takeNap(.025);
		std::cout << "\n7497";
		mathBot::takeNap(.025);
		std::cout << "\n1929";
		mathBot::takeNap(.025);
		std::cout << "\n9539";
		mathBot::takeNap(.025);
		std::cout << "\n6541";
		mathBot::takeNap(.025);
		std::cout << "\n4513";
		mathBot::takeNap(.025);
		std::cout << "\n5952";
		mathBot::takeNap(.025);
		std::cout << "\n2196";
		mathBot::takeNap(.025);
		std::cout << "\n1920";
		mathBot::takeNap(.025);
		std::cout << "\n9478";
		mathBot::takeNap(.025);
		std::cout << "\n2356";
		mathBot::takeNap(.025);
		std::cout << "\n6480";
		mathBot::takeNap(.025);
		std::cout << "\n9898";
		mathBot::takeNap(.025);
		std::cout << "\n5709";
		mathBot::takeNap(.025);
		std::cout << "\n5966";
		mathBot::takeNap(.025);
		std::cout << "\n6132";
		mathBot::takeNap(.025);
		std::cout << "\n7561";
		mathBot::takeNap(.025);
		std::cout << "\n2277";
		mathBot::takeNap(.025);
		std::cout << "\n4321";
		mathBot::takeNap(.025);
		std::cout << "\n9554";
		mathBot::takeNap(.025);
		std::cout << "\n5580";
		mathBot::takeNap(.025);
		std::cout << "\n6807";
		mathBot::takeNap(.025);
		std::cout << "\n5605";
		mathBot::takeNap(.025);
		std::cout << "\n8364";
		mathBot::takeNap(.025);
		std::cout << "\n9688";
		mathBot::takeNap(.025);
		std::cout << "\n9280";
		mathBot::takeNap(.025);
		std::cout << "\n6791";
		mathBot::takeNap(.025);
		std::cout << "\n8678";
		mathBot::takeNap(.025);
		std::cout << "\n3684";
		mathBot::takeNap(.025);
		std::cout << "\n6593";
		mathBot::takeNap(.025);
		std::cout << "\n7414";
		mathBot::takeNap(.025);
		std::cout << "\n5031";
		mathBot::takeNap(.025);
		std::cout << "\n1618";
		mathBot::takeNap(.025);
		std::cout << "\n1607";
		mathBot::takeNap(.025);
		std::cout << "\n3214";
		mathBot::takeNap(.025);
		std::cout << "\n662";
		mathBot::takeNap(.025);
		std::cout << "\n468";
		mathBot::takeNap(.025);
		std::cout << "\n132";
		mathBot::takeNap(.025);
		std::cout << "\n895";
		mathBot::takeNap(.025);
		std::cout << "\n840";
		mathBot::takeNap(.025);
		std::cout << "\n783";
		mathBot::takeNap(.025);
		std::cout << "\n877";
		mathBot::takeNap(.025);
		std::cout << "\n597";
		mathBot::takeNap(.025);
		std::cout << "\n808";
		mathBot::takeNap(.025);
		std::cout << "\n441";
		mathBot::takeNap(.025);
		std::cout << "\n232";
		mathBot::takeNap(.025);
		std::cout << "\n656";
		mathBot::takeNap(.025);
		std::cout << "\n429";
		mathBot::takeNap(.025);
		std::cout << "\n490";
		mathBot::takeNap(.025);
		std::cout << "\n939";
		mathBot::takeNap(.025);
		std::cout << "\n756";
		mathBot::takeNap(.025);
		std::cout << "\n326";
		mathBot::takeNap(.025);
		std::cout << "\n544";
		mathBot::takeNap(.025);
		std::cout << "\n308";
		mathBot::takeNap(.025);
		std::cout << "\n270";
		mathBot::takeNap(.025);
		std::cout << "\n676";
		mathBot::takeNap(.025);
		std::cout << "\n216";
		mathBot::takeNap(.025);
		std::cout << "\n719";
		mathBot::takeNap(.025);
		std::cout << "\n821";
		mathBot::takeNap(.025);
		std::cout << "\n194";
		mathBot::takeNap(.025);
		std::cout << "\n247";
		mathBot::takeNap(.025);
		std::cout << "\n562";
		mathBot::takeNap(.025);
		std::cout << "\n421";
		mathBot::takeNap(.025);
		std::cout << "\n617";
		mathBot::takeNap(.025);
		std::cout << "\n777";
		mathBot::takeNap(.025);
		std::cout << "\n486";
		mathBot::takeNap(.025);
		std::cout << "\n707";
		mathBot::takeNap(.025);
		std::cout << "\n276";
		mathBot::takeNap(.025);
		std::cout << "\n449";
		mathBot::takeNap(.025);
		std::cout << "\n339";
		mathBot::takeNap(.025);
		std::cout << "\n252";
		mathBot::takeNap(.025);
		std::cout << "\n880";
		mathBot::takeNap(.025);
		std::cout << "\n825";
		mathBot::takeNap(.025);
		std::cout << "\n992";
		mathBot::takeNap(.025);
		std::cout << "\n85";
		mathBot::takeNap(.025);
		std::cout << "\n30";
		mathBot::takeNap(.025);
		std::cout << "\n95";
		mathBot::takeNap(.025);
		std::cout << "\n92";
		mathBot::takeNap(.025);
		std::cout << "\n92";
		mathBot::takeNap(.025);
		std::cout << "\n67";
		mathBot::takeNap(.025);
		std::cout << "\n66";
		mathBot::takeNap(.025);
		std::cout << "\n62";
		mathBot::takeNap(.025);
		std::cout << "\n47";
		mathBot::takeNap(.025);
		std::cout << "\n62";
		mathBot::takeNap(.025);
		std::cout << "\n51";
		mathBot::takeNap(.025);
		std::cout << "\n47";
		mathBot::takeNap(.025);
		std::cout << "\n75";
		mathBot::takeNap(.025);
		std::cout << "\n80";
		mathBot::takeNap(.025);
		std::cout << "\n25";
		mathBot::takeNap(.025);
		std::cout << "\n46";
		mathBot::takeNap(.025);
		std::cout << "\n52";
		mathBot::takeNap(.025);
		std::cout << "\n97";
		mathBot::takeNap(.025);
		std::cout << "\n13";
		mathBot::takeNap(.025);
		std::cout << "\n23";
		mathBot::takeNap(.025);
		std::cout << "\n56";
		mathBot::takeNap(.025);
		std::cout << "\n95";
		mathBot::takeNap(.025);
		std::cout << "\n30";
		mathBot::takeNap(.025);
		std::cout << "\n36";
		mathBot::takeNap(.025);
		std::cout << "\n73";
		mathBot::takeNap(.025);
		std::cout << "\n18";
		mathBot::takeNap(.025);
		std::cout << "\n31";
		mathBot::takeNap(.025);
		std::cout << "\n19";
		mathBot::takeNap(.025);
		std::cout << "\n24";
		mathBot::takeNap(.025);
		std::cout << "\n85";
		mathBot::takeNap(.025);
		std::cout << "\n21";
		mathBot::takeNap(.025);
		std::cout << "\n67";
		mathBot::takeNap(.025);
		std::cout << "\n71";
		mathBot::takeNap(.025);
		std::cout << "\n57";
		mathBot::takeNap(.025);
		std::cout << "\n28";
		mathBot::takeNap(.025);
		std::cout << "\n91";
		mathBot::takeNap(.025);
		std::cout << "\n53";
		mathBot::takeNap(.025);
		std::cout << "\n77";
		mathBot::takeNap(.025);
		std::cout << "\n61";
		mathBot::takeNap(.025);
		std::cout << "\n82";
		mathBot::takeNap(.025);
		std::cout << "\n16";
		mathBot::takeNap(.025);
		std::cout << "\n89";
		mathBot::takeNap(.025);
		std::cout << "\n45";
		mathBot::takeNap(.025);
		std::cout << "\n52";
		mathBot::takeNap(.025);
		std::cout << "\n61";
		mathBot::takeNap(.025);
		std::cout << "\n19";
		mathBot::takeNap(.025);
		std::cout << "\n51";
		mathBot::takeNap(.025);
		std::cout << "\n30";
		mathBot::takeNap(.025);
		std::cout << "\n76";
		mathBot::takeNap(.025);
		std::cout << "\n11";
		mathBot::takeNap(.025);
		std::cout << "\n55";
		mathBot::takeNap(.025);
		std::cout << "\n91";
		mathBot::takeNap(.025);
		std::cout << "\n95";
		mathBot::takeNap(.025);
		std::cout << "\n83";
		mathBot::takeNap(.025);
		std::cout << "\n87";
		mathBot::takeNap(.025);
		std::cout << "\n85";
		mathBot::takeNap(.025);
		std::cout << "\n5";
		mathBot::takeNap(.025);
		std::cout << "\n8";
		mathBot::takeNap(.025);
		std::cout << "\n5";
		mathBot::takeNap(.025);
		std::cout << "\n7";
		mathBot::takeNap(.025);
		std::cout << "\n6";
		mathBot::takeNap(.025);
		std::cout << "\n4";
		mathBot::takeNap(.025);
		std::cout << "\n1";
		mathBot::takeNap(.025);
		std::cout << "\n3";
		mathBot::takeNap(.025);
		std::cout << "\n2";
		mathBot::takeNap(.025);
		std::cout << "\n4";
		mathBot::takeNap(.025);
		std::cout << "\n7";
		mathBot::takeNap(.025);
		std::cout << "\n1";
		mathBot::takeNap(.025);
		std::cout << "\n4";
		mathBot::takeNap(.025);
		std::cout << "\n3";
		mathBot::takeNap(.025);
		std::cout << "\n7";
		mathBot::takeNap(.025);
		std::cout << "\n9";
		mathBot::takeNap(.025);
		std::cout << "\n8";
		mathBot::takeNap(.025);
		std::cout << "\n1";
		mathBot::takeNap(.025);
		std::cout << "\n9";
		mathBot::takeNap(.025);
		std::cout << "\n9";
		mathBot::takeNap(.025);
		std::cout << "\n1";
		mathBot::takeNap(.025);
		std::cout << "\n4";
		mathBot::takeNap(.025);
		std::cout << "\n4";
		mathBot::takeNap(.025);
		std::cout << "\n6";
		mathBot::takeNap(.025);
		std::cout << "\n5";
		mathBot::takeNap(.025);
		std::cout << "\n8";
		mathBot::takeNap(.025);
		std::cout << "\n6";
		mathBot::takeNap(.025);
		std::cout << "\n2";
		mathBot::takeNap(.025);
		std::cout << "\n2";
		mathBot::takeNap(.025);
		std::cout << "\n3";
		mathBot::takeNap(.025);
		std::cout << "\n7";
		mathBot::takeNap(.025);
		std::cout << "\n7";
		mathBot::takeNap(.025);
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