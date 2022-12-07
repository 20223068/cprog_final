#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

struct member
{
    char name[10];     //회원이름
	char gender[6];    //회원성별
	char phone[20];    //회원연락처
    char date[10];     //회원등록일자
};

extern int member_search(struct member s);
extern void member_search_print(struct member s, int(*func)(struct member));
extern int member_add(struct member s);
extern int member_change(struct member *s);
extern int member_del(struct member s);

int main()
{
    struct member s[SIZE];
    int choose;
    printf("메뉴\n1. 회원 검색\n2. 회원 추가\n3. 회원 정보 변경\n4. 회원 삭제\n5. 종료\n");
    printf("메뉴 선택 : ");
    scanf("%d", &choose);

    while (1)
    {
        switch (choose)
        {
            case 1:
                member_search_print(*s, member_search);
                break;
            case 2:
                member_add(*s);
                break;
            case 3:
                member_change(&s);
                break;
            case 4:
                member_del(*s);
                break;
            case 5:
                return -1;
        }
    }

    return 0;
}
