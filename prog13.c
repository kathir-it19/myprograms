#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the multiplication table.no:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
       j=i*n;
       printf("%d*%d=%d\n",i,n,j);
    }
   }
