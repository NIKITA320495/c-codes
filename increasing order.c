#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    if ((a>b)&&(a>c))
    {
        if (b>c)

        {
            printf("%d%d%d",c,b,a);
        }
        else
        {
            printf("%d%d%d",b,c,a);
        }
    }
   else if ((b>a)&&(b>c))
    {
        if (a>c)
        {
            printf("%d%d%d",c,a,b);
        }
        else
        {
            printf("%d%d%d",a,c,b);
        }
    }
 else if ((c>a)&&(c>b))
 {
     if(a>b)
     {
         printf("%d%d%d",b,a,c);
     }
     else
     {
         printf("%d%d%d",a,b,c);
     }
 }
}
