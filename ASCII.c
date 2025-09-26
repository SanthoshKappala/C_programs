#include<stdio.h>
int main() { 
    char ch;
     printf("enter a character");
     scanf("%c",&ch);
     if((ch>=48)&&(ch<=57))
     {
         printf("it is a digit");
     }
     else if((ch>=65)&&(ch<=90))
     {
         printf("it is a upper case alphabet");
     }
     else if((ch>=97)&&(ch<=122))
     {
         printf("it is a lower case alphabet");
     }
     else
     {
         printf("it is a special character");
     }
     return 0;    
}
