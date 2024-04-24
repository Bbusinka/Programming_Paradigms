package body Library is
    function Factorial(n : Integer) return Integer is
        Result : Integer := 1;
    begin
        for I in 2 .. n loop
            Result := Result * I;
        end loop;
        return Result;
    end Factorial;

    function GCD(a, b : Integer) return Integer is
        copyA : Integer := a;
        copyB : Integer := b;
        Temp : Integer;
    begin
        while copyB /= 0 loop
            Temp := copyB;
            copyB := copyA mod copyB;
            copyA := Temp;
        end loop;
        return copyA;
    end GCD;

    function Factorial_Recursion(n : Integer) return Integer is
    begin
        if n = 0 or else n = 1 then
            return 1;
        else
            return n * Factorial_Recursion(n - 1);
        end if;
    end Factorial_Recursion;

    function GCD_Recursion(a, b : Integer) return Integer is
    begin
        if b = 0 then
            return a;
        else
            return GCD_Recursion(b, a mod b);
        end if;
    end GCD_Recursion;
    
    function Diofant(a, b, c : Integer) return DiofantEquationSolution is
    Solution : DiofantEquationSolution;
    GCD_AB : Integer := GCD(a, b);
    A_Copy : Integer := a;
    B_Copy : Integer := b;
    C_Copy : Integer := c;
    begin
      if C_Copy mod GCD_AB = 0 then
         Solution.X := 0;
         Solution.Y := 0;
         
         A_Copy := A_Copy / GCD_AB;
         B_Copy := B_Copy / GCD_AB;
         C_Copy := C_Copy / GCD_AB;

         declare
            X0 : Integer := 1;
            Y0 : Integer := 0;
            X1 : Integer := 0;
            Y1 : Integer := 1;
            Temp : Integer;
            Q : Integer;
         begin
            while B_Copy /= 0 loop
               Q := A_Copy / B_Copy;
               Temp := B_Copy;
               B_Copy := A_Copy mod B_Copy;
               A_Copy := Temp;

               Temp := X0;
               X0 := X1;
               X1 := Temp - Q * X1;

               Temp := Y0;
               Y0 := Y1;
               Y1 := Temp - Q * Y1;
            end loop;

            Solution.X := X0 * C_Copy;
            Solution.Y := Y0 * C_Copy;
         end;
      else
         Solution.X := -1;
         Solution.Y := -1;
      end if;
      return Solution;
    end Diofant;

function Diofant_Recursion(a, b, c : Integer) return DiofantEquationSolution is
    Solution : DiofantEquationSolution;
    GCD_AB : Integer := GCD_Recursion(a, b);
begin
      if a = 0 and b = 0 then
         Solution.X := -1;
         Solution.Y := -1;
         return Solution;
      end if;

      if a = 0 then
         if c mod b = 0 then
            Solution.X := 0;
            Solution.Y := c / b;
         else
            Solution.X := -1;
            Solution.Y := -1;
         end if;
         return Solution;
      end if;

      if b = 0 then
         if c mod a = 0 then
            Solution.X := c / a;
            Solution.Y := 0;
         else
            Solution.X := -1;
            Solution.Y := -1;
         end if;
         return Solution;
      end if;

      if c mod GCD_AB /= 0 then
         Solution.X := -1;
         Solution.Y := -1;
         return Solution;
      end if;

      declare
         TempResult : DiofantEquationSolution := Diofant_Recursion(b, a mod b, c);
      begin
         if TempResult.X = -1 and TempResult.Y = -1 then
            Solution.X := -1;
            Solution.Y := -1;
            return Solution;
         end if;

         Solution.X := TempResult.Y;
         Solution.Y := TempResult.X - (a / b) * TempResult.Y;
      end;
    return Solution;
end Diofant_Recursion;

end Library;

