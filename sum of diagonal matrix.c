#include<stdio.h>
void main()
{
int n ,i,j,sum=0;
int a[100][100];
printf("enter the order of matrix");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        printf("enter the element a[%d][%d]",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        if (i==j)
        {
            sum=sum+a[i][j];

        }
}
}
printf("%d",sum);
}

