#include<stdio.h>
#include<conio.h>
void main()
{
    int x,i;

    for(x=1;x<11;x++)
    {
        i=1;
        while(i<11)
        {
            printf("%d",x*i);
            printf("\n");
            i++;

        }
        printf("press any key");
        getch();

    }
    }

