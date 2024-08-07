-- Using plsql function find the total strength of student present in section

create table section
(
    sec_id int,
    section_name varchar(30),
    strength int
);

-- ===>

insert into section values(1, 'IT', 30);

-- ===>

insert into section values(1, 'IT', 45);

-- ===>

insert into section values(1, 'IT', 50);

-- ===>

insert into section values(1, 'IT', 60);

-- ===>

create or replace function totalStrength
return integer
is
t_stren integer := 0;
BEGIN
    select sum(strength) into t_stren from section;
    return t_stren;

END totalStrength;

-- ===>

DECLARE
    ans number;

BEGIN
    ans := totalStrength();
    dbms_output.put_line('the total strength of the students is: '||ans);

END;