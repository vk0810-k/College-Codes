import base32hex
import hashlib
import DES

def main():

    while True:
        ch = int(input('Welcome to DES Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 2 for Decryption \n [*] Press 0 to exit..\n \nYour Choice:: '))

        if ch == 1:
            print("================================================")
            print("             !!!!DES Encryption!!!!             ")
            password = "Password"
            salt = '\x28\xAB\xBC\xCD\xDE\xEF\x00\x33'
            key = password + salt
            m = hashlib.md5(key)
            key = m.digest()
            (dk, iv) =(key[:8], key[8:])
            crypter = DES.new(dk, DES.MODE_CBC, iv)
            plain_text= "Varun Khadayate"
            print()
            print("The plain text is : ",plain_text)
            plain_text += '\x00' * (8 - len(plain_text) % 8)
            ciphertext = crypter.encrypt(plain_text)
            encode_string= base32hex.b32encode(ciphertext)
            print("The encoded string is : ",encode_string)
            print("================================================")

        elif ch == 2:
            print("\n================================================")
            print("               !!!DES Decryption!!!               ")
            password = "Password"
            salt = '\x28\xAB\xBC\xCD\xDE\xEF\x00\x33'
            key = password + salt
            m = hashlib.md5(key)
            key = m.digest()
            (dk, iv) =(key[:8], key[8:])
            crypter = DES.new(dk, DES.MODE_CBC, iv)

            print("Enter the message to be decrypt : %r" % encrypted_string)

            print("The ecrypted string is : ",encrypted_string)
            encrypted_string=base32hex.b32decode(encrypted_string)
            decrypted_string = crypter.decrypt(encrypted_string)
            print("The decrypted string is : ",decrypted_string)
            print("================================================")

        elif ch == 0:
            print("\n============================================")
            print("     Thank You for using the Software ;)      ")
            print("                 Exiting Now.                 ")
            print("==============================================")
            exit()

if __name__ == '__main__':
    main()