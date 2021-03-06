n=int(input())

if n%2!=0:
    print("Weird")
    
if n in range(2,7) and n%2==0:
    print("Not Weird")

if n in range(6,21) and n%2==0:
    print("Weird")

if n>20 and n%2==0:
    print("Not Weird")