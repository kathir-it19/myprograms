 #include <stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
   int main()
{ 
    int a=10,b=15;
    printf("a=%d",a);
    printf("\tb=%d",b);
    swap(&a,&b);
    printf("\na=%d",a);
    printf("\tb=%d",b);
    return 0;
}
