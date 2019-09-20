#include<stdio.h>
int main()
{
 int a,b,c,d;
printf("Enter 4 number...:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
{
printf("smallest number is %d",a);
}
else if(b<c&&b<d)
{
printf("smallest number is %d",b);
}
else if(c<d)
{
printf("smallest number is %d",c);
}
else
{
printf("smallest number is %d",d);
}
}
