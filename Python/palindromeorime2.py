from itertools import permutations
n = "23799"
res = []
# n=list(n)
# res.append(n)/
for value in n:
    res.append(value)
perm = permutations(res)
print(perm)
for i in list(perm):
    t = ""
    for j in i:
        t += j 
    

    reverse=str(t)[::-1]
    reverse=int(reverse)
    # print(t,reverse)
    if t == reverse:
        
        if t>1:
            for j in range (2,t):
                if(t%j)==0:
                    break
                else:
                    print(t)