#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter the number1....");
   scanf("%d",&a);
   printf("enter the number2....");
   scanf("%d",&b);
   printf("enter the number3.....");
   scanf("%d",&c);
   if((a>b)&&(a>c))
   {
       printf("%d is greatest of %d,%d,%d",a,a,b,c);
   }
   else
   {
       if(b>c)
          printf("%d is greatest of %d,%d,%d",b,a,b,c);
    else
          printf("%d is greatest of %d,%d,%d",c,a,b,c);
   }
}
