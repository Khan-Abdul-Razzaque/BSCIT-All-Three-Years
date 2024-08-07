-- P_4_C: write a function to find factorial of a number.

DECLARE
    num1 int;
    facto int;
function facOfNumber(num1 in int)
return int
is
facto int := 1;
BEGIN
    if (num1 = 0) then
        return 1;
    else
        for i in 1..num1 loop
            facto := facto * i;
        end loop;
        return facto;
    end if;

END;

BEGIN

    num1:=:Enter_the_number;
    facto := facOfNumber(num1);
    dbms_output.put_line('The factorial of the number is: '||facto);

END;