#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char z;
    cout<<"Enter two Numbers : "<<endl;
    cin >> x;
    cin >> y;
    cout<<"Enter a Operand(+, -, *, /, %)"<<endl;
    cin >> z;

    if (z == '+')
    {
        cout<<x+y<<endl;
    }
    else if (z == '-')
    {
        cout<<x-y<<endl;
    }
    else if (z == '*')
    {
        cout<<x*y<<endl;
    }
    else if (z == '/')
    {
        cout<<x/y<<endl;
    }
    else if (z == '%')
    {
        cout<<x%y<<endl;
    }
    else
        cout<<"Wrong Operand"<<endl;

    cout<<"That's Your Answer"<<endl;

    return 0;
}
