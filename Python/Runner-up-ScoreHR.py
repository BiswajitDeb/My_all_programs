n = int(input()) 
  
# Below line read inputs from user using map() function  
l = list(map(int,input().split()))
s=set(l)
k=list(s)
k=sorted(k)
k=k[::-1]
del k[0]
print(k[0])