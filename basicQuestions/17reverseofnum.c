#include <stdio.h>

int main()
{
   int a,b=1,c=0,result=0,val;
   printf("enter the number....");
   scanf("%d",&a);
   val=a;
   while(a>0)
   {
       c=a%10;
       result*=10;
       result=result+(c);
       a=a/10;
   }
   printf("the reverse of the number  %d  is   = %d",val,result);
}
