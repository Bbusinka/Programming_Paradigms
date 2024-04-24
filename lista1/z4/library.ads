package Library is
    type DiofantEquationSolution is record
        x, y : Integer;
    end record
        with Convention => C;

    function Factorial(n : Integer) return Integer        
        with Export, Convention => C, External_Name => "factorial_loop";

    function GCD(a, b : Integer) return Integer
        with Export, Convention => C, External_Name => "gcd_loop";
    
    function Diofant(a, b, c : Integer) return DiofantEquationSolution
        with Export, Convention => C, External_Name => "diofant_loop";

    function Factorial_Recursion(n : Integer) return Integer
        with Export, Convention => C, External_Name => "factorial_recursion";

    function GCD_Recursion(a, b : Integer) return Integer
        with Export, Convention => C, External_Name => "gcd_recursion";

    function Diofant_Recursion(a, b, c : Integer) return DiofantEquationSolution
        with Export, Convention => C, External_Name => "diofant_recursion";

end Library;
