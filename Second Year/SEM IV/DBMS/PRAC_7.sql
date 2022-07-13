/*CREATE TABLE EMPLOYEE
(
EMPNO VARCHAR(10),
EMP_NAME CHAR(20),
DEPT CHAR(10),
SALARY INT(20),
DOJ VARCHAR(10),
BRANCH CHAR(10)
);

INSERT INTO EMPLOYEE VALUES('E101','Amit','Production',45000,'12-Mar-00','Banglore');
INSERT INTO EMPLOYEE VALUES('E102','Amit','HR',70000,'03-Jun-02','Banglore');
INSERT INTO EMPLOYEE VALUES('E103','Sunita','Management',120000,'11-Jan-01','Mysore');
INSERT INTO EMPLOYEE VALUES('E105','Sunita','IT',67000,'01-Aug-01','Mysore');
INSERT INTO EMPLOYEE VALUES('E106','Mahesh','Civil',145000,'20-Sep-03','Mumbai');

SELECT * FROM EMPLOYEE

SELECT EMPNO,SALARY FROM EMPLOYEE

SELECT AVG(SALARY) FROM EMPLOYEE

SELECT COUNT(*) FROM EMPLOYEE

SELECT COUNT(DISTINCT EMP_NAME) FROM EMPLOYEE

SELECT EMP_NAME,SUM(SALARY),COUNT(*) FROM EMPLOYEE GROUP BY EMP_NAME

SELECT EMP_NAME,SUM(SALARY) FROM EMPLOYEE GROUP BY EMP_NAME HAVING SUM(SALARY)>120000

SELECT EMP_NAME FROM EMPLOYEE ORDER BY EMP_NAME DESC;*/

SELECT * FROM EMPLOYEE WHERE EMP_NAME = 'Amit' AND SALARY>50000