sqlite
create table Weather(Id int,RecordDate date,Temperature int);
insert into Weather(Id,RecordDate,Temperature) values(1,'2015-01-01',10);
insert into Weather(Id,RecordDate,Temperature) values(2,'2015-01-02',25);
insert into Weather(Id,RecordDate,Temperature) values(3,'2015-01-03',20);
insert into Weather(Id,RecordDate,Temperature) values(4,'2015-01-04',30);
select * from Weather;

# Write your MySQL query statement below
select today.Id
from Weather as today,Weather as yesterday
where today.RecordDate =date_add(yesterday.RecordDate,interval 1 day)
and today.Temperature>yesterday.Temperature;

