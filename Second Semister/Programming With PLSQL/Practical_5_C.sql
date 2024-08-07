-- Write a procedure to find the square of a number.

DECLARE
    sqr int;
procedure square(num1 in out int)
is
BEGIN
    num1 := num1**2;

END square;

BEGIN
    sqr:=:Enter_the_number;
    square(sqr);
    dbms_output.put_line('The square of the number is: '||sqr);

END;