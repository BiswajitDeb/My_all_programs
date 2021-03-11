a=input()
b=input()
a,b=[int(a),int(b)]
int_div=int(a/b)
int_mod=a%b
int_divmod= divmod(a,b) #if a=9,b=3 then divmod(a,b) will be (3,0)
                        #if a=8,b=3 then divmod(a,b) will be (2,2)

print(int_div,int_mod,int_divmod, sep='\n') #sep='\n' prints outputs in seperate lines 