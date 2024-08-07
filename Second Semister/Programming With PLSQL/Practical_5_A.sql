-- p5 to demonstrate the use of procedure
-- Write a procedure to swap two numbers

DECLARE
    num1 number;
    num2 number;
procedure swap(num1 in out number, num2 in out number)
is
BEGIN
    num1 := num1 + num2;
    num2 := num1 - num2;
    num1 := num1 - num2;

END swap;

BEGIN
    num1 :=:Enter_number_1;
    num2 :=:Enter_number_2;
    dbms_output.put_line('Before swapping num1= '||num1||' num2= '||num2);
    swap(num1, num2);
    dbms_output.put_line('After swapping num1= '||num1||' num2= '||num2);

END;