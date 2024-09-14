#include<stdio.h>
void main()
{
int a=8,b=10,c;
c=a++ +b + a++;
printf("%d",c);
c= ++a +b+ ++c;
printf("%d",c);
}
