//회원 삭제 함수

#include "main.c"

int member_del(struct member *s)
{
    int i;
    char n;
    printf("삭제할 회원 이름 입력 : ");
    scanf("%s", n);

    for(i=0;i<SIZE;i++)
    {
        if(strcmp(n, s[i].name) == 0)
            break;
    }

    if(i != SIZE)
    {
        s[i].name[0] = '\0';
        s[i].gender[0] = '\0';
        s[i].phone[0] = '\0';
        s[i].date[0] = '\0';
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
