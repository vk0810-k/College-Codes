library(tidyverse)

hdi <- read.csv("G:/R PRAC UDEMY/hdi-cpi.csv",stringsAsFactors = F)
hdi <- as.tibble(hdi)
hdi

sc <- ggplot(hdi)
sc

sc <- ggplot(hdi,aes(CPI.2015,HDI.2015))
sc

sc+geom_point(aes(color = Region),size = 3) + stat_smooth() + theme_minimal()

#histogram using ggplot2
df <- read.csv("G:/R PRAC UDEMY/titanic.csv",stringsAsFactors = F)
df <- as.tibble(df)
df$Survived <- as.factor(df$Survived)
df$Pclass <- as.factor(df$Pclass)
df$Sex <- as.factor(df$Sex)
df$Embarked <- as.factor(df$Embarked)
df

hist <- ggplot(data = df,aes(x = Age))
hist + geom_histogram(binwidth = 5,color = "darkslategray",
                      fill = "darkslategray4",alpha = 0.5) + 
  ggtitle("Age distribution on the titanic") + 
  labs(x = "Age",y = "Number of passengers") + 
  theme_minimal()

library(tidyverse)
install.packages("ggthemes")
library(ggthemes)

emp <- read.csv("employee-data.csv", skip = 23, stringsAsFactors = FALSE)
emp <- as.tibble(emp)
emp$gender <- as.factor(emp$gender)
emp$title <- as.factor(emp$title)

emp.a <- filter(emp, salary > 45000)

hist <- ggplot(emp.a, aes(salary))
hist + geom_histogram(binwidth = 5000, color = "darkslategray",
                      fill = "darkseagreen2", alpha = 0.7) +
  labs(title = "Salary distribution in the employee data",
       x = "Salary", y = "Number of employees in the salary bracket") +
  theme_solarized_2(light = FALSE, base_size = 15, base_family = "serif")

bar <- ggplot(df,aes(x = Sex,fill = Survived))
bar + geom_bar() + theme_light() + 
  labs(y = "Passenger Count",
       x = "Gender",
       title = "Survival Rate on the by GENDER")

library(tidyverse)

my.box <- ggplot(df,aes(x = Survived,y = Age))
my.box + geom_boxplot(outlier.colour = "red",outlier.shape = 4) + 
  geom_jitter(width = 0.2,aes(color = Sex)) 
  labs(title = "Survival rate on the titanic based on the AGE") + 
  theme_light()

sp <- ggplot(hdi,aes(CPI.2015,HDI.2015))
sp + geom_point(aes(color = Region), shape = 21,
                fill = "white",size = 3,stroke = 2) + theme_light() + 
  labs(x = "Corruption Percentage Index,2015",
       y = "Human Development Index,2015",
       title = "Corruption And Human Development") + 
  stat_density2d()

library(tidyverse)

col.1 <- c(1,1,2,4,5,6,7,8,9,3,6,5,8,4)
col.2 <- c(2,3,5,8,6,7,4,6,4,2,4,5,6,4)
col.3 <- c(8,9,7,5,6,4,1,2,3,4,5,6,7,9)

df <- data.frame(col.1,col.2,col.3)

summary(df)

pl.1 <- ggplot(df,aes(x = col.1)) + 
  geom_histogram(binwidth = 1,color = "white",fill = "red4") + 
  theme_light() + labs("Positive skewness")

pl.2 <- ggplot(df,aes(x = col.2)) + 
  geom_histogram(binwidth = 1,color = "white",fill = "red4") + 
  theme_light() + labs("Zero skewness")

pl.3 <- ggplot(df,aes(x = col.3)) + 
  geom_histogram(binwidth = 1,color = "white",fill = "red4") + 
  theme_light() + labs("Negative skewness")

pl.1
pl.2
pl.3

s1 <- read.csv("G:/R PRAC UDEMY/skew_1.csv")
s2 <- read.csv("G:/R PRAC UDEMY/skew_2.csv")

skew1 <- ggplot(data = sk1, aes(x = `Dataset 1`))
skew1 + geom_histogram(binwidth = 100,
                       color = "darkslategray", 
                       fill = "darkslategray4", 
                       alpha = 0.5) +
  theme_light()
skew1

skew2 <- ggplot(data = sk2, aes(x = `Dataset 2`))
skew2 + geom_histogram(binwidth = 100,
                       color = "darkslategray", 
                       fill = "darkslategray4", 
                       alpha = 0.5) +
  theme_light()
skew2

library(tidyverse)

ny <- c(1,2,3,3,5,6,7,8,9,11)
la <- c(1,2,3,4,5,6,7,8,9,10)

pizza <- data_frame(ny,la)

pizza$ny.mxn <- c(18.81,37.62,56.43,56.43,94.05,112.86,131.67,150.48,169.29,206.91)

pizza

lapply(pizza,mean)
sapply(pizza,mean)

sapply(pizza,var)

sapply(pizza, sd)

coef.var <- sapply(pizza, sd) / sapply(pizza,mean)
coef.var

homes <- read.csv("G:/R PRAC UDEMY/land_data-states.csv",stringsAsFactors = F)
homes <- as.tibble(homes)
homes %>% subset(Date == 2001.25) %>% ggplot(aes(y = Structure.Cost,
                                                 x = log(Land.Value))) + 
  geom_point() + theme_light() + labs(x = "Land Value (transfered)",
                                      y = "Structure Cost (USD)",
                                      title = "Reltionship between land value and structure cost")
cor(homes$Structure.Cost,homes$Land.Value)

cor.test(homes$Structure.Cost,homes$Land.Value)
