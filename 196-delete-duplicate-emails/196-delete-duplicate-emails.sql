sqlite
create table Person(Id,Email);
insert into Person(Id,Email) values(1,'john@example.com');
insert into Person(Id,Email) values(2,'bob@example.com');
insert into Person(Id,Email) values(3,'john@example.com');
select * from Person;
-- select Email from Person group by Email having count(Email)>1;

-- delete from Person where Email 
--     in
--         (select Email from
--             (select Email from Person group by Email having count(Email)>1) as tmp1 )
--      and Id not in
--      (select min(id) from Person group by Email having count(Email)>1);

# Write your MySQL query statement below

delete from Person where Email 
    in
        (select Email from
            (select Email from Person group by Email having count(Email)>1) as tmp1 )
     and Id not in(
     select * from
     (
     (select min(id) from Person group by Email having count(Email)>1)
    
      ) as tmp2)   ;