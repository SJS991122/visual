#include <iostream>

using namespace std;

int add(int a, int b) { return a + b; }
float add(float a, float b) { return a + b; }
int add(int a) { return a + 1; }
int add(int a, int b, int c) { return a + b + c; }

using integer = int;
//integer add(integer a, integer b) { return a + b; }

void output(int value) {}
void output(unsigned int value) {}
void output(float value) {}

int main()
{
    auto result1 = add(10, 20);
    auto result2 = add(10.1f, 20.0f);
    auto result3 = add(10, 20, 30);

    output(1); //¸ğÈ£¼º
    output(1.0f);

    output('c'); //char, unsigned char, short, int

    return 0;
}