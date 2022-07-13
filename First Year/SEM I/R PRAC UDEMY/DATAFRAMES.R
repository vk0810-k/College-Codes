title <- c("Star Wars","The Empire Strikes Back","Return Of the Jedi","The Phantom Menace",
           "Attack Of the Clones","Revenge of the sith","The Force Awakens")
year <- c("1977","1980","1983","1999","2002","2005","2015")
legth.min <- c("121","124","133","133","142","140","135")
box.office.mil <- c("787","543","572","1027","657","849","2059")

mydata <- data.frame(title, year, legth.min, box.office.mil)
print(mydata)


MONTHS <- c("Flipper","Bromley","Nox","Orion","Dagger","Zizi","Carrey")
OLD <- c(53,19,34,41,84,1410,109)
SIZE <- c("Medium","Small","Medium","Large","Small","Extra Small","Large")
WEIGHT <- c(21,8,4,6,7,2,36)
BREED <- c("Dog","Dog","Cat","Cat","Dog","Cat","Dog")

data <- data.frame(MONTHS,OLD,SIZE,WEIGHT,BREED)
data

employee.data <- read.csv("G:\R PRAC UDEMY\original1.csv", skip = 23, nrow = 200, stringsAsFactors = FALSE)

