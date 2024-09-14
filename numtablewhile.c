#include<stdio.h>
void main()
{
    int x,i;
    printf("enter a number:");
    scanf("%d",&x);
    i=1;
    while(i<11)
    {
        printf("%d",x*i);
        i++;
    }
}
