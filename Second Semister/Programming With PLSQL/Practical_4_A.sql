create or replace function square
(var in out int)
return int
is
begin
    var := var**2;
    return var;
end square;


-- ***************************************************************************************************************


DECLARE

    num1 int;

BEGIN

    num1:=:Enter_the_number;
    num1 := square(num1);
    dbms_output.put_line('The square of entered number is '||num1);

END;