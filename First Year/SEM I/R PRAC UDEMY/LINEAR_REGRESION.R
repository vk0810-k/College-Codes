college <- read.csv("G:/R PRAC UDEMY/regression-example.csv")
college
describe(college)

linmod <- lm(GPA ~ SAT,data = college)

library(ggplot2)

ggplot(college,aes(SAT,GPA)) + 
  geom_point() + 
  theme_light() + 
  labs(x = "SAT Scores",
       y = "GPA Scores",
       title = "SAT and GPA") + 
  stat_smooth(method = "lm",se = F)

summary(linmod)

library(tidyverse)

data <- read.csv("G:/R PRAC UDEMY/real_estate_price_size_year_view.csv")
data

linmod <- lm(price ~ size,data = data)

ggplot(data, aes(price, size)) + 
  geom_point() +
  theme_light() +
  labs(x = "House price (in USD)",
       y = "House size (in sq ft)",
       title = "House pricing and size")  + 
  stat_smooth(method = "lm",se = F)

summary(linmod)
