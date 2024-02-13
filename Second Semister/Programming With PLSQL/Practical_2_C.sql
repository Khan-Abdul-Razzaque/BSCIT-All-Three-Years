DECLARE

    num1 int;

BEGIN

    num1:=:Enter_the_number;
    if num1 = 0 then
        dbms_output.put_line('The number you entered is ZERO');
    elsif num1 > 0 then
        dbms_output.put_line('The number you entered is Positive.');
    else
        dbms_output.put_line('The number you entered is Negative.');
    end if;

END;