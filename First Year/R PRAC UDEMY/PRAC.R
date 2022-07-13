cards <- c("Blue-Eyes White Dragon", "Exodius", "The Winged Dragon of Ra", "Raigeki", 
           "Slifer the Sky Dragon", "Obelisk the Tormentor", "Black Luster Soldier", 
           "5-Headed Dragon", "Exodia the Forbidden One", "Dragon Master Knight")
atk <- c(3000, NA, NA, NA, NA, 4000, 3000, 5000, 1000, 5000)

names(atk) <- cards
attributes(atk)
names(atk)
atk

names(atk) <- NULL
atk

atk[6]

atk[-2]

atk[c(1,3,5,7,9)]

atk[-c(4,5,6)]

atk[atk>2000]

seq <- c(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30)
attributes(seq)

dim(seq) <- c(3,5)

dim(seq) <- c(1,3,5)

mtrx <- matrix(c("dark","king","dark","queen","dark","pawn","dark","pawn","dark","knight","light","bishop","light","king","light","rook","light","pawn","light","pawn"),
               ncol = 2 , byrow = TRUE,
               dimnames = list(NULL,c("Player","Piece")))
mtrx

expl <- matrix(1:10,nrow = 4,ncol = 4)
expl

mtrx[c(1,3,7),]

mtrx.t <- t(mtrx)
turn <- c(3, 5, 2, 2, 7, 4, 6, 5, 2, 1)
mtrx.t <- rbind(mtrx.t, "Turn" = turn)
mtrx <- t(mtrx.t)
mtrx[6, 2]
mtrx[, 1:2]
mtrx[5,]
mtrx[1:5, ]
mtrx[, 2, drop = FALSE]
mtrx[, -2]
mtrx[2, c(1, 3)]
mtrx[7, 3] <- 3
mtrx[7, 3]


mat.my <- matrix(runif(12),
                nrow = 3,ncol = 4,byrow = TRUE,
              dimnames=list(c("x","y","z"),c("uno", "dos", "tres", "cuatro")))
mat.my
mat.my <- mat.my*10
s.mat <- mat.my[1:2, ]
mat.my - s.mat
m.mat <- mat.my[ , -4]
mat.my - m.mat
uno <- mat.my[, "uno"]
mat.my - uno
mat.new <- matrix(rnorm(12), nrow = 3, byrow = TRUE)
mat.my * mat.new

matrix.mat <- matrix(c(171.5,292.5,281.6,460.6,139.3,288),
                     nrow = 3,byrow = TRUE,
                     dimnames = list(c("The Matrix","Reloaded","Revolutions"),
                                     c("INDIA","WORLDWIDE")))
matrix.mat

total <- colSums(matrix.mat)
rowSums(matrix.mat)

avg <- colMeans(matrix.mat)
rowMeans(matrix.mat)

matx <- rbind(matrix.mat,avg,total)
matx


n <- matrix(rnorm(25),nrow = 5, byrow = TRUE)
u <- matrix(runif(25),nrow = 5, byrow = TRUE)

avg.n <- colMeans(n)
avg.m <- colMeans(m)

avg.m
avg.n

total.n <- colSums(n)
total.u <- colSums(u)

total.n
total.u

n.avg.total <- rbind(n, avg.n, total.n)
u.avg.total <- rbind(u, avg.u, total.u)

n.avg.total
u.avg.total

r.avg.n <- rowMeans(n.avg.total)
r.avg.u <- rowMeans(u.avg.total)

r.avg.n
r.avg.u

r.total.n <- rowSums(n.avg.total)
r.total.u <- rowSums(u.avg.total)

r.total.n
r.total.u

n.avg.total <- cbind(n.avg.total, r.avg.n, r.total.n)
u.avg.total <- cbind(u.avg.total, r.avg.u, r.total.u)

n.avg.total
u.avg.total


min(n)
min(u)

max(n)
max(u)

min(n[, 3])
min(u[, 3])

max(n[, 3])
max(u[, 3])

mean(n)
mean(u)

sd(n)
sd(u)

marital.status <- c("Married","Married","Single","Divorced","Married","Single","Widowed")
str(marital.status)

marital.factor <- factor(marital.status)
marital.factor

typeof(marital.factor)
str(marital.factor)

new.factor <- factor(marital.status,
                     levels = c("Single","Married","Divorced","Widowed"),
                     labels = c("Sin","Mar","Div","Wid"))
new.factor
typeof(new.factor)
str(new.factor)

piece <- mtrx[,"Piece"]

piece <- factor(piece, levels = c("king", "queen", "rook", "bishop", "knight", "pawn"),
                labels = c("King", "Queen", "Rook", "Bishop", "Knight", "Pawn"))

levels(piece) <- c("K", "Q", "R", "B", "K", "P")

piece.ordered <- factor(piece, ordered = TRUE, levels = c("K", "Q", "R", "B", "K", "P"),
                        labels = c("King", "Queen", "Rook", "Bishop", "Knight", "Pawn"))

str(piece.ordered)



my.book <- list(Name = "1984", Author = "George Orwell", Published = "1949",
                Contents = list(PartOne = c(1:8),
                                PartTwo = c(1:10),
                                PartThree = c(1:6),
                                Appendix = "Newspeak"))
my.book
str(my.book)


x <- c(1,2,3,4)
y <- c(1,3,5,7)

(x < 5) | (y > 1)

(x < 5) || (y > 1)

(x < 5) & (y > 1)

(x < 5) && (y > 1)


x <- 10
if((x >= 1) & (x<60))
{
  print("Rotten!")
} else if((x >= 60) & (x<75))
{
  print("Certified Fresh!")
} else
{
  print("Please input a number between 1 to 100")
}

x <- 101

if((x >= 1) & (x < 60)){
  print("Rotten!")
} else if((x >= 60) & (x < 75)){
  print("Fresh")
} else if((x >= 75) & (x <= 100)){
  print("Certified Fresh!")
} else {
  print("Please input a number between 1 and 100")
}


input <- c(1,2,3,4,5,6)
lottery <- sample(1:10,6,replace = F)
wrongGuesses <- length(setdiff(lottery,input))
if(wrongGuesses == 0)
{
  print("Mom won the lottery")
} else {
  print("Better luck next time")
}


n <- 10
sum <- 0

for(i in 1:n){
  sum <- sum + i
  print(sum)
} 


n <- -12
while (n<0) {
  print(paste("The number is =",n))
  n <- n+1
}


n <- 10
i <- 1
sum <- 0
while (i <= n) {
  sum <- sum + i
  i <- i+1
  print(paste("The sum is =",sum))
}



coup <- matrix(rep(c("Duke", "Assassin", "Captain", "Ambassador", "Contessa"), 3), ncol = 1)

cit <- matrix(c("Magistrate", "Thief", "Wizard", "Patrician", "Bishop", "Trader", "Architect", "Marshal",
                "Queen", "Witch", "Blackmailer", "Magician", "Emperor", "Abbot", "Alchemist", "Warlord",
                "Tax Collector", "Spy", "Seer", "Merchant", "Scholar", "Diplomant", "Artist"), ncol=1)

deal <- function(deck) {
  cards <- deck[1:3,]
  print(cards)
}

deal(deck <- coup)
deal(cit)

shuffle <- function(deck){
  random <- sample(1:23,size = 23)
  deck.s <- deck[random , , drop = FALSE]
  return(deck.s)
}

deal <- function(deck){
  shuffled <- shuffle(deck)
  cards <- shuffled[1:3,]
  return(cards)
}

deal(cit)

f <- function(x) {
  f <- function(x) {
    f <- function(x) {
      x ^ 2
    }
    f(x) + 1
  }
  f(x) * 2
}

f(10)
