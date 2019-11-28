def fact(n):
 if(n==1):
     return 1
 else:
     return n*fact(n-1)
a=int(input("enter the value:"))
a=fact(a)
print("result=",a)
