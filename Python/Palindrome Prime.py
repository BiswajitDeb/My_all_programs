from itertools import permutations

l = []
X=int(input())
l.append(X)

perm = permutations(l)

for i in list(perm):
    i=str(i)

    reverse=str(i)[::-1]
    reverse=int(reverse)
    if i == reverse:
        if i>1:
            for j in range (2,i):
                if(i%j)==0:
                    break
                else:
                    print(i)

