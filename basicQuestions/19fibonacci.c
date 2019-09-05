#include <stdio.h>
int main()
{
   int a=1,b=1,next,n;
   printf("enter the number of value in fibonacci....");
   scanf("%d",&n);
   printf("%d ",a);
   printf("%d ",b);
   for(int i=0;i<n-2;i++)
   {
       next=a+b;
       printf("%d ",next);
       a=b;
       b=next;
   }
}
