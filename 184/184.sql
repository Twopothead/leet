sqlite
create table Employee(Id,Name,Salary,DepartmentId);
insert into Employee(Id,Name,Salary,DepartmentId) values(1,'Joe',70000,1);
insert into Employee(Id,Name,Salary,DepartmentId) values(2,'Jim',90000,1);
insert into Employee(Id,Name,Salary,DepartmentId) values(3,'Henry',80000,2);
insert into Employee(Id,Name,Salary,DepartmentId) values(4,'Sam',60000,2);
insert into Employee(Id,Name,Salary,DepartmentId) values(5,'Max',90000,1);
select * from Employee;

create table Department(Id,Name);
insert into Department(Id,Name) values(1,'IT');
insert into Department(Id,Name) values(2,'Sales');
select * from Department;

select d.Name,e.Name,Salary 
from Employee as e,Department as d
where e.DepartmentId = d.Id;



select d.Name,e.Name,Salary from Employee as e,Department as d where e.DepartmentId = d.Id;