print("Key Generation Process")
p = int(input("Enter a prime number : "))
d = int(input("Enter a decryption key : "))
e1 = int(input("Enter the 2nd part of Encryption Key : "))
e2 = pow(e1,d) % p
print("The 3rd Part of Encryption Key is : ",e2)
print("The Public Key is : ",[e1,e2,p])

print("Encrption Process")
r = int(input("Enter a random integer : "))
c1 = pow(e1,r)%p
print("Computer Cipher text 1 is : ",c1)
pt = int(input("Enter the lenght of Plain Text : "))
c2 = pt * pow(e2,r)%p
print("Computer Cipher text 2 is : ",c2)
print("The Cipher Text is : ",[c1,c2])

print("Decryption Process")
x = pow(c1,d)
print(x)
PT = (c2/x)%p
print("The Plain Text Length is : ",PT)