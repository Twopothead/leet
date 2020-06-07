# Write your MySQL query statement below
select e.Score,first_rank as Rank from Scores e left join
(select Score,count_score,CONVERT((@rowNO:=@rowNo+1),unsigned) as first_rank from 
(select distinct Score,count(Score) as count_score from Scores  group by Score Order by Score desc) b,
(select @rowNO:=0) c) d 
on e.Score = d.Score Order by first_rank;