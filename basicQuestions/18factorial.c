#include <stdio.h>
int Fact(int s)
{
    if(s==1)
     return 1;
    else
     return s *Fact(s-1);
}

int main()
{
   int a,b;
   printf("enter the factorial value....");
   scanf("%d",&a);
   printf("factorial value of %d  is %d ",a,Fact(a));
}
