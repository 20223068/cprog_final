//회원 추가 함수

#include "main.c"

int member_add(struct member s)
{
    FILE *fp = NULL;
    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Failed to open file %s\n", "data.txt");
        return -1;
    }

    printf("새로운 회원 정보 작성(이름, 성별, 연락처)");
    scanf("%s %s %s %s", s.name, s.gender, s.phone, s.date);

    fprintf(fp, "%s %s %s %s", s.name, s.gender, s.phone, s.date);
    fclose(fp);
    return 0;
}
