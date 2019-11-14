#include <stdio.h>
        int main()
{ 
    int a,b,max;
    scanf("%d%d",&a,&b);
    max=find_max(a,b);
    printf("%d is the maximum value",max);
    return 0;
}
int find_max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
