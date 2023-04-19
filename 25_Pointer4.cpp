#include <stdio.h>

void pointer_and_structure();

int main()
{
    pointer_and_structure();

    return 0;
}

void pointer_and_structure()
{
    struct person
    {
        char name[256];
        int age;
        float height;
    };

    struct  person p = { "홍길동", 30, 175.25f };
    p.height = 180.35f;

    printf("p의 height : %f\n", p.height);
    printf("p의 height의 주소 : %0xp\n\n", &p.height);

    {
        struct book
        {
            char name[256];
            float price;
        };

        struct book b1;
    }

    //struct book b2;

    {
        typedef struct
        {
            char given[256];
            char family[256];
        }names;

        typedef struct
        {
            names fullName;
            char mobile[256];
        }friendInfo;

        friendInfo myFriend[2] =
        {
            { {"Jiwon", "Lee"}, "7554-0971"},
            { {"sumin", "Lee"}, "1234-0971" }
        };

        friendInfo* bestFriend;
        bestFriend = &myFriend[0];

        printf("bestFriend[0] 이름\t : %s\n", (*bestFriend).fullName.given);
        printf("bestFriend[0] 성\t : %s\n", bestFriend->fullName.family);

        bestFriend++;
        printf("bestFriend[1] 이름\t : %s\n", (*bestFriend).fullName.given);
        printf("bestFriend[1] 성\t : %s\n", bestFriend->fullName.family);
    }
    {
        typedef struct {
            char name[256];
            char grade[256];
            int damage;
        }weapon;

        typedef struct {
            char name[256];
            int hp;
            weapon* equipWeapon;
        }player;

        player p = {
            "player",
            100,
            NULL
        };

        weapon sword = {
            "Sword",
            "Legend",
            500
        };

        p.equipWeapon = &sword;

        printf("\n\n");

        printf("플레이어 이름\t : %s\n", p.name);
        printf("소지 무기\t : %s\n", p.equipWeapon->name);
        printf("소지 무기의 등급 : %s\n", p.equipWeapon->grade);

        weapon bow = {
            "Bow",
            "Common",
            30
        };

        p.equipWeapon = &bow;

        printf("플레이어 이름\t : %s\n", p.name);
        printf("소지 무기\t : %s\n", p.equipWeapon->name);
        printf("소지 무기의 등급 : %s\n", p.equipWeapon->grade);
    }
}
