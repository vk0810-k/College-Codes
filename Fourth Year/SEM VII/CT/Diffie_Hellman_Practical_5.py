n=int(input("Enter the prime number to be considered: "))
# n = 11
g=int(input("Enter the primitive root: "))
# g = 7
x=int(input("Enter a secret number for Party1: "))
# x = 3
y=int(input("Enter a secret number for Party2: "))
# y = 6
print("\n")

print ("Party1's  public key -> A = g^x*mod(n))")
alicepublic=(g**x)%n
print ("Party1 public key is: ",alicepublic, "\n")

print ("Party2's public key -> B = g^y*mod(n))")
bobpublic=(g**y)%n
print ("Party2 public key is", bobpublic, "\n")

print ("Party1 calculates the shared key as K=B^x*(mod(n))")
alicekey=(bobpublic**x)%n
print ("Party1 calculates the shared key and results: ",alicekey, "\n")

print ("Party2 calculates the shared key as K = A^y*(mod(n))")
bobkey =(alicepublic**y)%n
print ("Party2 calculates the shared key and gets", bobkey, "\n")

if alicekey == bobkey:
    print("Successfull")
else:
    print("Un-Succesful")