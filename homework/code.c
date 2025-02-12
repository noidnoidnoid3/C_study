#include <stdio.h>
#include "str.h"

int main(void){
    char a[100]="apple";
    char b[100]="watermelon";

    char a_2[100]="apple";
    char b_2[100]="applewatch";

    char c[]="hi my name is minseo";
    char d[]="minseo";

    
    my_strcpy(b,a);
    int e= my_strcmp(a_2,b_2);
    my_strcat(a_2,b_2);
    int f=my_strlen(b_2);
    char *p_1=my_strchr(c,'m');
    char *p_2=my_strstr(c,d);

    printf("strcpy의 결과: %s\n",b); // apple
    printf("strcmp의 결과: %d\n",e); //-119 (w가 119)
    printf("strcat의 결과: %s\n",a_2); //appleapplewatch
    printf("strlen의 결과: %d\n",f); //10

    if (p_1) printf("strchr의 결과: %ld\n", p_1 - c); //3
    else printf("strchr: X\n");

    if (p_2) printf("strstr의 결과: %ld\n", p_2 - c); //14
    else printf("strstr: X\n");

}