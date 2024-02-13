DECLARE

    cid int;
    sal int;

BEGIN

    select E_ID, E_SALARY into eid, sal from Employee;

    if eid = 1 and sal <= 2000 then
        update Employee
        set E_SALARY = E_SALARY + 1
        where E_ID = 1001;
    else
        dbms_output.put_line('There is no customer with id = 1 and salary <= 2000');
    end if;

END;