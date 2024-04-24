with Interfaces.C; use Interfaces.C;

package Library is
    type DiofantEquationSolution is record
        x, y : Integer;
    end record
        with Convention => C;

    function Factorial_loop(n: Integer) return Integer
        with Import, Convention => C;
    function Factorial_recursion(n: Integer) return Integer
        with Import, Convention => C;

    function Gcd_loop(a, b : Integer) return Integer
        with Import, Convention => C;
    function Gcd_recursion(a, b : Integer) return Integer
        with Import, Convention => C;

    function Diofant_loop(a, b, c : Integer) return DiofantEquationSolution
        with Import, Convention => C;
    function Diofant_recursion(a, b, c : Integer) return DiofantEquationSolution
        with Import, Convention => C;

end Library;

