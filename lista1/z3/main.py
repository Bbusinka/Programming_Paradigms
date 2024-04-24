#python3 main.py

from library import *

def main():
    # Testowanie funkcji factorial
    n = 5
    print(f"Factorial (loop) of {n} is {factorial_loop(n)}")

    # Testowanie funkcji gcd
    a, b = 12, 18
    print(f"GCD (loop) of {a} and {b} is {gcd_loop(a, b)}")

    # Testowanie funkcji diofant
    c = 30
    solution = diofant_loop(a, b, c)
    print(f"Solution to the equation (loop) {a}x + {b}y = {c} is: x = {solution.x}, y = {solution.y}")

    # Testowanie funkcji factorial
    n = 5
    print(f"Factorial (recursion) of {n} is {factorial_recursion(n)}")

    # Testowanie funkcji gcd
    a, b = 12, 18
    print(f"GCD (recursion) of {a} and {b} is {gcd_recursion(a, b)}")

    # Testowanie funkcji diofant
    c = 30
    solution = diofant_recursion(a, b, c)
    print(f"Solution to the equation (recursion) {a}x + {b}y = {c} is: x = {solution.x}, y = {solution.y}")


if __name__ == "__main__":
    main()
