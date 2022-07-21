#include<stdio.h>

int main()
{
        int a,c,b, d;
        printf("Enter A ,B and C :-\n");
        scanf("%d %d %d",&a,&b,&c);
         d = b*b - 4*a*c;
        if(d>0)
        {
            printf("real & distinct\n");
        }
        else if (d=0)
        {
            printf("real & equal\n");
        }
        else if (d<0)
        {
            printf("imaginary roots\n");
        }
        else
        {
            printf("invalid");
        }
        
        
        

}