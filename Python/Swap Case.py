def swap_case(s):

    k = []
    l = list(s)

    for i in l:
        j = ""
        if i.islower():
            j = i.upper()
        elif i.isupper():
            j = i.lower()
        else:
            k.append(i)
        k.append(j)
    
    final = ''.join(k)
    
    return final

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)