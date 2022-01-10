#include <iostream>

using namespace std;

int main()
{
    int x = 9;
    for (int i = 1; i<=10 ; ++i)
    {
        cout << x << " X " << i << " = " << x*i << endl;
    }

    cout <<"________________"<<endl;
    int arr[] = {1, 2, 3, 4, 9};
    // Advance For Loop
    for (int i: arr)
    {
        cout << i << endl;
    }
    cout <<"________________"<<endl;
    // For Multidimensional
    int arr1[2][2] = {{5, 6},{3, 4}};
    for (int i = 0; i<2; ++i)
    {
        for(int j = 0; j< 2; ++j)
        {
            cout << arr1[i][j] <<endl;
        }
    }

    return 0;
}
