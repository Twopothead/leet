sqlite
create table salary(id,name,sex,salary);
insert into salary(id,name,sex,salary) values(1,'A','m',2500);   
insert into salary(id,name,sex,salary) values(2,'B','f',1500);    
insert into salary(id,name,sex,salary) values(3,'C','m',5500);    
insert into salary(id,name,sex,salary) values(4,'D','f',500);
select * from salary;

-- update salary set sex = 'f' where sex = 'm'; 