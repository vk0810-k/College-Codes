def encypt_func(txt, s):  
    result = ""  
    for i in range(len(txt)):  
        char = txt[i]  
        if (char.isupper()):  
            print(char)
            result += chr((char + s - 64) % 26 + 65)  
        else:  
            print(char)
            result += chr((char + s - 96) % 26 + 97)  
    return result  
txt = input("Plain txt : ")  
s = input("Shift pattern : ")  
print("Cipher: " ,encypt_func(txt, s))  