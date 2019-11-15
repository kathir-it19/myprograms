#include <stdio.h>

int main()
{
    int fizz,buzz,i;
    printf("enter the value:");
    scanf("%d",&i);
    if(i%5==0)
    {
      printf("buzz");
      if(i%3==0)
       {
           printf("\nfizzbuzz");
       }
     }
    else if(i%3==0)
    {
        printf("buzz");
        if(i%5==0)
    {
      printf("buzz");
    }
    }
    else
    {
        printf("%d",i);
    }
    return 0;
}
