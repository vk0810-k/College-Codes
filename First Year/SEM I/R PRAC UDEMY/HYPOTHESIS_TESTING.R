sal <- read.csv("G:/R PRAC UDEMY/ztest-a.csv")
sal
summary(sal)

z.test <- function(a,mu,sd){
  zeta = (mean(a)-mu) / (sd/sqrt(length(a)))
  return(zeta)
}
z.test(a = sal$salary , mu = 113000 , sd = 15000)

z.test(a = sal$salary , mu = 100200 , sd = 15000)

library(psych)

rate <- read.csv("G:/R PRAC UDEMY/ttest-a.csv")
rate
describe(rate)

my.t.test <- function(a,hmean){
  t <- (mean(a)-hmean) / (sd(a)/sqrt(length(a)))
  return(t)
}

my.t.test(rate$Open.rate,0.4)

library(pastecs)

magn <- read.csv("G:/R PRAC UDEMY/dependant-samples.csv")
magn

dep.t.test <- t.test(magn$Before,magn$After,paired = T,alternative = "l")
dep.t.test

stat.desc(magn)

grades <- read.csv("G:/R PRAC UDEMY/independent-samples.csv")
grades
grades <- gather(grades,Engineering,Management,
                 key = "course",
                 value = "grades")
grades

ind.t.test <- t.test(gardes~course,data = grades,mu = -4)
ind.t.test

grades <- read_csv("independent-samples.csv")

ind.t.test <- t.test(grades$Engineering, grades$Management, mu=-4)

ind.t.test
