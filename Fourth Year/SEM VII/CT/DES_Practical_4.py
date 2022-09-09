from pyDes import *

data = "Hello my name is Varun Khadayate"
k = des("DESCRYPT", CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=PAD_PKCS5)
d = k.encrypt(data)

while True:
    ch = int(input('Welcome to DES Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 2 for Decryption \n [*] Press 0 to exit..\n \nYour Choice:: '))

    if ch == 1:
        print("\n============================================")
        print("              !!!!Encryption!!!!              ")
        print("Enter the Plain Text: ",data)
        print("Encrypted Text is : ", d)
        print("\n============================================\n\n")

    elif ch == 2:
        print("\n============================================")
        print("               !!!Decryption!!!               ")
        print("Enter the Encrypted Text: %r", d)
        print("Decrypted Text is: ",k.decrypt(d))
        print("\n============================================\n\n")

    elif ch == 0:
        print("\n============================================")
        print("     Thank You for using the Software ;)      ")
        print("                 Exiting Now.                 ")
        print("==============================================")
        exit()