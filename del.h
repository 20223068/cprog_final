//회원 삭제 함수

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int member_del(struct member *s)
{
    int i;
    char n[10];
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
