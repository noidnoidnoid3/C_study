#include <stdio.h>
//<>: include path
#include "func.h"
//" ": local path 
//include를 하는데, 내가 만들어서 include path에 있는 것을 불러올 때

int main(){
    int n=0;
    scanf("%d",&n);
    int result=sum_one_to_N(n);
    printf("%d\n",result);
    return 0;
}

