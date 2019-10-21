#include <stdio.h>

int main()
{
    int i,n,a[10],x,y;
    printf("enter the limit:");
    scanf("%d",&n);
     printf("enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the place:");
    scanf("%d",&x);
     printf("enter the value:");
    scanf("%d",&y);
    for(i=n-1;i>=x;i--)
    {
        a[i+1]=a[i];
    }
    a[x]=y;
     for(i=0;i<n+1;i++)
    {
        printf("%d\n",a[i]);
        a[i]=a[i+1];
    }
    return 0;
}

