#include<stdio.h>
#include<math.h>
void main()
{
    long s,a1,an;
    int n,n1;
    //3+15+75+225......
    printf("enter number of terms:");
    scanf("%d",&n1);
    s=0;
    for(n=1;n<n1;n++)
    {
        a1=pow(5,n-1);
        an=3*a1;
        s=s+an;
        printf("%d",an);
        printf("+");
        }
        a1=pow(5,n-1);
        an=3*a1;
        s=s+an;
        printf("%d",an);
        printf("=");
        printf("%d",s);
}
