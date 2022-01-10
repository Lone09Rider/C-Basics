#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    string name = "Mike Robert";
    double gpa = 2.7;

    // To Print Memory Address we Use "&"
    cout << &age << endl;

    // To access the Address to see if it is right we use "*"
    int *Age = &age;
    cout << *Age << endl;

    // Direct Statement

    cout << *&age << endl;
    cout << &*& age << endl;



    return 0;
}
