def Encryption(plaintext, key_val):
    ciphertext = ''
    for i in plaintext:
        if i.isupper():
            temp = 65 + ((ord(i) - 65 + key) % 26) 
            ciphertext = ciphertext + chr(temp)                              
        elif i.islower():
            temp = 97 + ((ord(i) - 97 + key) % 26)
            ciphertext = ciphertext + chr(temp)
        else:
            ciphertext = ciphertext + i  

    return ciphertext


def Decryption(ciphertext, key_val):
    plaintext = ''
    for i in ciphertext:
        if i.isupper():
            if ((ord(i) - 65 - key) < 0):
                temp = 65 + ((ord(i) - 65 - key + 26) % 26) 
            else:
                temp = 65 + ((ord(i) - 65 - key) % 26) 
            plaintext = plaintext + chr(temp)                              
        elif i.islower():
            if ((ord(i) - 97 - key) < 0):
                temp = 97 + ((ord(i) - 97 - key + 26) % 26) 
            else:
                temp = 97 + ((ord(i) - 97 - key) % 26) 
            plaintext = plaintext + chr(temp)
        else:
            plaintext = plaintext + i  
    return plaintext


while True:
    print('Welcome to Ceaser Cipher Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 0 for Decryption \n [*] Press 01 to exit.. ')
    print('Tip ---> Encryption/Decryption with shift value of your choice ! ')
    choice = input('Insert Here : ')
    if choice.isdigit():
        if choice == '1':
            sen = input('Insert the plaintext : ')
            key = int(input('Insert shift value(Only integer values) : '))
            print(50 * '-')
            print(f'Your ciphertext ---> {Encryption(sen, key)}')
            print(50 * '-')
            con = input('Shall we continue ? [Any Key/no]')
            if con == 'no':
                print('Exiting..')
                break
            else:
                pass
        elif choice == '0':
            csen = input('Insert the ciphertext : ')
            key = int(input('Insert shift value(Only integer values) : '))
            print(50 * '-')
            print(f'Your plaintext ---> {Decryption(csen, key)}')
            print(50 * '-')
            con = input('Do you want to continue ? [Any Key/no]')
            if con == 'no':
                print('Exiting..')
                break
            else:
                pass
        elif choice == '01':
            print('Exiting..')
            print('Thank You for using the system')
            break
        else:
            print('Exception error .. \n'
                  'Please insert 0 or 1 ')