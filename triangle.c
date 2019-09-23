#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter degree of angle1:" );
scanf("%d",&a);
printf("Enter degree of angle2:");
scanf("%d",&b);
printf("Enter degree of angle3:");
scanf("%d",&c);
if (a!=0&&b!=0&&c!=0)
{
if (a+b+c==180)
{
printf("it is a valid triangle");
}}
else
{
printf("it is not a valid triangle");
}

}

