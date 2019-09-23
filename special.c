#include<stdio.h>
void main()
{
char num;
printf("enter a character:");
scanf("\n%c",&num);
if(num>='a'&&num<='z'||num>='A'&&num<='Z')
{
printf("%c is a string",num);
}
else if(num>='0'&&num<='9')
{
    printf("%c is a digit",num);
}
else
{
    printf("%c is a special character",num);
}
}



