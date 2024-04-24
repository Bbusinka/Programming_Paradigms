// gnatmake -o main main.adb
// gcc -c wrapper.c
// gcc -o wrapper wrapper.o library.o -lgnat

#include <stdio.h>
#include "library_wrapper.h"

int main()
{
    
    int n = 5;
    int a = 12;
    int b = 18;
    int c = 30;

    printf("Factorial (loop) of %d is %d\n", n, factorial_loop(n));

    
    printf("GCD (loop) of %d and %d is %d\n", a, b, gcd_loop(a, b));

    
    struct DiofantEquationSolution solution = diofant_loop(a, b, c);
    printf("Solution to the equation (loop) %dx + %dy = %d is: x = %d, y = %d\n", a, b, c, solution.x, solution.y);

    
    printf("Factorial (recursion) of %d is %d\n", n, factorial_recursion(n));

    
    printf("GCD (recursion) of %d and %d is %d\n", a, b, gcd_recursion(a, b));

    
    struct DiofantEquationSolution solution_rec = diofant_recursion(a, b, c);
    printf("Solution to the equation (recursion) %dx + %dy = %d is: x = %d, y = %d\n", a, b, c, solution_rec.x, solution_rec.y);

    return 0;
}
