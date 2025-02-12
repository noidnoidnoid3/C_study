#include <stdio.h>

//sll(link가 하나만 되어서/앞에 애가 그 다음 애의 주소를 가지고 또 그 다음 애의 주소를 가짐-> 단반향 구조/ 주소가 NULL 값이 있으면 끝으로 간주)
struct node{
    //정수가 들어가는 링크드리스트
    int n;
    //다음 친구의 주소를 가지고 있어야 하므로
    struct node *next;
};

int main(void){
    struct node a;
    struct node b;

    a.n=10;
    b.n=20;

    a.next=0;
    b.next=0;

    a.next=&b; //a의 next에 b의 주소를 할당

    printf("%d\n",a.next->n);//주소로 들어가서 그 주소에 있는 n에 접근하기 떄문에 ->

}