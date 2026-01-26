#include <iostream>
using namespace std;

int main()
{
    // METHOD -1 USING TEMP VARIABLE

    // int x = 5;
    // int y = 2;
    // cout << x << " " << y << endl;
    // int temp = x;
    // x = y;
    // y = temp;
    // cout << x << " " << y;

    // USING MATHS

    int x = 5;
    int y = 2;
    cout << x << " " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y;

    return 0;
}