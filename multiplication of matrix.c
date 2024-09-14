#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],mul[2][2];
    int i ,j,k,sum=0;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("enter element a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
      for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("enter element b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
mul[i][j]=0;
for(k=0;k<2;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}

