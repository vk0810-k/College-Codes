list1 = ['A', 'B', 'C', 'D']

list2 = list1
list3 = list1[:]
list4 = list(list1)

list2[0] = 'Z'
list3[1] = 'Y'
list4[2] = 'X'
print(list1,list2,list3,list4)

