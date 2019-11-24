#include <stdio.h>
int main()
{ 
    int a;
  printf("enter your mark");
 scanf("%d",&a);
if(a>95)
   printf("o greade");
else if(a>90&&a<=95)
   printf("A grade") ;
else if(a>80&&a<=90)
   printf("B grade") ;
else if(a>70&&a<=80)
   printf("C grade") ;
else if(a>60&&a<=70)
   printf("D grade") ;
else if(a>50&&a<=60)
   printf("E grade") ;
else
   printf("F grade") ;
    printf("Hello World");
    return 0;
}
