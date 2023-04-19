#include <stdio.h>

void pointer_arr();
void pointer_operation();
void string_pointer();
void pointer_arr_and_2d_arr();
void pointer_and_const_arr();
void void_pointer();

int main()
{
    //pointer_arr();
    //pointer_operation();
    //string_pointer();
    //pointer_arr_and_2d_arr();
    //pointer_and_const_arr();
    void_pointer();

    return 0;
}

void pointer_arr()
{
    int arr[3] = { 0, 1, 2 };

    printf("배열의 이름 :  %p\n", arr);
    printf("첫 번째 요소 : %p\n", &arr[0]);
    printf("두 번째 요소 : %p\n", &arr[1]);
    printf("세 번째 요소 : %p\n", &arr[2]);

    //arr = &arr[1];
    
    /*
                                       포인터 변수      vs         배열의 이름
       이름 존재?                         존재                         존재
       무엇을 나타내거나 저장하는가?    메모리의 주소 값            메모리의 주소 값 
       주소 값의 변경이 가능한가?          가능                        불가능
    */

    printf("\n");

    int arr1[3] = { 1, 2, 3 };
    double arr2[3] = { 1.1, 2.2, 3.3 };

    printf("%d %g\n", *arr1, *arr2);

    *arr1 += 100;
    *arr2 += 120.4;

    printf("%d %g\n", arr1[0], arr2[0]);

    printf("\n");

    int* ptr = &arr1[0]; //int* ptr = arr;
        
    printf("%d %d\n", ptr[0], arr1[0]);
    printf("%d %d\n", ptr[1], arr1[1]);
    printf("%d %d\n", ptr[2], arr1[2]);
    printf("%d %d\n", *ptr, *arr1);

}

void pointer_operation()
{
    int* ptr2 = 0x0010;
    double* ptr3 = 0x0010;

    printf("%p %p\n", ptr2 + 1, ptr2 + 2);
    printf("%p %p\n", ptr3 + 1, ptr3 + 2);

    printf("\n");

    //n * sizeof(type)
    printf("%p %p\n", ptr2, ptr3);
    ptr2++;
    ptr3++;
    printf("%p %p\n", ptr2, ptr3);

    /*
        arr[i] == *(arr + i)
    */

    int arr4[3] = { 11, 22, 33 };
    int* ptr4 = arr4;
    printf("%d %d %d\n", *ptr4, *(ptr4 + 1), *(ptr4 + 2));

    printf("%d\n", *ptr4); ptr4++; //11
    printf("%d\n", *ptr4); ptr4++; //22
    printf("%d\n", *ptr4); ptr4--; //33
    printf("%d\n", *ptr4); ptr4--; //22
    printf("%d\n", *ptr4); //11
}

void string_pointer()
{
    char str[] = "string";
    printf("%s\n", str);
    str[0] = 'c';
    printf("%s\n", str);

    char* pstr = "ptrString";
    //pstr[0] = 'c';
    //printf("%s\n", pstr);
}

void pointer_arr_and_2d_arr()
{
    float arr[2][4] =
    {
        {1.0f, 2.0f, 3.0f, 4.0f},
        {5.0f, 6.0f, 7.0f, 8.0f}
    };

    //arr == &arr[0][0] == arr[0] == &arr[0]

    printf("&arr[0][0] : 0x%p\n", arr);
    printf("&arr[0][0] : 0x%p\n", arr[0]);
    printf("\n");

    printf("&arr[0][0] : 0x%p\n", *arr); 
    printf("&arr[0][0] : 0x%p\n", &arr[0]);
    printf("&arr[0][0] : 0x%p\n", &arr[0][0]);
    printf("\n");

    printf("arr[0][0] : %f\n", arr[0][0]); //1.0f
    printf("arr[0][0] : %f\n", *arr[0]);
    printf("arr[0][0] : %f\n", **arr);
    printf("\n");

    printf("0x%p\n", (arr + 1));
    printf("0x%p\n", (&arr[1]));
    printf("0x%p\n", (arr[1]));
    printf("0x%p\n", *(arr + 1));
    printf("0x%p\n", (&arr[0] + 1));
    printf("0x%p\n", (&arr[1][0]));
    printf("\n");

    printf("%f\n", *(*(arr + 1) + 2));
    printf("\n");

    int arr1[2][3] = {
        {0, 1, 2},
        {3, 4, 5}
    };

    //int** ptrArr = arr1;
    //printf("%d ", ptrArr[0][0]);

    {
        int arr0[3] = { 10, 20, 30 };
        int arr1[3] = { 40, 50, 60 };

        int* ptrArr[2] = { arr0, arr1 };

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d(== %d, %d) => 0x%p, ", ptrArr[i][j], *(ptrArr[i] + j),
                    * (*(ptrArr + i) + j), &ptrArr[i][j]);
            }
            printf("\n");
        }
    }

    {
        int myArr[2][3] = { {1, 2, 3}, {4, 5, 6} };

        int* ptrArr[3];
        ptrArr[0] = myArr[0];
        ptrArr[1] = myArr[1];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d %d %d %d 0x%p 0x%p\n",
                    myArr[i][j],
                    ptrArr[i][j],
                    *(ptrArr[i] + j),
                    *(*(ptrArr + i) + j),
                    &myArr[i][j],
                    &ptrArr[i][j]
                    );
            }
        }
    }
}

void pointer_and_const_arr()
{
    //1.
    const int a = 5;
    double const d = 3.14;

    //2.
    const int arr1[5] = { 1, 2, 3, 4, 5 };
    //arr1[0] = 5;

    //3.
    const double arr2[3] = { 1.0, 2.0, 3.0 };
    //arr2[0] = 5;
    const double* ptr1 = arr2;
    //*ptr1 = 3.0;
    //ptr1[0] = 3.0;

    //4.
    double const* const ptr3 = arr2;
    //ptr3 += 1;
    //ptr3++;
}

void void_pointer()
{
    //void i;

    int num = 10;
    int* p = &num;
    void* vp = p;

    printf("p : %p\n", p);
    printf("vp : %p\n\n", vp);

    printf("*p : %d\n", *p);
    //printf("*vp : %d\n", *vp);

    int* p0 = (int*)vp;
    printf("p0 : %d\n", *p0);

    int nums[] = { 1, 2, 3 };
    void* voidptr = nums;
    
    //printf("%d", *voidptr);
    printf("%d", *(int*)voidptr);
}

//영화관 예매 프로그램
//빙고 과제