create table project1
(
    pno int primary key,
    pname varchar(30),
    thrs int
);

create table emps
(
    eno int primary key,
    ename varchar(30),
    thrs int,
    salary int,
    pno references project1(pno)
);

insert into project1 values(1, 'PLSQL', 0);

insert into emps values(101, 'Aiman', 4, 50000, 1);