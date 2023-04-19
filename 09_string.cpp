#include <iostream>
#include <string>

using namespace std;

int main()
{
    char myStr[] = "Hello C";
    const char* myStr2 = "Hello C"; 

    string str = "Hello c++";

    cout << str.size() << endl;
    cout << str.length() << endl;

    string a("Hello, ");
    string b("C++!!");

    string c = a + b;

    cout << c << endl;
    c += ", good!!";
    cout << c << endl;
    
    cout << c[4] << endl;

    return 0;
}