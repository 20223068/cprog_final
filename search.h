//이름으로 검색하여 정보 출력하는 함수

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int member_search(struct member s)
{
    FILE *fp = NULL;
    fp=fopen("data.txt", "r");
    int i;
    char n[10];
    printf("이름 입력 : ");
    scanf("%s", n);

    if(fp == NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }
    
    for(i=0;i<SIZE;i++)
    {
        fscanf(fp, "%s %s %s %s", s.name, s.gender, s.phone, s.date);
    }
    

    for(i=0;i<SIZE;i++){
        if(strcmp(n, s.name)==0)
        {
            break;
        }
    }
    fclose(fp);

    if(i != SIZE)
        return 1;
    else
        return 0;

}

int member_search_print(struct member s, int(*func)(struct member))
{
    FILE *fp = NULL;
    fp=fopen("data.txt", "r");

    if(func(s)){
        fscanf(fp, "%s %s %s %s", s.name, s.gender, s.phone, s.date);
        printf("이름 = %s, 성별 = %s, 번호 = %s, 등록일자= %s\n", s.name, s.gender, s.phone, s.date);
    }
    else{
        printf("회원 정보가 없습니다\n");
        return -1;
    }

    fclose(fp);
    return 0;
}
