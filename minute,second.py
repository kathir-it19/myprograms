def mint(a):
 m=a//60
 return m
def sec(a):
  s=a%60
  return s
a=int(input("enter the minute:"))
m=mint(a)
s=sec(a)
print(m,"minute and",s,"seconds")
