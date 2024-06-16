def gcd(a,b):
    if(b==0):
        return a
    else:
        return(b,a%b)
a=int(input("enter first number:"))
b=int(input("entersecond number:"))
gcd=gcd(a,b)
print("gcd is:",gcd)
    

