#include<stdio.h>
struct node{
int data;
struct node* prev_link;
struct node* next_link;
};
int main()
{
    struct node obj1;
    obj1.prev_link=NULL;
    obj1.next_link=NULL;
    obj1.data=10;
    struct node obj2;
    obj2.prev_link=NULL;
    obj2.next_link=NULL;
    obj2.data=20;
    struct node obj3;
    obj3.prev_link=NULL;
    obj3.next_link=NULL;
    obj3.data=30;
    obj1.prev_link=&obj3;
    obj1.next_link=&obj2;
    obj2.prev_link=&obj1;
    obj2.next_link=&obj3;
    obj3.prev_link=&obj2;
    obj3.next_link=&obj1;
    printf("%d\t", obj1.data);
    printf("%d\t", obj1.next_link->data);
    printf("%d\n", obj1.next_link->next_link->data);
    printf("%d\t", obj2.prev_link->data);
    printf("%d\t", obj2.data);
    printf("%d\n", obj2.next_link->data);
}
