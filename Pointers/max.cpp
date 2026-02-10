#include <iostream>
using namespace std;
int maximum(int x, int y)   // CUSTOM FUNCTION ...IT CAN BE DONE VIA max() func easily
{

    if (x > y)

        return x;

    else if (x == y)
        return x;

    else
        return y;
}
int main()
{
    int x, y;
    cout << "Enter the 1st No. : ";
    cin >> x;
    cout << "Enter the 2nd No. : ";
    cin >> y;
    cout << "Max no. is : " << maximum(x, y);

    return 0;
}