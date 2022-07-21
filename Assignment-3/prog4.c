#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
     
     if(number/=2)
     {
        printf("The entered number is even\n");
     }
     else 
     {
        printf("The entered number is odd\n");
     }
}