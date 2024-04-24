# gcc -shared -o library.so -fPIC library.c -std=c99
# python3 wrapper.py

import ctypes


libc = ctypes.CDLL('/home/valeriia/studia/JPP/lista1/z6/library.so')


class DiofantEquationSolution(ctypes.Structure):
    _fields_ = [("x", ctypes.c_int),
                ("y", ctypes.c_int)]


libc.factorial_loop.argtypes = [ctypes.c_int]
libc.factorial_loop.restype = ctypes.c_int

libc.factorial_recursion.argtypes = [ctypes.c_int]
libc.factorial_recursion.restype = ctypes.c_int

libc.gcd_loop.argtypes = [ctypes.c_int, ctypes.c_int]
libc.gcd_loop.restype = ctypes.c_int

libc.gcd_recursion.argtypes = [ctypes.c_int, ctypes.c_int]
libc.gcd_recursion.restype = ctypes.c_int

libc.diofant_loop.argtypes = [ctypes.c_int, ctypes.c_int, ctypes.c_int]
libc.diofant_loop.restype = DiofantEquationSolution

libc.diofant_recursion.argtypes = [ctypes.c_int, ctypes.c_int, ctypes.c_int]
libc.diofant_recursion.restype = DiofantEquationSolution



def factorial_loop(n):
    return libc.factorial_loop(n)

def factorial_recursion(n):
    return libc.factorial_recursion(n)

def gcd_loop(a, b):
    return libc.gcd_loop(a, b)

def gcd_recursion(a, b):
    return libc.gcd_recursion(a, b)

def diofant_loop(a, b, c):
    return libc.diofant_loop(a, b, c)

def diofant_recursion(a, b, c):
    return libc.diofant_recursion(a, b, c)


if __name__ == "__main__":
    
    n = 5
    a, b = 12, 18
    c = 30
    print("Factorial (loop) of", n, "is", factorial_loop(n))

    print("GCD (loop) of", a, "and", b, "is", gcd_loop(a, b))

    solution = diofant_loop(a, b, c)
    print("Solution to the equation (loop)", a, "x +", b, "y =", c, "is: x =", solution.x, ", y =", solution.y)
  
    print("Factorial (recursion) of", n, "is", factorial_recursion(n))

    print("GCD (recursion) of", a, "and", b, "is", gcd_recursion(a, b))

    solution_rec = diofant_recursion(a, b, c)
    print("Solution to the equation (recursion)", a, "x +", b, "y =", c, "is: x =", solution_rec.x, ", y =", solution_rec.y)
