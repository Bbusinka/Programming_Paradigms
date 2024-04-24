//gcc main.c library.c -o main

#include <stdio.h>
#include "library.h"

int main() {
    // Testowanie funkcji Factorial
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial_loop(n));

    // Testowanie funkcji GCD
    int a = 12, b = 18;
    printf("GCD of %d and %d is %d\n", a, b, gcd_loop(a, b));

    // Testowanie funkcji Diofant
    int c = 30;
    DiofantEquationSolution solution = diofant_loop(a, b, c);
    printf("Solution to the equation %dx + %dy = %d is: x = %d, y = %d\n\n\n", a, b, c, solution.x, solution.y);
    
    // Testowanie funkcji Factorial_recursion
    printf("Factorial (recursion) of %d is %d\n", n, factorial_recursion(n));

    // Testowanie funkcji GCD_recursion
    printf("GCD (recursion) of %d and %d is %d\n", a, b, gcd_recursion(a, b));

    // Testowanie funkcji Diofant_recursion
    DiofantEquationSolution solution1 = diofant_recursion(a, b, c);
    printf("Solution to the equation (recursion) %dx + %dy = %d is: x = %d, y = %d\n", a, b, c, solution1.x, solution1.y);

    return 0;
}
