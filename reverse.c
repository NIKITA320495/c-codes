#include<stdio.h>
void main()
{
    int num,num1,quo,rev,rem;
    printf("enter a number:");
    scanf("%d",&num);
    rev=0;
    num1=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        quo=num/10;
        num=quo;
    }
    printf("Entered number is:");
    printf("%d",num1);
    printf("\n");
    printf("Reversed number is:");
    printf("%d",rev);
}
