sqlite 
create table cinema(id,movie,description,rating);
insert into cinema(id,movie,description,rating) values (1, 'War','great 3D',8.9);
insert into cinema(id,movie,description,rating) values (2, 'Science,fiction' ,8.5);
insert into cinema(id,movie,description,rating) values (3, 'irish'  ,'boring'  ,6.2);
insert into cinema(id,movie,description,rating) values (4, 'Ice song'  ,'Fantacy' ,8.6);
insert into cinema(id,movie,description,rating) values (5, 'House card','Interesting',9.1);
select * from cinema;

select * from cinema where id%2!=0 and description != 'boring' order by rating desc;