//회원 추가 함수
#include <stdio.h>
#include <stdlib.h>
#include "main.c"

int member_add()
{
    FILE *fp = NULL;
    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Failed to open file %s\n", "data.txt");
        return -1;
    }

    int name, gender, phone;
    printf("새로운 회원 정보 작성(이름, 성별, 연락처)");
    scanf("%s %s %s", name, gender, phone);

    fprintf(fp, "%s %s %s", name, gender, phone);
    fclose(fp);
    return 0;
}

struct student
{
    int number;
    char name[20];
    double gpa;
};

int main(void)
{
    struct student table[SIZE] = {
        {1, "Kim", 3.99}, 
        {2, "Min", 2.68}, 
        {3, "Lee", 4.01}
    };
    struct student s;
    FILE *fp = NULL;
    int i;

    if((fp=fopen("student.txt", "w")) == NULL)
    {
        fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }

    for(int i = 0; i <SIZE; i++)
    {
        fprintf(fp, "%d %s %lf\n", table[i].number, table[i].name, table[i].gpa);
    }

    fclose(fp);

    if((fp=fopen("data.txt", "r")) == NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }
    for(i=0;i<SIZE;i++)
    {
        fscanf(fp, "%s %s %s", s.name, s.gender, s.phone);
        printf("이름 = %s, 성별 = %s, 번호 = %s\n", s.name, s.gender, s.phone);
    }
    fclose(fp);
    return 0;
}