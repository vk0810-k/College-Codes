/*CREATE TABLE Movies
(
Title char(30),
Director char(30),
myear int(5),
rating float(3)
);

CREATE TABLE Actors
(
Actor char(30),
ayear int(5)
);

CREATE TABLE Acts
(
Actor char(30),
Title char(30)
);

CREATE TABLE Directors
(
Director char(30),
dyear int(5)
);

INSERT INTO Movies VALUES('Fargo','Coen',1996,8.2);
INSERT INTO Movies VALUES('Raising Arizona','Coen',1987,7.6);
INSERT INTO Movies VALUES('Spiderman','Raimi',2002,7.4);
INSERT INTO Movies VALUES('Wonder Boys','Hanson',2000,7.6);
SELECT * FROM Movies

INSERT INTO Actors VALUES('Cage',1964);
INSERT INTO Actors VALUES('Hanks',1956);
INSERT INTO Actors VALUES('Maguire',1975);
INSERT INTO Actors VALUES('McDormand',1957);
SELECT * FROM Actors

INSERT INTO Acts VALUES('Cage','Raising Arizona');
INSERT INTO Acts VALUES('Maguire','Spiderman');
INSERT INTO Acts VALUES('Maguire','Wonder Boys');
INSERT INTO Acts VALUES('McDormand','Fargo');
INSERT INTO Acts VALUES('McDormand','Raising Arizona');
INSERT INTO Acts VALUES('McDormand','Wonder Boys');
SELECT * FROM Acts

INSERT INTO Directors VALUES('Coen',1954);
INSERT INTO Directors VALUES('Hanson',1945);
INSERT INTO Directors VALUES('Raimi',1959);
SELECT * FROM Directors

/*SELECT * FROM Movies where myear > 1997

SELECT * FROM Movies where myear > 1997 AND  Director = 'Hanson';

SELECT Title, rating FROM Movies

SELECT Actor from Actors 
UNION 
SELECT Director from Directors

SELECT Title FROM Movies where Director = 'Coen'
INNER JOIN Acts USING 'McDormand'*/

SELECT Movies.Title FROM Acts, Movies WHERE
Movies.Title = Acts.Title AND Acts.Actor = 'McDormand' AND Movies.Director = 'Coen';
