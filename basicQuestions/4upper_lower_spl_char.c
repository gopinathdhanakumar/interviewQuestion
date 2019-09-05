#include <stdio.h>

int main()
{
   int upper = 0, lower = 0, number = 0, special = 0,k; 
   char str[20];
   printf("Enter the String  ..=");
   scanf("%[^\n]c",str);
   for( k=0;str[k]!='\0';k++);//finding length
   for (int i = 0; i<k; i++) 
    { 
        if (str[i] >= 'A' && str[i] <= 'Z') 
            upper++; 
        else if (str[i] >= 'a' && str[i] <= 'z') 
            lower++; 
        else if (str[i]>= '0' && str[i]<= '9') 
            number++; 
        else
            special++; 
    } 
   printf("upper character = %d",upper);
   printf("lower character = %d",lower);
   printf("number character = %d",number);
   printf("special character = %d",special);
}
