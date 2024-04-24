with Interfaces.C; use Interfaces.C;
with Library; use Library;

package Library is
    function Factorial_loop(N: Integer) return Integer is
        begin
            return 0;
        end Factorial_loop;
    function Factorial_recursion(N: Integer) return Integer is
        begin
            return 0;
        end Factorial_recursion;

    function Gcd_loop(A, B : Integer) return Integer is
        begin
            return 0;
        end Gcd_loop;
    function Gcd_recursion(A, B : Integer) return Integer is
        begin
            return 0;
        end Gcd_recursion;

   function Diofant_loop(A, B, C : Integer) return DiofantEquationSolution is
            Solution : DiofantEquationSolution;
        begin
            return Solution;
        end Diofant_loop;

   function Diofant_recursion(A, B, C : Integer) return DiofantEquationSolution is
            Solution : DiofantEquationSolution;
        begin
            return Solution;
        end Diofant_recursion;

end Library;

