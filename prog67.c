 #include <stdio.h>
int main()
{
    int i,j;
    printf("enter the two values:");
    scanf("%d%d",&i,&j);
     if(i<j)
     {
         printf("the minimum value is=%d",i);
    }
     else
     {
         printf("the minimum value is=%d",j);
     }
    return 0;
}
