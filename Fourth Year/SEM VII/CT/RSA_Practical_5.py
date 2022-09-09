from utils import *
import random

primes = [i for i in range(100, 500) if is_prime(i)]
p = random.choice(primes)
q = random.choice(primes)

n = p*q
k = (p-1)*(q-1) 

for e in range(2, k):
    if gcd(e, k) == 1:
        break

public_key = (n, e)

_, b, _ = extended_gcd(e, k)
if b < 0:
    b = b + k
private_key = (n, b)

while True:
    ch = int(input('Welcome to RSA Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 2 for Decryption \n [*] Press 0 to exit..\n \nYour Choice:: '))

    if ch == 1:
        print("\n============================================")
        print("              !!!!Encryption!!!!              ")
        message = input('Enter the text to be encrypted: ')
        encrypted = encrypt(public_key, message)
        print(f'Encrypted message: {"".join(str(s) for s in encrypted)}')
        print("\n============================================\n\n")

    elif ch == 2:
        print("\n============================================")
        print("               !!!Decryption!!!               ")
        decrypted = decrypt(private_key, encrypted)
        print(f'Enter the text to be decrypted: {"".join(str(s) for s in encrypted)}')
        print(f'Decrypted message: {"".join(str(s) for s in decrypted)}')
        print("\n============================================\n\n")

    elif ch == 0:
        print("\n============================================")
        print("     Thank You for using the Software ;)      ")
        print("                 Exiting Now.                 ")
        print("==============================================")
        exit()