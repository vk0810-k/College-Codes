while True:
    ch = int(input('Welcome to ElGamel Program Made by Varun Khadayate..\n [*] Press 1 for Key Generation \n [*] Press 2 for Encryption \n [*] Press 3 for Decryprion \n [*] Press 0 to exit..\n \nYour Choice:: '))

    if ch == 1:
        print("\n========================================================")
        print("              !!!!Key Generation Process!!!!              ")
        p = int(input("Enter a prime number : "))
        d = int(input("Enter a decryption key : "))
        e1 = int(input("Enter the 2nd part of Encryption Key : "))
        e2 = pow(e1,d) % p
        print("The 3rd Part of Encryption Key is : ",e2)
        print("The Public Key is : ",[e1,e2,p])
        print("\n========================================================\n\n")

    elif ch == 2:
        print("\n===================================================")
        print("               !!!Encrption Process!!!               ")
        r = int(input("Enter a random integer : "))
        c1 = pow(e1,r)%p
        print("Computer Cipher text 1 is : ",c1)
        pt = int(input("Enter the lenght of Plain Text : "))
        c2 = pt * pow(e2,r)%p
        print("Computer Cipher text 2 is : ",c2)
        print("The Cipher Text is : ",[c1,c2])
        print("\n===================================================n\n")

    elif ch == 3:
        print("\n===================================================")
        print("               !!!Decryption Process!!!               ")
        x = pow(c1,d)
        i = 1
        while True:
            if(i*x % p == 1):
                D = i
                break
            i += 1

        PT = (c2*D)%p
        print("The Plain Text Length is : ",PT)       
        exit()
    
    elif ch == 0:
        print("\n============================================")
        print("     Thank You for using the Software ;)      ")
        print("                 Exiting Now.                 ")
        print("==============================================")
        exit()