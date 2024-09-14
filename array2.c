#include<stdio.h>
void main()
{
    int a[10];
    int i,sum1=0,sum2=0;
    for (i=0;i<10;i++)
    {
        printf("Enter the value for a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;)
    {
        sum1=sum1+a[i];
        i=i+2;
    }
       printf("%d",sum1);
       for (i=1;i<10;)
    {
        sum2=sum2+a[i];
        i=i+2;
    }
    printf("%d",sum2);
    }

