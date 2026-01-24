#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the no : ";
    cin >> x;
    if (x >= 100 && x <= 999 || x <= -100 && x >= -999) // can use and/&& or/||
        cout << "It's a 3 digit no ";
    else
        cout << "No, not a 3 digit";
    return 0;
}