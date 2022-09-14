import pyaes, pbkdf2, binascii, os, secrets

password = "s3cr3t*c0d3"
passwordSalt = os.urandom(16)
key = pbkdf2.PBKDF2(password, passwordSalt).read(32)
print('AES encryption key:', binascii.hexlify(key))

# Encrypt the plaintext with the given key:
#   ciphertext = AES-256-CTR-Encrypt(plaintext, key, iv)


# Decrypt the ciphertext with the given key:
#   plaintext = AES-256-CTR-Decrypt(ciphertext, key, iv)


while True:
    ch = int(input('Welcome to AES Encryption and Decryption Program Made by Varun Khadayate..\n [*] Press 1 for Encryption \n [*] Press 2 for Decryption \n [*] Press 0 to exit..\n \nYour Choice:: '))

    if ch == 1:
        print("\n============================================")
        print("              !!!!Encryption!!!!              ")
        iv = secrets.randbits(256)
        plaintext = input("Enter the Text to be Encrypted :")
        aes = pyaes.AESModeOfOperationCTR(key, pyaes.Counter(iv))
        ciphertext = aes.encrypt(plaintext)
        print('Encrypted Text : ', binascii.hexlify(ciphertext))
        print("\n============================================\n\n")

    elif ch == 2:
        print("\n============================================")
        print("               !!!Decryption!!!               ")
        aes = pyaes.AESModeOfOperationCTR(key, pyaes.Counter(iv))
        print("Enter the Cipher Text : ",ciphertext)
        decrypted = aes.decrypt(ciphertext)
        print('Decrypted Text : ', decrypted)
        print("\n============================================\n\n")

    elif ch == 0:
        print("\n============================================")
        print("     Thank You for using the Software ;)      ")
        print("                 Exiting Now.                 ")
        print("==============================================")
        exit()