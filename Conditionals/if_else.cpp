#include <iostream>
using namespace std;

int main()
{

    // VOTE CRITERIA
    int x;
    cout << "Enter the age : ";
    cin >> x;
    if (x >= 18)
        cout << "Eligible to vote" << endl;

    else
        cout << "Can't vote" << endl;

    // ODD OR EVEN

    int y;
    cout << "Enter the no :";
    cin >> y;
    if (y % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}