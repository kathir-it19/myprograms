#include <stdio.h>
int main()
{
    int a[100],i,n,j,sort;
    printf("enter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {                                                 
       if(a[i]>a[j])
       {
          sort=a[i];
          a[i]=a[j];
          a[j]=sort;
       }
       }
    }  
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
   for(i=n-1;i>=0;i--)
    printf("\n%d",a[i]); 
    return 0;
}
