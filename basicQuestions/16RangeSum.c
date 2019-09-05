#include <stdio.h>
int sumRange(int start,int end)
{
    if(start==end)
     return end;
    else
     return start +sumRange(start+1,end);
}

int main()
{
   int a,b;
   printf("enter the start value....");
   scanf("%d",&a);
   printf("enter the end value....");
   scanf("%d",&b);
   printf("sum of %d  to %d range value is  = %d",a,b,sumRange(a,b));
}
