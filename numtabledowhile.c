#include<stdio.h>
void main()
{
    int x , i;
    printf("Enter a number:");
    scanf("%d",&x);
    i=1;
    do
    {
        printf("%d",x*i);
        i++;
    }
    while(i<11);
}
