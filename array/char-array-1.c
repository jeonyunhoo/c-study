#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
    char str[30] = "C language"; //문자 배열 30자 변수 선언
    int i = 0;

    while (str[i] != '\0') { //만족할 때 까지 반복 !=, 다르다. \0은 null값 의미 
                             //문자의 내용이 끝나는 시점에 반드시 null값이 들어감

        i++;
    }

    printf ("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}