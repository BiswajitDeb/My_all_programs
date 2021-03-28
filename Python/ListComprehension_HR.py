x=int(input())
y=int(input())
z=int(input())
n=int(input())
l=[]
l2=[]

for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            if (i+j+k!=n):
               l2=[i,j,k]
               l.append(l2)

print(l)


#from itertools import permutations
#l=list(permutations(l))

#print(l)
