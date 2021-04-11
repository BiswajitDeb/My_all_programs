#import math
l = []
T = int(input())
for i in range(T):
    X=int(input())
    l.append(X)

#function for factorial
def fact(f):
    m=1
    for i in range(1,f+1):
       m=m*i
    return m




for j in l:
    if j <=20 and j>=1:
        print(fact(j))
        #print(math.factorial(j))      #instead of print(fact(j))
