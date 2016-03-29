#ifndef CLASSES_H //check if this has been defined already
	
//define
#define CLASSES_H

//headers
#include "stdafx.h"

//create mathbot class
class mathBot
{
	public:
		mathBot();
		void divide();
		void multiply();
		void add();
		void subtract();
		void exponent();
		void factorial();
		void listOptions();
		void giveResult(double answer);
		void mainMenu();
	protected:
	private:
};



#endif //end definition check