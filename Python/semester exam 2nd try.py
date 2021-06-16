def Enqueue(book):
    bna=int(input("enter number"))
    bname=input("enter value")
    l=[]
    book.append(l)
    if len(book)==1:
        front=rear=0
    else:
        rear=len(book)-1

def Dequeue(book):
    if len(book)==0:
        print("empty")
        front=rear=None
        print(front,rear)
    else:
        x=book.pop(0)
        print("deleted element is :",x)
    if
def Enqueue()