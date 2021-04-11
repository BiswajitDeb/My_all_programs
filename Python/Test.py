n = input()
n=int(n)
t = []
fact = []
temp = 1
for i in range(n):
  x = int(input())
  t.append(x)
for j in range(max(t)):
  temp = temp * (j+1)
  fact.append(temp)
for k in range(n):
  print(fact[t[k]-1])