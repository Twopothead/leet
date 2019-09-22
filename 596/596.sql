sqlite
create table courses(student,class);
insert into courses(student,class) values('A','Math');
insert into courses(student,class) values('B','English');
insert into courses(student,class) values('C','Math');
insert into courses(student,class) values('D','Biology');
insert into courses(student,class) values('E','Math');
insert into courses(student,class) values('F','Math');
insert into courses(student,class) values('A','Math');

select * from courses;



-- insert into courses(student,class) values('A','Math');
-- insert into courses(student,class) values('B','English');
-- insert into courses(student,class) values('C','Math');
-- insert into courses(student,class) values('D','Biology');
-- insert into courses(student,class) values('E','Math');
-- insert into courses(student,class) values('F','Computer');
-- insert into courses(student,class) values('G','Math');
-- insert into courses(student,class) values('H','Math');
-- insert into courses(student,class) values('I','Math');

select class from (select class,count(*) as students_count from courses group by class) as Lesson_student where students_count>=5;



select class from (select class,count(*) as students_count from courses group by class) where students_count>=5;

Every derived table must have its own alias

select class,count(*) from courses group by class;


{"headers": {"courses": ["student", "class"]}, "rows": {"courses": [["A", "Math"], ["B", "English"], ["C", "Math"], ["D", "Biology"], ["E", "Math"], ["F", "Math"], ["A", "Math"]]}}
