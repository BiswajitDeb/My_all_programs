n=int(input())
sinfo=[]
marks=[]
for i in range(n):
    name=str(input())
    score=float(input())
    sinfo.append([name,score])
    marks.append(score)
secondlowest=sorted(set(marks))[1]     #[1] = the 2nd element of the sorted set ie the 2nd lowest number
sinfo.sort()

for i,j in sinfo:
    if j==secondlowest:
        print(i)

