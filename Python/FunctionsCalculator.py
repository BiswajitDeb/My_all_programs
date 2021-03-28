x=int(input())
y=int(input())
z=int(input("Please choose any operator ==>\n 1 for + \n 2 for - \n 3 for X \n 4 for / \n:"))

def sum(x,y):
    s=x+y
    return s

def mult(x,y):
    m=x*y
    return m

def div(x,y):
    d=x/y
    return d
def subs(x,y):
    sub=x-y
    return sub

if(z==1):
    print(sum(x,y))
if(z==2):
    print(subs(x,y))
if(z==3):
    print(mult(x,y))
if(z==4):
    print(div(x,y))
