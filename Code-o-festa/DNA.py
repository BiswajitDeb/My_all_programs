#DNA="AAAAACCCCCAAAAACCCCCAHBWdkb"
def sequences(dna):
    dnacheck={}
    for i in range(len(dna)-9):
        if dna[i:i+10] not in dnacheck:
            dnacheck[dna[i:i+10]]=0
        dnacheck[dna[i:i+10]]+=1
    #print(dnacheck)
    print( len([key for key , value in dnacheck.items() if value>1]))

n=int(input())
dnalist=[]
#repeateddna=[]
for i in range(n):
    dnalist.append(input())
for j in range(len(dnalist)):
    sequences(dnalist[j])