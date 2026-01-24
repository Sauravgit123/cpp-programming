#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the no : ";
    cin >> x;
    if (x >= 0)
        cout << x << endl;
    else
        cout << -x << endl;

    // or

    int y;
    cout << "enter the no. : ";
    cin >> y;
    if (y < 0)
        y = -y;
    cout << y;

    return 0;
}