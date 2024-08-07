-- P_5_B: write a procedure to find minimum of two numbers

DECLARE
    num1 number;
    num2 number;
procedure mini(num1 in out number, num2 in number)
is
BEGIN
    if num1 > num2 then
        num1 := num2;
    end if;
END mini;

BEGIN
    num1 :=:Enter_number_1;
    num2 :=:Enter_number_2;
    mini(num1, num2);
    dbms_output.put_line('The minimum numbers is: '||num1);

END;