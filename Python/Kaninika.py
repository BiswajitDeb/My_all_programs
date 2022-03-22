
def min_changes(a, n):
	ans_a = 0
	ans_b = 0

	for i in range(n):
		if (i % 2 == 0):
			if (a[i] == 0):
				ans_a += 1
			else:
				ans_b += 1

		else:
			if (a[i] == 0):
				ans_b += 1
			else:
				ans_a += 1

	return min(ans_a, ans_b)

if __name__ == '__main__':
   
   test_case=int(input()) #number of test cases
   for k in range (0,test_case):
      a=[]
      n=int(input()) #list size
      for i in range(0,n):
         a.append(int(input()))
      print(min_changes(a,n))

