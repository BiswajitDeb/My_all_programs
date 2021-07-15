L = []
n = int(input())

for i in range(n):
    char = input().split()

    if (char[0] == 'insert'):           #checks if the 1st char is == then type casts the char[1] and char[2] after the char[0] part
        L.insert(int(char[1]), int(char[2]))
    elif (char[0] == 'print'):
        print(L)
    elif (char[0] == 'remove'):
        L.remove(int(char[1]))
    elif (char[0] == 'append'):
        L.append(int(char[1]))
    elif( char[0] == 'sort'):
        L.sort()
    elif (char[0] == 'pop'):
        L.pop()
    elif (char[0] == 'reverse'):
        L.reverse()

# Sample Input 0

# 12
# insert 0 5
# insert 1 10
# insert 0 6
# print
# remove 6
# append 9
# append 1
# sort
# print
# pop
# reverse
# print
# Sample Output 0

# [6, 5, 10]
# [1, 5, 9, 10]
# [9, 5, 1]