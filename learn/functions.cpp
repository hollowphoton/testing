
//headers
#include "stdafx.h"
#include "functions.h"

//add function
int addNum(int x, int y) {
	//add both numbers
	int solution = x + y;
	//return value
	return solution;
}

//subtract function
int subtractNum(int x, int y) {
	//subtract y from x
	int solution = x - y;
	//return value
	return solution;
}

//multiply function
int multiplyNum(int x, int y) {
	//multiply both numbers
	int solution = x * y;
	//return value
	return solution;
}

//divide function
double divideNum(double x, int y) {
	//divide x by y
	double solution = x / y;
	//return value
	return solution;
}

//exponent function
int exponentNum(int x, int y) {
	//set solution to x
	int solution = x;
	//loop and multiply x by itself y times
	for (int iterations = (y - 1); iterations > 0; iterations--) {
		solution = solution * y;
	}
	//return value
	return solution;
}
	
//factorial function
int factorialNum(int x) {
	//loop and call itself until done
	if (x == 1) {
		return 1;
	}
	else {
		return x * factorialNum(x - 1);
	}
}
