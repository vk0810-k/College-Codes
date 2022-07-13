row_names= c("row1","row2","row3","row4")
col_names= c("col1","col2","col3","col4")
M = matrix(c(1:16),nrow=4,byrow= TRUE,dimnames=list(row_names,col_names))
print(M)
print(M[2,3])
print(M[3,])
print(M[,4])

weight <- c(71, 67, 83, 67)
height <- c(1.75, 1.81, 1.78, 1.82, 1.97, 2.12, 2.75)
bmi <- weight/height^2
print(bmi)