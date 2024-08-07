-- P_4_A: create a function to find the maximum of two numbers

DECLARE
    a1 number;
    b1 number;
    c1 number;
function findMax(x in number, y in number)
return number
is
    z number;
BEGIN
    if x > y then
    z := x;
    else
    z := y;
    end if;
    return z;

END;
BEGIN
    a1 := 23;
    b1 := 45;
    c1 := findMax(a1, b1);
    dbms_output.put_line('Maximum of (23, 45) is: '||c1);
END;