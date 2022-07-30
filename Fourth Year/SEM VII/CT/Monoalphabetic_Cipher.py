import random

while True:
    ch = int(input('Welcome to Mono-Alphabetic Cipher Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 2 for Decryption \n [*] Press 0 to exit..\n \nYour Choice:: '))

    if ch == 1:
        print("\n============================================")
        print("            !!!Encryption!!!                   ")
        text = input("\nText:").lower()

        alpha = [a for a in range(97,123)]

        charactrize=[ chr(al) for al in alpha]
        charactrize.append(' ')

        shuffled = random.sample(alpha,len(alpha))

        key =[chr(sh) for sh in shuffled]
        key.append(' ')

        print("\n=========================================================")
        print("            !!!Encrypted Successfully!!!                   ")
        print("\nEncypted Text ::")
        for tx in text:
            print(key[charactrize.index(tx)],end="")
        print("\nUsing Key:",key,"\n")
        print("\n=========================================================")
        

    elif ch == 2:
        print("\n=========================================================")
        print("                   !!!Decryption!!!                        ")
        text = input("Encrypted text:").lower()
        key = eval(input("Key:"))

        alpha = [a for a in range(97,123)]

        charactrize=[chr(al) for al in alpha]
        charactrize.append(' ')
    
        print("\n=========================================================")
        print("               !!!Decrypted Successfully!!!                ")
        print("\nDecypted Text ::")
        for tx in text:
            print(charactrize[key.index(tx)],end="")
        print("\n=========================================================\n")

    elif ch == 0:
        print("\n============================================")
        print("Thank You for using the Software ;)")
        print("Exiting Now.")
        print("============================================")
        exit()