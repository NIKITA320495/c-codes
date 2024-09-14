#include<stdio.h>
#include<conio.h>
float area(float,float);
void main()
{
float ans;
float x,y;
printf("Enter the length of rectangle:");
scanf("%f",&x);
printf("Enter the length of rectangle:");
scanf("%f",&y);
float area(float l,float b)
{
float ar;
ar = l*b;
return ar;

}

ans=area(x,y);
printf("%f",ans);

}
