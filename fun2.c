#include<stdio.h>
#include<conio.h>
float area();
void main()
{
float ans;
float area()
{
float l,b,ar;
printf("Enter the length");
scanf("%f",&l);
printf("enter the breadth:");
scanf("%f",&b);
ar = l*b;
return ar;

}

ans=area();
printf("%f",ans);

}
