create or replace function swap
(num1 in out int, num2 in out int)
return int
is
BEGIN

    num1 := num1 + num2;
    num2 := num1 - num2;
    num1 := num1 - num2;
    dbms_output.put_line('num1 = '||num1);
    dbms_output.put_line('num2 = '||num2);

END;


-- ***************************************************************************************************************


DECLARE

    num1 int;
    num2 int;

BEGIN

    num1:=:Enter_number_1;
    num2:=:Enter_number_2;
    swap(num1, num2);

END;