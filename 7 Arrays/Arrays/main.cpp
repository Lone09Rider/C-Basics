#include <iostream>

using namespace std;

int main()
{
    int luckynums[] = { 1, 2, 3, 4, 5, 15};

    cout << luckynums[1] << endl;
    cout << sizeof(luckynums) << endl;

    luckynums[0] = 9;
    cout << luckynums[0] << endl;

    // Int size is 4 bytes per number so
    int nums[3];
    cout << sizeof(nums) << endl;

    // Multidimensional Array
    int mul[2][2] = {{1, 2}, {3, 4}};
    for (int i = 0; i <2; ++i)
    {
        for (int j = 0; j <2; ++j)
        {
            cout << mul[i][j] << endl;
        }
    }

    return 0;
}
