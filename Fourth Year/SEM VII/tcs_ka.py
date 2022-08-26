ch = input("Enter the String")
# for i in range(0,len(ch)):
#     count = 1;
#     for j in range (i+1,len(ch)):
#         if(ch[i] == ch[j] and ch[i]!=''):
#             count = count + 1
#             print(count)
dup = []
for char in ch:
    if ch.count(char) > 1:
        if char not in dup:
            dup.append(char)
print(*dup)