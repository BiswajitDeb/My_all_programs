l=[]
print("Enter the number of elements you want to add in the list :")
n=int(input())
for i in range(n):
    j=int(input())
    l.append(j)
l1=sorted(set(l))
print(l1[n-2])
