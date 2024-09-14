#include<stdio.h>
void main()
{
    int a[5];
    int i,sum;
    sum=0;
    for (i=0;i<5;i++)
    {
        printf("enter the value of a[%d]",i);
        scanf("%d",&a[i]);

    }
    for (i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
