num=0
a=int(input("enter the value:"))
while(a!=0):
 num=num+int(a%10)
 a=int(a/10)
print("sum of digits:",num)
