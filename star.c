#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the values:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
