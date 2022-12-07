//회원 정보 수정

#include "main.c"

int member_change(struct member *s)
{
    int i;
    char n;
    printf("정보를 수정할 환자 이름 입력 : ");
    scanf("%s", n);

    for (i=0;i<SIZE;i++)
    {
        if(strcmp(n, s[i].name) == 0)
            break;
    }

    if(i != SIZE)
    {
        printf("변경할 환자 정보 입력(이름, 성별, 번호, 등록 날짜) : ");
        scanf("%s %s %s %s", s[i].name, s[i].gender, s[i].phone, s[i].date);
    }

    FILE *fp = NULL;
    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Failed to open file %s\n", "data.txt");
        return -1;
    }

    fprintf(fp, "%s %s %s %s", s[i].name, s[i].gender, s[i].phone, s[i].date);
    fclose(fp);
    
    return 0;
}
