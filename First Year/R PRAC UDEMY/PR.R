vrbl <- 9
v1 <- 1:10
m1 <- matrix(v1,row = 2,byrow)
m1 <- matrix(v1,nrow = 2,byrow = TRUE)
cards <- c("Blue-Eyes White Dragon","Exodius",
          "The Winged Dragon of Ra","Raigeki",
          "Slifer","the Sky Dragon","Obelisk the Tormentor",
          "Black Luster Soldier","5-Headed Dragon","Exodia the Forbidden One","Dragon Master Knight")
print(cards)
typeof(cards)

atk <- c("3000","NA","NA","NA","NA","4000","3000","5000","1000","5000")
typeof(atk)
median(atk)

yugioh <- c(cards, atk)
typeof(yugioh)

monster <- c("T","T","T","F","T","T","T","T","T","T")
yugioh <- c(yugioh, monster)
print(yugioh)
typeof(yugioh)

coerce.check <- c(atk, monster)
coerce.check


lvl <- c(8, 10, 10, 1, 10, 10, 8, 12, 1, 12)
sum(lvl)
mean(lvl)
median(lvl)
length(lvl)
v <- sd(lvl)
round(v)
print(round(v))

ls()

lvl <- c(8, 10, 10, 1, 10, 10, 8, 12, 1, 12)

sum(lvl)
mean(lvl)
median(lvl)
length(lvl)
sd(lvl)
round(sd(lvl))
print(round(sd(lvl)))

args(sample)
args(median)
median(na.rm = TRUE, x = lvl) # note that I have not followed R's inherent order here
median(lvl)

median(atk, na.rm = TRUE)
median(atk)

draw <- function(){
  
  coin <- c("Heads","Tails")
  
  hand <- sample(coin, size=100, replace = T,prob = c(0.3, 0.7))
  
  print(hand)
  
}
draw()

