#ifndef LIBRARY_H
#define LIBRARY_H

typedef struct
{
	int x;
	int y;
} DiofantEquationSolution;

int factorial_loop(int n);
int factorial_recursion(int n);
int gcd_loop(int a, int b);
int gcd_recursion(int a, int b);
DiofantEquationSolution diofant_loop(int a, int b, int c);
DiofantEquationSolution diofant_recursion(int a, int b, int c);
void extendedEuclid_loop(int a, int b, int *x, int *y);
void extendedEuclid_recursion(int a, int b, int *x, int *y);

#endif // LIBRARY_H