//이름으로 검색하여 정보 출력하는 함수
#include <stdio.h>
#include <stdlib.h>
#include "main.c"

void member_search(struct member s)
{
    FILE *fp = NULL;
    int i;
    char n;
    printf("이름 입력 : ");
    scanf("%s", n);

    if((fp=fopen("data.txt", "r")) == NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }
    for(i=0;i<SIZE;i++){
        if(strcmp(n, s.name)==0){
            break;
        }
    }
    if(i != SIZE){
        fscanf(fp, "%s %s %s", s.name, s.gender, s.phone);
        printf("이름 = %s, 성별 = %s, 번호 = %s\n", s.name, s.gender, s.phone);
    }

    fclose(fp);
}