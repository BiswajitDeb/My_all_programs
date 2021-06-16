for i in range(int(input())):
     p, q = map(int,input().split())    #to take value seperated by space
     r = pow(2,p,1000000007)-1
     print(pow(r,q,1000000007))
     #p=int(input()) won't work if we want to take values seperate by space
     #q=int(input())