with Ada.Text_IO; use Ada.Text_IO;
with Library; use Library;

procedure Main is
    A : Integer := 12;
    B : Integer := 18;
    C : Integer := 30;
    Solution : DiofantEquationSolution;
begin
    -- Testowanie funkcji Factorial
    Put_Line("Factorial of 5 is: " & Integer'Image(Factorial(5)));

    -- Testowanie funkcji GCD
    Put_Line("GCD of " & Integer'Image(A) & " and " & Integer'Image(B) &
             " is: " & Integer'Image(GCD(A, B)));

    -- Testowanie funkcji Diofant
    C := 30;
    Solution := Diofant(A, B, C);
    Put_Line("Solution to the equation " & Integer'Image(A) & "x + " &
             Integer'Image(B) & "y = " & Integer'Image(C) & " is: x = " &
             Integer'Image(Solution.x) & ", y = " & Integer'Image(Solution.y));

    -- Testowanie funkcji Factorial_Recursion
    Put_Line("Factorial_Recursion of 5 is: " & Integer'Image(Factorial_Recursion(5)));

    -- Testowanie funkcji GCD_Recursion
    Put_Line("GCD_Recursion of " & Integer'Image(A) & " and " & Integer'Image(B) &
             " is: " & Integer'Image(GCD_Recursion(A, B)));

    -- Testowanie funkcji Diofant_Recursion
    Solution := Diofant_Recursion(A, B, C);
    Put_Line("Solution to the equation (Recursion) " & Integer'Image(A) & "x + " &
             Integer'Image(B) & "y = " & Integer'Image(C) & " is: x = " &
             Integer'Image(Solution.x) & ", y = " & Integer'Image(Solution.y));
end Main;

