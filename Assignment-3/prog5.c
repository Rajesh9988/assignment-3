#include<stdio.h>
#include<conio.h>

int main()
    {
        int num;
        printf("Enter a number\n");
        scanf("%d",&num);

        if(num<=99)
            {
                printf("The number is two digits\n");
            }
        else if(num<=1000)
            {
                printf("The number is three digits\n");
            } 
    }