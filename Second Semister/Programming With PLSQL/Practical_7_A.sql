--p7A 25/02/24:  write a  plsql block to create a cycle a sequence by using cycle, alter sequence and insert the values in a table.

create sequence seq
start with 11
increment by 3
minvalue 11
maxvalue 30
cycle
cache 5
order;

-- alter sequence seq
-- increment by 5
-- maxvalue 30
-- cycle
-- cache 5;

insert into seqtable values (seq.nextval);




-- p7B: wrtie a sequence as 10, 20, 30, .... till 100 and bind it with the table product(product no, product name)

create sequence prodseq
minvalue 10
increment by 10
maxvalue 100
cache 5
order;

create table product
(
    pNo int,
    pName varchar(30)
);

insert into product values (prodseq.nextval, 'Apple');
insert into product values (prodseq.nextval, 'Samsung');
insert into product values (prodseq.nextval, 'One Plus');
insert into product values (prodseq.nextval, 'Vivo');

-- P8A: 

create table customers
(
    cid int primary key,
    cname varchar(30),
    cage int,
    address varchar(30),
    salary int
);


insert into customers values(1, 'Ramesh', 32, 'Ahmedabad', 2000);
insert into customers values(2, 'Lhilan', 25, 'Delhi', 1500);
insert into customers values(3, 'Laushik', 23, 'Kota', 2000);
insert into customers values(4, 'Chaitali', 25, 'Mumbai', 6500);
insert into customers values(5, 'Hardik', 27, 'Bhopal', 8500);


Declare 
total_row int;
Begin
update customers
set salary = salary + 500;
if sql%notfound then
dbms_output.put_line('No customer record updated.');
elsif sql%found then
total_row := sql%rowcount;
dbms_output.put_line(total_row||' Customer record updated.');
end if;
end;

P8B:


declare
c_id customers.cid%type;
c_name customers.cname%type;
c_addr customers.address%type;
cursor c_customers is
select cid, cname, address from customers;
begin
  open c_customers;
  loop
    fetch c_customers into c_id, c_name, c_addr;
    exit when c_customers%notfound;
    dbms_output.put_line(c_id||' '||c_name||' '||c_addr);
  end loop;
  close c_customers;

end;