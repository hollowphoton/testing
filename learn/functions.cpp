
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
	//set solution to x
	float solution = x;
	//loop and multiply x by itself y times
	for (int iterations = (y - 1); iterations > 0; iterations--) {
		solution = solution * x;
	}
	//return value
	return solution;
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
