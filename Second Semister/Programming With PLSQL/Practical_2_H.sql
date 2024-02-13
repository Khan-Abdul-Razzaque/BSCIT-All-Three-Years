DECLARE

    week1 int;

BEGIN

    week1:=:Enter_day_number;
    case week1
      	when 1 then dbms_output.put_line('Day 1 of the week is Monday.');
      	when 2 then dbms_output.put_line('Day 2 of the week is Tuesday.');
      	when 3 then dbms_output.put_line('Day 3 of the week is Wednesday.');
      	when 4 then dbms_output.put_line('Day 4 of the week is Thusday.');
      	when 5 then dbms_output.put_line('Day 5 of the week is Friday.');
      	when 6 then dbms_output.put_line('Day 6 of the week is Saturday.');
      	when 7 then dbms_output.put_line('Day 7 of the week is Sunday.');
      	else dbms_output.put_line('The entered number doesn''t indecate any day of a week.');
    end case;

END;