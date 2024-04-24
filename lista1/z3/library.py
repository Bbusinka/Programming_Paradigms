class DiofantEquationSolution:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def factorial_loop(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

def gcd_loop(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def extended_euclid_loop(a, b):
    x0, y0, x1, y1 = 1, 0, 0, 1
    while b != 0:
        q = a // b
        a, b = b, a % b
        x0, x1 = x1, x0 - q * x1
        y0, y1 = y1, y0 - q * y1
    return x0, y0

def diofant_loop(a, b, c):
    gcd_ab = gcd_loop(a, b)
    if c % gcd_ab != 0:
        return DiofantEquationSolution(0, 0)
    x0, y0 = extended_euclid_loop(a, b)
    k = c // gcd_ab
    return DiofantEquationSolution(k * x0, k * y0)

def factorial_recursion(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial_recursion(n - 1)

def gcd_recursion(a, b):
    if b == 0:
        return a
    else:
        return gcd_recursion(b, a % b)

def extended_euclid_recursion(a, b):
    if b == 0:
        return 1, 0
    x1, y1 = extended_euclid_recursion(b, a % b)
    return y1, x1 - (a // b) * y1

def diofant_recursion(a, b, c):
    gcd_ab = gcd_recursion(a, b)
    if c % gcd_ab != 0:
        return DiofantEquationSolution(0, 0)
    x0, y0 = extended_euclid_recursion(a, b)
    k = c // gcd_ab
    return DiofantEquationSolution(k * x0, k * y0)
