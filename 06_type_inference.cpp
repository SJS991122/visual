#include <iostream>

using namespace std;

auto add(int x, int y) -> int;

int main()
{
    int a = 10;
    float b = 3.14f;
    double c = 45.0;

    //float result = a + b;
    auto result = a + b;

    return 0;
}

auto add(int x, int y) -> int
{
    return x + y;
}
