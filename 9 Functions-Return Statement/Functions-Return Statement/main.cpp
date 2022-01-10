#include <iostream>

using namespace std;


int getnum(int num)
{
    cout << "Hello" << endl;
    return num;
    // Statement Ends Here
    cout << "Hello"; // Never gets Printed
}

int main()
{

// Here we have to print the Return Statement

    cout << getnum(9) << endl;

    return 0;
}
