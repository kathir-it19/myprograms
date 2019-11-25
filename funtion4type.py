def add(a,b): # w arg and w rt
   c=a+b
   return c
def sub(a,b): # w arg and w/0 rt
   c=a-b
   print(c)
def mul(): # w/0 arg  and w rt
   c=a*b
   return c
def div():  # w/0 ARG  and w/0 rt
   c=a/b
   print(c)
choice=int(input("enter your choice 1.addition 2.subraction 3.multiplication 4.division"))

a=int(input("enter first value"))
b=int(input("enter second value"))
if(choice==1):
   c=add(a,b)
   print("the addition",c)
elif(choice==2):
   sub(a,b)
elif(choice==3):
   c=mul()
   print(c)
elif(choice==4):
   div()
else:
   print("wrong choice")
