int main()

{
    int i,j,n,num=0;
    printf("enter the valuse:");
    scanf("%d",&n);
    for(i=1;i<=n;i++,num=0)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
           
        } 
        while(num !=2*i-1)
        {
            printf("* ");
            ++num;
        }
        printf("\n");
    }
}
