sqlite
create table Employee(Id,Name,Salary,ManagerId);
insert into Employee(Id,Name,Salary,ManagerId) values(1,'Joe',70000,3);
insert into Employee(Id,Name,Salary,ManagerId) values(2,'Henry',80000,4);
insert into Employee(Id,Name,Salary,ManagerId) values(3,'Sam',60000,NULL);
insert into Employee(Id,Name,Salary,ManagerId) values(4,'Max',90000,NULL);
select * from Employee;

select e1.Name as Employee from Employee as e1,Employee as e2 where e1.ManagerId = e2.Id and e1.Salary > e2.Salary;
# 自联结