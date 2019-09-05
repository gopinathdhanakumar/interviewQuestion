#include <stdio.h>

int main()
{
   int a,b;
   printf("enter the number1....");
   scanf("%d",&a);
   printf("\nenter the number2....");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\nnumber1 is %d and number2 is %d ",a,b);
}
