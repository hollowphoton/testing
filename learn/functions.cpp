
//headers
#include "stdafx.h"
#include "functions.h"

//add function
long double addNum(long double x, long double y) {
	//add both numbers
	long double solution = x + y;
	//return value
	return solution;
}

//subtract function
long double subtractNum(long double x, long double y) {
	//subtract y from x
	long double solution = x - y;
	//return value
	return solution;
}

//multiply function
long double multiplyNum(long double x, long double y) {
	//multiply both numbers
	long double solution = x * y;
	//return value
	return solution;
}

//divide function
long double divideNum(long double x, long double y) {
	//divide x by y
	long double solution = x / y;
	//return value
	return solution;
}

//exponent function
long double exponentNum(long double x, int y) {
	//if exponent is zero, value is 1
	if (y = 0) {
		return 1;
	}
	//if exponent is less than zero, divide
	if (y < 0) {
		//set solution to x
		long double solution = x;
		//loop and multiply x by itself y times
		for (int iterations = ((y*-1) - 1); iterations > 0; iterations--) {
			solution = solution / x;
		}
		//return value
		return solution;
	}
	//if exponent is greater than zero, multiply
	else {
		//set solution to x
		long double solution = x;
		//loop and multiply x by itself y times
		for (int iterations = (y - 1); iterations > 0; iterations--) {
			solution = solution * x;
		}
		//return value
		return solution;
	}
}

//factorial function
unsigned long long factorialNum(unsigned long long x) {
	//loop and call itself until done
	if (x == 1) {
		return 1;
	}
	else {
		return x * factorialNum(x - 1);
	}
}

//low boundary function
unsigned long long lowBound(int exp) {
	//if exponent is zero or less, value is 1
	if (exp <= 0) {
		return 1;
	}
	else {
		//set solution to x
		unsigned long long solution = 10;
		//loop and multiply x by itself y times
		for (int iterations = (exp - 1); iterations > 0; iterations--) {
			solution = solution * 10;
		}
		//return value
		return solution;
	}
}

//high boundary function
unsigned long long highBound(int exp) {
	//if exponent is zero or less, value is 1
	if (exp <= 0) {
		return 1;
	}
	else {
		//set solution to x
		unsigned long long solution = 10;
		//loop and multiply x by itself y times
		for (int iterations = (exp - 1); iterations > 0; iterations--) {
			solution = solution * 10;
		}
		//return value
		return (solution - 1);
	}
}