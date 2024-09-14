#include<stdio.h>
void main()
{
    int sum1,sum2,n,i,an1,an2,n1,np,sum;
    //3-7+8-11+13-15.....
    printf("enter the number of terms");
    scanf("%d",&n);
    sum1=0;
    sum2=0;
    //plus series:

    for (n1=1;n1<=n/2;n1++)
    {
        an1=3+(n1-1)*5;
        sum1=sum1+an1;
        printf("%d",an1);
        printf("\n");
    }
    printf("%d",sum1);
    //minus series:
    for(np=1;np<=n/2;np++)
    {
        an2=-7+(np-1)*(-4);
        sum2=sum2+an2;
        printf("\n");
        printf("%d",an2);
        printf("\n");

    }
printf("%d",sum2);
sum=sum1+sum2;
printf("%d",sum);
}
