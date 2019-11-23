 n=int(input("enter the limit"))
n=n%5
a,b,c,d,e=11,12,13,14,15
for i in range(n):
 a,b,c,d,e=e,a,b,c,d
print(a,b,c,d,e)

