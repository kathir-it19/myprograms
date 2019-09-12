#include<stdio.h>
int main()
{
   int num1=0,num2=1,k,n;
   printf("enter the series value");
   scanf("%d",&n);
   printf("%d\n%d",num1,num2);
  for(int i=0;i<n;i++)
  {
   k=num1+num2;
   printf("\n%d",k);
   num1=num2;
  num2=k;
}
return 0;
}
