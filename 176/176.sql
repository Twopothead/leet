sqlite
create table Employee(Id,Salary);
insert into Employee(Id,Salary) values(1,100);
insert into Employee(Id,Salary) values(2,200);
insert into Employee(Id,Salary) values(3,300);
select * from Employee;

-- select Salary as SecondHighestSalary from Employee order by Salary desc limit 1,1;