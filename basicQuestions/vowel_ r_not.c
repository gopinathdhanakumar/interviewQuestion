#include <stdio.h>

int main()
{
   
   char a;
   printf("Enter the character")
   scanf("%c",&a);
   if(a=='a' || a=='e' || a=='i' || a=='o' ||a=='u' || 
       a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
       {
           printf("%c is a vowel",a);
       }
       else
       {
           if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
       {
           printf("%c is a constant",a);
           
       }
       else
       {
           printf("%c is not a alphabet..",a);
       }
}
    
}
