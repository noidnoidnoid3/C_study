#include <stdio.h>

//DLL(양방향, next와 prev(이전)의 주소를 모두 가짐짐)
struct node{
    int n;
    struct node *next;
    struct node *prev;
};

int main(void){
    struct node a;
    struct node b;

    a.n=10;
    b.n=20;

    a.next=0;
    b.next=0;

    a.prev=0;
    b.prev=0;

    a.next=&b; 
    b.prev=&a;


    printf("a: %d\n",a.next->n);
    printf("b: %d\n",b.prev->n);

}