#include <stdio.h>
#include "library.h"

int main() {
    // Testowanie funkcji factorial
    int n = 5;
    printf("Factorial (loop) of %d is %d\n", n, factorial_loop(n));

    // Testowanie funkcji gcd
    int a = 12, b = 18;
    printf("GCD (loop) of %d and %d is %d\n", a, b, gcd_loop(a, b));

    // Testowanie funkcji diofant
    int c = 30;
    DiofantEquationSolution solution = diofant_loop(a, b, c);
    printf("Solution to the equation (loop) %dx + %dy = %d is: x = %d, y = %d\n", a, b, c, solution.x, solution.y);

    // Testowanie funkcji factorial
    int n = 5;
    printf("Factorial (recursion) of %d is %d\n", n, factorial_recursion(n));

    // Testowanie funkcji gcd
    int a = 12, b = 18;
    printf("GCD (recursion) of %d and %d is %d\n", a, b, gcd_recursion(a, b));

    // Testowanie funkcji diofant
    int c = 30;
    DiofantEquationSolution solution = diofant_recursion(a, b, c);
    printf("Solution to the equation (recursion) %dx + %dy = %d is: x = %d, y = %d\n", a, b, c, solution.x, solution.y);


    return 0;
}
