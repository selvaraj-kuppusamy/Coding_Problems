/*
https://www.hackerrank.com/challenges/what-type-of-triangle/problem
*/
SELECT CASE
        WHEN (B+C)<=A OR (A+C)<=B OR (A+B)<=C THEN 'Not A Triangle'
        WHEN A = B AND B = C THEN 'Equilateral'
        WHEN A = B OR B = C  OR A = C  THEN 'Isosceles'
        WHEN A <> B OR B <> C  OR A <> C  THEN 'Scalene'
END
FROM TRIANGLES;
