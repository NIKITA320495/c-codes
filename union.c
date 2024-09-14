#include<stdio.h>
#include<string.h>
union student{
int rno;
char name[50];
};
struct student1{
int rno;
char name[50];
};
void main()
{
    union student s;
    struct student1 std;
    char n2[50]="vrinda";
    std.rno=12;
    strcpy(std.name,n2);
    printf("%s",std.name);
    printf("\n%d",std.rno);
    printf("\nsize of structure:%lu",sizeof(std));

    s.rno=12;
     char n[50]="nikita";
     strcpy(s.name,n);
    printf("\n%s",s.name);
    printf("\n%d",s.rno);
    printf("\nsize of union:%lu",sizeof(s));

}
