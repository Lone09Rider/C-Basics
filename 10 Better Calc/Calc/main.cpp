#include <iostream>

using namespace std;

void Calc(int a, int b, char c)
{
    if (c == '+')
        cout << a+b;
    else if (c == '-')
        cout << a-b;
    else if (c == '*')
        cout << a*b;
    else if (c == '/')
        cout << a/b;
    else
        cout << a%b;
}

int main()
{
    int x, y;
    char z;
    cout << "Enter two Numbers : " << endl;
    cin >> x;
    cin >> y;
    cout << "Enter Operand : +, -, /, *, % : "<<endl;
    cin >> z;
    Calc(x, y, z);
    return 0;
}
