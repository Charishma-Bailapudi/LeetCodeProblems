# Write your MySQL query statement below

SELECT MAX(num) as num from (SELECT num from MyNumbers GROUP BY(num) HAVING COUNT(num)=1) as t;