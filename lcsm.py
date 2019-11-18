a=int(input("enter a number:"))
b=int(input("enter a number:"))
if(a>b):
   greater=a
else:
   greater=b
   
while(True):
   if(greater%a==0 and greater%b==0):
       LCM=greater
       break
   greater+=1
print(LCM)
