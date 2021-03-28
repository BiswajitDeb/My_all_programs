import numpy as np
import time
import sys
s=range(1000)
print(sys.getsizeof(5)*len(s))#sys.getsizeof(5)prints the mem occupied by 
    #a single element of the list. Multiplying  len(s) with it will provide total memory consumed by this list

D=np.arange(1000)
print(D.size*D.itemsize)
