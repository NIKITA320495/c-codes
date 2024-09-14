#include<stdio.h>
#include<conio.h>
void swp(int *, int *);

void main()
{
    int x,y;
    x = 10;
    y = 20;
    printf("x=%d , y=%d",x,y);
    void swp(int *a,int *b)
    {
        int c;
        c=*a;
        *a=*b;
        *b=c;
        printf(" \n S W A P I N G:");
        printf("\n a=%d , b=%d",*a,*b);

    }
swp(&x,&y);
printf("\n Values of a and b outside the function swp\n");
printf("\n a=%d , b=%d",x,y);
}
