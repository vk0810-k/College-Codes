library(tidyverse)

star <- starwars
star

view(star)

filter(star,species == "Droid")

filter(star,species == "Droid",homeworld == "Tatooine")

star <- mutate(star, bmi = mass/((height/100)^2))
star

view(star)

select(star,name : bmi)

star.trans <- transmute(star,bmi2 = mass/((height/100)^2))
star.trans

arrange(star,mass)
arrange(star,desc(mass))

summarize(star,avg.height = mean(height,na.rm = T))

star.species <- group_by(star,species)
summarise(star.species,avg.height = mean(height,na.rm = T))

sample_n(star,10)
sample_frac(star,0.1)

#PIPE function %>%
star %>%
  group_by(species)%>%
  summarise(count = n(),mass = mean(mass,na.rm = T)) %>%
  filter(count>1)


emplyee.data <- read.csv("G:/R PRAC UDEMY/employee_data.csv",skip = 23, stringsAsFactors = F)
emplyee.data <- as.tibble(employee.data)
emplyee.data$gender <- as.factor(employee.data$gender)
emplyee.data$title <- as.factor(employee.data$title)

any(is.na(emplyee.data))

emplyee.a <- emplyee.data %>% 
  select(ends_with("name"), gender, everything()) %>%
  filter(salary >= 70000) %>% 
  arrange(gender, last_name)

good.earners <- emplyee.a["emp_no"]

emplyee.b <- emplyee.data %>% 
  group_by(title, gender) %>% 
  summarise(avg.salary = mean(salary)) %>% 
  mutate(monthly = avg.salary/12) %>% 
  arrange(gender, desc(monthly))

#tidyr

library(tidyverse)

billboard <- read.csv("G:/R PRAC UDEMY/empdata.csv",skip = 23)
billboard <- as_tibble(billboard)
billboard

billboard %>% gather(x1st.week:x76th.week,key = "WEEK",value = "rank",na.rm = T)
