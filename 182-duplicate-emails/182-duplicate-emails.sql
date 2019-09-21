# sudo apt-get install sqlite sqlite3
sqlite
create table Person(Id,Email);
insert into Person(Id,Email) values(1,"a@b.com");
insert into Person(Id,Email) values(2,"c@d.com");
insert into Person(Id,Email) values(3,"a@b.com");
select * from Person;
select Email from Person group by Email having count(*)>1;


# select Email from Person group by Email having count(*)>1;
