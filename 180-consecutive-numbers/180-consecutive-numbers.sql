sqlite
Create table Logs (Id int, Num int);
insert into Logs (Id, Num) values ('1', '1');
insert into Logs (Id, Num) values ('2', '1');
insert into Logs (Id, Num) values ('3', '1');
insert into Logs (Id, Num) values ('4', '2');
insert into Logs (Id, Num) values ('5', '1');
insert into Logs (Id, Num) values ('6', '2');
insert into Logs (Id, Num) values ('7', '2');
select * from Logs;
# Write your MySQL query statement below

select distinct l1.Num as ConsecutiveNums from Logs as l1,Logs as l2,Logs as l3 
where l2.Id = l1.Id + 1
and l3.Id = l2.Id + 1
and l2.Num = l1.Num
and l3.Num = l2.Num;