#ifndef LIBRARY_WRAPPER_H
#define LIBRARY_WRAPPER_H

struct DiofantEquationSolution
{
    int x;
    int y;
};

extern int factorial_loop(int n);
extern int factorial_recursion(int n);
extern int gcd_loop(int a, int b);
extern int gcd_recursion(int a, int b);
extern struct DiofantEquationSolution diofant_loop(int a, int b, int c);
extern struct DiofantEquationSolution diofant_recursion(int a, int b, int c);

#endif // LIBRARY_WRAPPER_H