#include <stdio.h>

int main()
{
   int a,b;
   printf("enter the number1....");
   scanf("%d",&a);
   printf("enter the number2....");
   scanf("%d",&b);
   if(a>b)
   {
       printf("%d is greater than %d",a,b);
   }
   else
   {
    printf("%d is greater than %d",b,a);
   }
}
