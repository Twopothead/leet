sqlite
Create table seat(id int, student varchar(255));
insert into seat (id, student) values ('1', 'Abbot');
insert into seat (id, student) values ('2', 'Doris');
insert into seat (id, student) values ('3', 'Emerson');
insert into seat (id, student) values ('4', 'Green');
insert into seat (id, student) values ('5', 'Jeames');
select * from seat;
select s2.id,(case when s1.id%2=0 then s1.student end) from seat as s1,seat as s2 where s1.id%2=0 and s2.id = s1.id+1;
union
select id,(case when id%2!=0 then s1.student end) from seat as s1 where id%2!=0;
