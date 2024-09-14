#include <stdio.h>
void main()
{
    char x;
    printf ("Enter a character");
    scanf("%c",&x);
    if ((x=="a")or (x=="e")or (x=="i") or (x=="o")or (x=="u")or(x=="A") or (x=="E") or (x=="I") or (x=="O") or(x=="U"))
    {
        printf("vowel");
    }
    else{
        printf("consonant");

    }
}
