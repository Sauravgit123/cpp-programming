#include <iostream>
using namespace std;

int main()
{
    // (condition) ? if true : if false;

    // odd even
    int x;
    cout << "Enter the no ";
    cin >> x;

    (x % 2 == 0) ? cout << "Even" : cout << "Odd";
    return 0;
}