DECLARE

    palindrome int;
    temp int;
    rev int := 0;

BEGIN

    palindrome:=:Enter_the_number;
    temp := palindrome;
    while (palindrome != 0) loop
        rev := rev * 10 + mod(palindrome, 10);
        palindrome := palindrome / 10;
    end loop;

    if temp = rev then
        dbms_output.put_line('The entered number is a palindrome.');
    else
        dbms_output.put_line('The entered number is not a palindrome.');
    end if;

END;