#include <iostream>
using namespace std;
maximum(int x, int y)
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