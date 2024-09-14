#include<stdio.h>
void main()
{
    int a[5];
    int i,n,flag,i1;
    for (i=0;i<5;i++)
    {
        printf("Enter the value for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("enter an element:");
    scanf("%d",&n);
    for (i=0;i<5;i++)
    {
        if (n==a[i])
        {
            flag=1;
            i1=i;
        }
    }
    if (flag==1)
    {
        printf("yes given element is found at a[%d]",i1);

    }
    else{


    printf("not found");
    }
}
