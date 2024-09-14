#include<stdio.h>
void main()
{
    int n,i,j;
    float a,sum,fact;
    printf("enter the number of terms:");
    scanf("%d",&n);
    sum=1;
    for(i=2;i<=n;i++)
    {
        fact=1;
        for(j=1;j<i;j++)
        {
            fact=fact*j;

        }
        printf("%f",fact);
        printf("\n");
        a=1/fact;
        sum=sum+a;
    }
    printf("%f",sum);
}
