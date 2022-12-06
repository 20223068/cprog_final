#include <stdio.h>

typedef struct STRUCT
{
    char name[10];     //회원이름
	char gender[6];    //회원성별
	char phone[20];    //회원연락처
}member;

void search(member *arr);

int main()
{
    int choose;
    printf("메뉴\n1. 회원 정보 검색\n2. 회원 추가\n3. 회원 정보 변경\n4. 회원 삭제\n5. 종료\n");
    printf("메뉴 선택 : ");
    scanf("%d", &choose);

    while (1)
    {
        switch (choose)
        {
            case 1:
                search();
                break;
            case 2:
                add();
                break;
            case 3:
                change();
                break;
            case 4:
                del();
                break;
            case 5:
                return -1;
        }
    }

    return 0;
}