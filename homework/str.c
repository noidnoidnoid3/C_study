#include "str.h"

//strcpy: 문자열 복사 / 2에 1를 복사
//문자를 보내야 하므로 포인터 사용
char *my_strcpy(char *b,const char *a){
    int i=0;
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    b[i]='\0';//a의 끝까지 해야하므로
    return b;
}

//strcmp: 문자 하나하나 비교해서서 1<2 면 음수 / 1=2 면 0/ 1>2 면 양수
//결과값만 보내면 되므로 포인터 x
int my_strcmp(const char *a,const char *b){
    while (*a && (*a == *b)) {//a가 null이 아니고, a랑 b가 같으면 진행
        a++;
        b++;
    }
    return *a - *b;
}

//strcat: 1 뒤에 2를 붙임
char *my_strcat(char *a,const char *b){
    int i=0,j=0,k=0;
    while(a[i]!='\0')i++;
    while (b[j] != '\0') {
        a[i + j] = b[j]; // b의 문자 복사
        j++;
    }
    a[i + j] = '\0'; 
    return a;
}

//strlen: 문자열의 길이 반환
int my_strlen(const char *a){
    int i=0;
    while(a[i]!='\0')i++;
    return i;
}

//strchr: 문자열 내에 "문자"가 처음으로 등장하는 위치의 포인터 반환
char *my_strchr(const char *a, int c){
    //왜 char c가 아니라 int c일까
    //문자를 넣어도 자동으로 int로 변환돼서
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != c) {
                continue; //일치 안함
        }
        else{ //문자 발견
            return (char *)&a[i]; // 시작 주소 반환
        }
    }
    return 0; // 찾지 못함
}


//strstr: 1에서 2와 일치하는 "문자열"이 있는지 확인
//일치하는 문자열이 있으면 해당 위치의 포인터 반환
//없으면 null
char *my_strstr(const char *a,const char *b){
    for (int i = 0; a[i] != '\0'; i++) {
        int j;
        for (j = 0; b[j] != '\0'; j++) {
            if (a[i + j] != b[j]) {
                break; //일치 안함
            }
        }
        if (b[j] == '\0') { // b의 모든 문자를 찾았을 경우
            return (char *)&a[i]; // 부분 문자열의 시작 주소 반환
        }
    }
    return 0; // 찾지 못함
}