def is_leap(year):
    leap = False

    a1=float(year%4)
    a2=float(year%100)
    a3=float(year%400)
    if(a1%2==0):
        return True
    elif (a2%2==0) and (a3%2==0):
        return True
    
    return leap

year = int(input())