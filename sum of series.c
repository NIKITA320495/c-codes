#include<stdio.h>
void main()
{
    long an,sn,n;
    //3+10+17+....
    sn=0;
    for(n=1;n<10;n++)
    {
        an=7*n-4;
        sn=sn+an;
        printf("%d",an);
        printf("+");
    }
    sn=sn+an;
    an=7*10-4;
    printf("%d",an);
    printf("=");
    printf("%d",sn);
    }
