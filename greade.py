m1=float(input("enter maths mark:"))
m2=float(input("enter physics mark:"))
m3=float(input("enter chemistry mark:"))
m4=float(input("enter python  mark:"))
total=m1+m2+m3+m4
avg=total/4
if(avg>=95 and avg<=100):
  print (' A+ greade',avg)
elif(avg>=90 and avg<=94):
  print("A greade=",avg)
elif(avg>=89 and 80<=avg):
  print("B greade=",avg)
elif(avg>=79 and 70<=avg):
  print("C greade=",avg)
elif(avg>=69 and 60<=avg):
  print("D greade=",avg)
elif(avg>=59 and 50<=avg):
  print("E greade=",avg)
else:
 print("F greade=",avg)
