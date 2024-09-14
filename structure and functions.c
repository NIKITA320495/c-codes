#include<stdio.h>
struct student{
int rno;
char name[50];
};
struct student input(int r,char n[50]){
struct student std;
std.rno=r;
strcpy(std.name,n);
return std;
};
void output(struct student s){
    printf("rollnumber:%d",s.rno);
    printf("\nname:%s",s.name);
};
void main()
{
    struct student std2;
    int rn;
    char na[50];
    printf("enter the roll number:");
    scanf("%d",&rn);
    printf("enter name:");
    scanf("%s",&na);
    std2=input(rn,na);
    output(std2);

}
