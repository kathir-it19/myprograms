#include <stdio.h>
int main()
{
    int a[100],i,n,j,sort;
    printf("enter the 10 value:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++)
    {
      for(j=i+1;j<10;j++)
      {                                                 
       if(a[i]>a[j])
       {
          sort=a[i];
          a[i]=a[j];
          a[j]=sort;
       }
       }
    }  
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);
   
    return 0;
}
    
