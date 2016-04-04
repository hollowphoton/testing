
//headers
#include "stdafx.h"
#include "functions.h"

//add function
float addNum(float x, float y) {
	//add both numbers
	float solution = x + y;
	//return value
	return solution;
}

//subtract function
float subtractNum(float x, float y) {
	//subtract y from x
	float solution = x - y;
	//return value
	return solution;
}

//multiply function
float multiplyNum(float x, float y) {
	//multiply both numbers
	float solution = x * y;
	//return value
	return solution;
}

//divide function
float divideNum(float x, float y) {
	//divide x by y
	float solution = x / y;
	//return value
	return solution;
}

//exponent function
float exponentNum(float x, int y) {
	//if exponent is zero or less, value is 1
	if (y <= 0) {
		return 1;
	}
	else {
		//set solution to x
		float solution = x;
		//loop and multiply x by itself y times
		for (int iterations = (y - 1); iterations > 0; iterations--) {
			solution = solution * x;
		}
		//return value
		return solution;
	}
}

//factorial function
float factorialNum(float x) {
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