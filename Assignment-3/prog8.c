#include<stdio.h>

int main()
{
    int leap;
    printf("Enter year\n");
    scanf("%d",&leap);

    if (leap%4==0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Non-leap year\n");
    }
    
}