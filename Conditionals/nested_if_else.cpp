#include <iostream>
using namespace std;

int main()
{
    // GREATEST OF 3

    float x, y, z;
    cout << "Enter the 1st no. : ";
    cin >> x;
    cout << "Enter the 2nd no. : ";
    cin >> y;
    cout << "Enter the 3rd no. : ";
    cin >> z;
    if (x > y)
    {
        if (x > z)

            cout << " greatest is : " << x;
        else
            cout << "greatest is : " << z;
    }
    else
    {
        if (y > z)

            cout << " greatest is : " << y;

        else
            cout << " greatest is : " << z;
    }
    return 0;
}