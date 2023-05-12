#include"03_lecture.h"

int main()
{
	using namespace std;

	Teacher t("teacher");
	Student s1("a");
	Student s2("b");
	Student s3("c");

	cout << "t : " << &t << endl;
	cout << "s1 : " << &s1 << endl;
	cout << "s2: " << &s2 << endl;
	cout << "s3 : " << &s3 << endl;
	cout << endl;

	{
		Lecture lec("C++");
	}
		
	cout << "t : " << &t << endl;
	cout << "s1 : " << &s1 << endl;
	cout << "s2: " << &s2 << endl;
	cout << "s3 : " << &s3 << endl;

	return;
}