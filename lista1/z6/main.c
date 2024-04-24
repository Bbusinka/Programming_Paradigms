#include <stdio.h>
#include "library.h"

int main() {
    // Testowanie funkcji factorial
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));

    // Testowanie funkcji gcd
    int a = 12, b = 18;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));

    // Testowanie funkcji diofant
    int c = 30;
    DiofantEquationSolution solution = diofant(a, b, c);
    printf("Solution to the equation %dx + %dy = %d is: x = %d, y = %d\n", a, b, c, solution.x, solution.y);

    return 0;
}
