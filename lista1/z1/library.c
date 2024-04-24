#include "library.h"

int factorial_loop(int n){
	int result = 1;
	for(int i = 2; i <= n; ++i){
		result *= i;
	}
	return result;
}

int gcd_loop(int a, int b){
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void extendedEuclid_loop(int a, int b, int* x, int* y) {
    int x0 = 1, y0 = 0, x1 = 0, y1 = 1;
    while (b != 0) {
        int q = a / b;
        int temp = b;
        b = a % b;
        a = temp;
        temp = x0;
        x0 = x1;
        x1 = temp - q * x1;
        temp = y0;
        y0 = y1;
        y1 = temp - q * y1;
    }
    *x = x0;
    *y = y0;
}

DiofantEquationSolution diofant_loop(int a, int b, int c){
	DiofantEquationSolution solution;
	int gcd_ab = gcd_loop(a, b);

	if (c % gcd_ab != 0)
	{
		solution.x = 0;
		solution.y = 0; 
		return solution; 
	}

	int x0, y0;
	extendedEuclid_loop(a, b, &x0, &y0);

	int k = c / gcd_ab;
	solution.x = k * x0;
	solution.y = k * y0;

	return solution;
}



int factorial_recursion(int n){
	if (n == 0 || n == 1){
		return 1;
	} else {
		return n * factorial_recursion(n-1);
	}
}

int gcd_recursion(int a, int b){
	if (b == 0){
		return a;
	} else {
		return gcd_recursion(b, a % b);
	}
}

void extendedEuclid_recursion(int a, int b, int* x, int* y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return;
    }
    int x1, y1;
    extendedEuclid_recursion(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
}

DiofantEquationSolution diofant_recursion(int a, int b, int c){
	DiofantEquationSolution solution;
	int gcd_ab = gcd_recursion(a, b);

	if (c % gcd_ab != 0)
	{
		solution.x = 0;
		solution.y = 0; 
		return solution; 
	}

	int x0, y0;
	extendedEuclid_recursion(a, b, &x0, &y0);

	int k = c / gcd_ab;
	solution.x = k * x0;
	solution.y = k * y0;

	return solution;
}
