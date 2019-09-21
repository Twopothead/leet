sqlite
create table World(name,continent,area,population,gdp);
insert into World(name,continent,area,population,gdp) values('Afghanistan','Asia'  ,652230,25500100,20343000);   
insert into World(name,continent,area,population,gdp) values('Albania', 'Europe',28748 ,2831741 ,12960000);    
insert into World(name,continent,area,population,gdp) values('Algeria', 'Africa',2381741,37100000,188681000);    
insert into World(name,continent,area,population,gdp) values('Andorra', 'Europe',468   ,78115   ,3712000);
insert into World(name,continent,area,population,gdp) values('Angola' , 'Africa',1246700,20609294,100990000); 
select * from World;

select name,population,area from World where area > 3000000 or population > 25000000;