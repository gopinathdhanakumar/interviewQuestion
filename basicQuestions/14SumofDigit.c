#include <stdio.h>

int main()
{
   int a,sum=0,b;
   printf("enter the number....");
   scanf("%d",&a);
   b=a;
   while(a>0)
   {
       sum=sum+a%10;
       a=a/10;
   }
   printf("%d digit sum value = %d",b,sum);
}
