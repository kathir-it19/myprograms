#include <stdio.h>

int main()
{
    int a[100],i,sum=0,n;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
     }
      printf("%d",sum);
 return 0;   
}
