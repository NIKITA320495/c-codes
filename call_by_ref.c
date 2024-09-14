#include<stdio.h>
#include<conio.h>
void swp(int, int);
void main()
{
    int a,b;
    a = 10;
    b = 20;
    printf("a=%d , b=%d",a,b);
    void swp(int a,int b)
    {
        int c;
        c=a;
        a=b;
        b=c;
        printf(" \n S W A P I N G:");
        printf("\n a=%d , b=%d",a,b);

    }
swp(a,b);
printf("\n Values of a and b outside the function swp");
printf("\n a=%d , b=%d",a,b);
}
