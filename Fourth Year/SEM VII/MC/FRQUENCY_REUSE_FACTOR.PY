print("Enter i & j values. common (i,j) values are: (1,0), (1,1), (2,0), (2,1), (3,0), (2,2), (3,3)")
i = int(input("Enter i: "))
j = int(input("Enter j: "))
if i == 0 and j == 0:
    raise ValueError("i & j both cannot be zero")
elif j > i:
    raise ValueError("value of j cannot be greater than i")
else:
    N = (i**2 + i * j + j**2)
    print("N is {}".format(N))
k = int(input("Channels allocated to each cell :: "))
S = k*N 
print("Total number of duplex channels available to use:: ",S)
print("Frequency Reuse Factor is :: ",1/N)
M = int(input("Number of repeatations in Cellular System M :: "))
C = M*S
print("Cluster Capacity C is ::",C)
R = int(input("Radius of a cell R :: "))
D = R * (3 * N)**0.5
print("The distance between any two Co-Channels D is :: ",D)