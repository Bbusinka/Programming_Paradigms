package Library is
    type DiofantEquationSolution is record
        x, y : Integer;
    end record;

    function Factorial(n : Integer) return Integer;
    function GCD(a, b : Integer) return Integer;
    function Diofant(a, b, c : Integer) return DiofantEquationSolution;
    function Factorial_Recursion(n : Integer) return Integer;
    function GCD_Recursion(a, b : Integer) return Integer;
    function Diofant_Recursion(a, b, c : Integer) return DiofantEquationSolution;
end Library;
