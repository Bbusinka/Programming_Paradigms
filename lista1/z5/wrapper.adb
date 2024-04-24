--gnatmake -o wrapper wrapper.adb
--gcc -c library.c
--gnatmake -o wrapper wrapper.adb


with Ada.Text_IO; use Ada.Text_IO;
with Library; use Library;

procedure Wrapper is
    A : Integer := 12;
    B : Integer := 18;
    C : Integer := 30;
    Solution : DiofantEquationSolution;
begin
    
    Put_Line("Factorial of 5 is: " & Integer'Image(Factorial_loop(5)));

    
    Put_Line("GCD of " & Integer'Image(A) & " and " & Integer'Image(B) &
             " is: " & Integer'Image(Gcd_loop(A, B)));

    
    C := 30;
    Solution := Diofant_loop(A, B, C);
    Put_Line("Solution to the equation " & Integer'Image(A) & "x + " &
             Integer'Image(B) & "y = " & Integer'Image(C) & " is: x = " &
             Integer'Image(Solution.x) & ", y = " & Integer'Image(Solution.y));

    
    Put_Line("Factorial_Recursion of 5 is: " & Integer'Image(Factorial_recursion(5)));

    
    Put_Line("GCD_Recursion of " & Integer'Image(A) & " and " & Integer'Image(B) &
             " is: " & Integer'Image(Gcd_recursion(A, B)));

    
    Solution := Diofant_recursion(A, B, C);
    Put_Line("Solution to the equation (Recursion) " & Integer'Image(A) & "x + " &
             Integer'Image(B) & "y = " & Integer'Image(C) & " is: x = " &
             Integer'Image(Solution.x) & ", y = " & Integer'Image(Solution.y));
end Wrapper;

