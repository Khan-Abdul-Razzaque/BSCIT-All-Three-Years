-- P_4_B: write a function to find square of a numbers

DECLARE
    x1 int;

function square(x1 in out int)
return int
is
begin
  x1:=x1**2;
  return x1;
end square;

BEGIN
    x1:=:Enter_the_number;
    x1:=square(x1);
    dbms_output.put_line('The square of the number is: '||x1);

END;