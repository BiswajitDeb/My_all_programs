l=[]
l2=[]
n=int(input("Enter the numer of element you want to store in the queue :"))
print("Enter the numbers for the queue :")
for i in range(n):
    j=int(input())
    l.append(j)
def insert():
	print("enter the number")
	t=int(input())
	l.insert(0,t)
def delete():
	l.pop()
    
    #del(l[0])
def display():
		print(l)

def main():
    while (2):
        print("Enter -1 to exit")
        print("Enter 1 to insert")
        print("Enter 2 to delete")
        print("Enter 3 to display")
        x = int(input())
        if x==-1:
            return
        if x==1:
            insert()
        if x==2:
        	delete()
        if x==3:
        	display()
		
main()