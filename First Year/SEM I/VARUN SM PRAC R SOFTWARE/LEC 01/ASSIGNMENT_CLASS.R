x = as.integer(readline(prompt = "�nter The VEG People::"))
y = as.integer(readline(prompt = "�nter The NON-VEG People::"))
z = as.integer(readline(prompt = "�nter The KIDS People::"))
tot = x*300 + y*500 + z*200
print(paste("The Final Bill Is::",tot))