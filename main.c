#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

#include "struct.h"
#include "add.h"
#include "del.h"
#include "change.h"
#include "search.h"

int main()
{
    struct member s[SIZE];
    int choose;

    while (1)
    {
        printf("#메뉴\n1. 회원 검색\n2. 회원 추가\n3. 회원 정보 변경\n4. 회원 삭제\n5. 종료\n");
        printf("메뉴 선택 : ");
        scanf("%d", &choose);

        switch (choose)
        {
            case 1:
                member_search_print(*s, member_search);
                break;
            case 2:
                member_add(*s);
                break;
            case 3:
                member_change(s);
                break;
            case 4:
                member_del(s);
                break;
            case 5:
                return -1;
        }
    }

    return 0;
}
