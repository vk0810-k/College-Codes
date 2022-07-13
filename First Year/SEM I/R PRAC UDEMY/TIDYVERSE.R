pok <- read.table("original.csv",
           sep = ",",
           header = T,
           stringsAsFactors = F)
pok

data <- read.csv("original1.csv",stringsAsFactors = F,nrows = 200,skip = 21)
data

nrow(data)
ncol(data)

colnames(data)
colnames(pok)

rownames(data)
rownames(pok)

summary(data)
summary(pok)

library(tidyverse)
data


name <- c("Flipper", "Bromley", "Nox", "Orion", "Dagger", "Zizi", "Carrie")
mo <- c(53, 19, 34, 41, 84, 140, 109)
size <- c("medium", "small", "medium", "large", "small", "extra small", "large")
weight <- c(21, 8, 4, 6, 7, 2, 36)
breed <- c("dog", "dog", "cat", "cat", "dog", "cat", "dog")

pets <- data.frame(mo, size, weight, breed)
names(pets) <- c("Months old", "Size", "Weight", "Breed")
rownames(pets) <- name

eg.na <- c(NA,1:10)
eg.na
mean(eg.na)

mean(eg.na,na.rm = T)

is.na(eg.na)
