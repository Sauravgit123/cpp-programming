#include <iostream>
using namespace std;

void pr(int n)
{
    if (n == 0) // BASE CASE
        return;

    cout << n << endl; //  WORK
    pr(n - 1);         // CALL
}

int main()
{
    // PRINT N TO 1

    int n;
    cout << "Enter the number : ";
    cin >> n;
    pr(n);

    return 0;
}