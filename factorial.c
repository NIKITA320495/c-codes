#include<stdio.h>
void main()
{

    int x,i,fact;
    printf("Enter a number to print its factorial:");
    scanf("%d",&x);
    fact=1;
    for (i=x;i>1;i--)
    {
        fact=fact*i;

    }
printf("%d",fact);
        printf("\n");
}


