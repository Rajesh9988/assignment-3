#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if (num/5)
    {
        printf("This number is divided by five\n");
    }
    else
    {
        printf("This nnumber can't divided by five");
    }
    return 0;
}