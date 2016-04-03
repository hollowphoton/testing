#ifndef CLASSES_H //check if this has been defined already
	
//define
#define CLASSES_H

//headers
#include "stdafx.h"

//create mathbot class
class mathBot
{
	public:
		//vars
		bool quit = false;
		float a, b = 0;
		//constructor
		mathBot();
		//methods
		void mainMenu();
	protected:
	private:
		//methods
		void divide();
		void multiply();
		void add();
		void subtract();
		void exponent();
		void factorial();
		void clearScreen();
		void clearVars();
		void takeNap(float sec);
		void explode();
		void listOptions();
		void giveResult(float answer);
		void quitProgram();
};



#endif //end definition check