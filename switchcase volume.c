#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    float l,b,h,a,r,volume, pi=3.14;
    int  choice;
    printf("\t\t\t\t\tVOLUME\n");
    printf("\t\t\t\t\t1.CUBOID\n");
    printf("\t\t\t\t\t2.CUBE\n");
    printf("\t\t\t\t\t3.CYLINDER \n");
    printf("\t\t\t\t\t4.EXIT \n");
    printf("enter you choice(1-4):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enter length:");
               scanf("%f",&l);
               printf("enter breadth:");
               scanf("%f",&b);
               printf("enter height:");
               scanf("%f",&h);
               volume=l*b*h;
               printf("volume of cuboid %f",volume);
               break;
        case 2:printf("enter side:");
               scanf("%f",&a);
               volume=a*a*a;
               printf("volume of cube %f" ,volume);
               break;
        case 3:printf("enter radius:");
               scanf("%f",&r);
               printf("enter height:");
               scanf("%f",&h);
               volume=pi*r*r*h;
               printf("volume of cylinder %f",volume);
               break;
        case 4 :printf("press any key to exit");
                exit(0);
                break;
        default : printf("wrong choice");

    }
}
