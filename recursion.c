#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    printf("factorial of number:%d",fact(n));
}
    int fact( int n)
    {
        if(n>=1)
        {
            return n * fact(n-1);
        }
        else
        {
            return 1;
        }
    }

