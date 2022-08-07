import string
import numpy as np

while True:
    ch = int(input('Welcome to Rail Fence Cipher Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 2 for Decryption \n [*] Press 0 to exit..\n \nYour Choice:: '))

    if ch == 1:
        print("============================================")
        print("             !!!!Encryption!!!!             ")
        def sequence(n):
            arr=[]
            i=0
            while(i<n-1):
                arr.append(i)
                i+=1
            while(i>0):
                arr.append(i)
                i-=1
            return(arr)

        def railfence(s,n):
            s=s.lower()

            L=sequence(n)
            print("The raw sequence of indices: ",L)

            temp=L
            
            while(len(s)>len(L)):
                L=L+temp

            for i in range(len(L)-len(s)):
                L.pop()
            print("The row indices of the characters in the given string: ",L)
            
            
            print("Transformed message for encryption: ",s)

            num=0
            cipher_text=""
            while(num<n):
                for i in range(L.count(num)):
                    cipher_text=cipher_text+s[L.index(num)]
                    L[L.index(num)]=n
                num+=1
            print("The cipher text is: ",cipher_text)
        
        plain_text=input("Enter the string to be encrypted: ")
        n=int(input("Enter the number of rails: "))
        railfence(plain_text,n)
        print("\n============================================")

    elif ch == 2:
        print("\n============================================")
        print("               !!!Decryption!!!               ")
        def sequence(n):
            arr=[]
            i=0
            while(i<n-1):
                arr.append(i)
                i+=1
            while(i>0):
                arr.append(i)
                i-=1
            return(arr)

        def railfence(cipher_text,n):
            cipher_text=cipher_text.lower()
            L=sequence(n)
            print("The raw sequence of indices: ",L)

            temp=L
            
            while(len(cipher_text)>len(L)):
                L=L+temp

            for i in range(len(L)-len(cipher_text)):
                L.pop()
                
            temp1=sorted(L)
            
            print("The row indices of the characters in the cipher string: ",L)

            print("The row indices of the characters in the plain string: ",temp1)
            
            print("Transformed message for decryption: ",cipher_text)

            plain_text=""
            for i in L:
                k=temp1.index(i)
                temp1[k]=n
                plain_text+=cipher_text[k]
                
            print("The cipher text is: ",plain_text)


        cipher_text=input("Enter the string to be decrypted: ")
        n=int(input("Enter the number of rails: "))
        railfence(cipher_text,n)
        print("\n============================================\n\n")

    elif ch == 0:
        print("\n============================================")
        print("     Thank You for using the Software ;)      ")
        print("                 Exiting Now.                 ")
        print("==============================================")
        exit()