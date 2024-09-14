#include<stdio.h>
#include<conio.h>
void main()
{
    int x,i;
    for(i=1;i<11;i++)
    {
        for(x=1;x<11;x++)
        {
            printf("%d",x*i);
            printf("\n");

        }
        printf("-------");
        printf("\n");
        printf("press any key \n");
        getch();
    }
}
