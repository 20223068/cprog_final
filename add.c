//회원 추가 함수
#include <stdio.h>
#include "main.c"

void add()
{
    FILE *fp = NULL;
    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Failed to open file %s\n", "data.txt");
    }

    int name, gender, phone;
    printf("새로운 회원 정보 작성(이름, 성별, 연락처)");
    scanf("%s %s %s", name, gender, phone);

    fprintf(fp, "%s %s %s", name, gender, phone);
    fclose(fp);
}