#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter 1st no : ";
    cin >> a;
    cout << "Enter 2nd no  : ";
    cin >> b;
    cout << "Enter 3rd no : ";
    cin >> c;
    if (a > b && a > c)
        cout << a << " is greatest" << endl;
    else if (b > a && b > c)
        cout << b << " is greatest " << endl;
    else
        cout << c << " is greatest";

    return 0;
}