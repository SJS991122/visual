#include <stdio.h>
#include <stdbool.h>

void Union();
void union_and_structure();
void union_and_structure2();
void endianness();

int main()
{
    //Union();
    //union_and_structure();
    //union_and_structure2();
    endianness();

    return 0;
}

void Union()
{
    struct myStruct
    {
        char c;
        int i;
        double d;
    };

    union myUnion
    {
        char c;
        int i;
        double d;
    };

    struct myStruct st;
    union myUnion uni;

    printf("구조체 공간의 사이즈\t : %d\n", sizeof(st));
    printf("구조체 멤버의 c 사이즈\t : %d\n", sizeof(st.c));
    printf("구조체 멤버의 i 사이즈\t : %d\n", sizeof(st.i));
    printf("구조체 멤버의 d 사이즈\t : %d\n\n", sizeof(st.d));

    printf("유니온 공간의 사이즈\t : %d\n", sizeof(uni));
    printf("유니온 멤버의 c 사이즈\t : %d\n", sizeof(uni.c));
    printf("유니온 멤버의 i 사이즈\t : %d\n", sizeof(uni.i));
    printf("유니온 멤버의 d 사이즈\t : %d\n\n", sizeof(uni.d));

    printf("0x%p\n", &st);
    printf("0x%p\n", &st.c);
    printf("0x%p\n", &st.i);
    printf("0x%p\n\n", &st.d);

    printf("0x%p\n", &uni);
    printf("0x%p\n", &uni.c);
    printf("0x%p\n", &uni.i);
    printf("0x%p\n\n", &uni.d);

    uni.i = 20;
    printf("%d\n\n", uni.i);

    uni.d = 7.15;
    printf("%d\n", uni.c);
    printf("%d\n", uni.i);
    printf("%g\n\n", uni.d);
}

void union_and_structure()
{
    {
        struct ptr
        {
            union
            {
                int* ip;
                float* fp;
            };
            bool isInt;
        };

        struct ptr ptr;

        int i = 100;
        float f = 200.0f;

        ptr.ip = &i;
        ptr.isInt = true;

        if (ptr.isInt == true)
        {
            printf("ptr : %d\n", *ptr.ip);
        }
        else
        {
            printf("ptr : %f\n", *ptr.fp);
        }

        ptr.fp = &f;
        ptr.isInt = false;

        if (ptr.isInt == true)
        {
            printf("ptr : %d\n", *ptr.ip);
        }
        else
        {
            printf("ptr : %f\n", *ptr.fp);
        }
    }

    {
        struct Location
        {
            union
            {
                struct { double x; double y; };
                struct { double arr[2]; };
            };
        };

        struct Location loc = { 1.1, 1.2 };

        printf("%lf, %lf\n", loc.x, loc.y);
        printf("%lf, %lf\n", loc.arr[0], loc.arr[1]);
    }
}

#define PERSONAL 0
#define COMPANY 1

typedef struct
{
    char rrn1[7];
    char rrn2[8];
}personalOwner;

typedef struct
{
    char crn1[4];
    char crn2[2];
    char crn3[6];
}companyOwner;

typedef struct
{
    char model[15];
    int status;

    union
    {
        personalOwner po;
        companyOwner co;
    };
}carData;

void printCar(carData data)
{
    if (data.status == PERSONAL)
    {
        printf("%s - %s\n",
            data.po.rrn1,
            data.po.rrn2);
    }
    else if (data.status == COMPANY)
    {
        printf("%s - %s - %s\n",
            data.co.crn1,
            data.co.crn2, 
            data.co.crn3
            );
    }
}

void union_and_structure2()
{
    carData myCar = {
        "Avante",
        PERSONAL,
        .po.rrn1 = "111111",
        .po.rrn2 = "1111111",
    };

    carData companyCar = {
    "Avante",
    PERSONAL,
    .co.crn1 = "111",
    .co.crn2 = "22",
    .co.crn3 = "33333"
    };

    printCar(myCar); 
    printCar(companyCar);
}

void endianness()
{
    union myUnion
    {
        int i;
        char c;
    };

    union myUnion uni;

    uni.i = 0x12345678;

    printf("i : %x\n", uni.i);
    printf("c : %x\n", uni.c);

    /*
        Little Endian vs Big Endian
    */
}
