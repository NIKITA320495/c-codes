#include<stdio.h>
void main()
{
    float p ,t,r,si,amt;
    printf("enter principle amount:");
    scanf("%f",&p);
    printf("enter the value of time");
    scanf("%f",&t);
    if (t<2)
    {
       r=9;
       si=(p*t*r)/100;
       amt=p+si;
       printf("simple interest: %f",si);
       printf("amount : %f",amt);
    }
    else if ((t>2 ) && ( t<7))
    {
       r=8.25;
       si=(p*t*r)/100;
       amt=p+si;
       printf("simple interest: %f",si);
       printf("amount : %f",amt);

    }
    else
    {
       r=8;
       si=(p*t*r)/100;
       amt=p+si;
       printf("simple interest: %f",si);
       printf("amount : %f",amt);
    }
}
