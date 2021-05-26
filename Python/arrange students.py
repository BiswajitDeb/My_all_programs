def maxRepeating(str):
  
    l = len(str)
    count = 0
  
    res = str[0]
    for i in range(l):
          
        cur_count = 1
        for j in range(i + 1, l):
      
            if (str[i] != str[j]):
                break
            cur_count += 1
  
        # Update result if required
        if cur_count > count :
            count = cur_count
            res = str[i]
    return res
  
lst = []
  
# number of elemetns as input
N = int(input())
  
# iterating till the range
for i in range(0, N):
    ele = int(input())
  
    lst.append(ele) # adding the element
ltos=' '.join([str(elem) for elem in lst])
      
print(maxRepeating(ltos))