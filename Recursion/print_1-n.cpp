#include <iostream>
using namespace std;

void pr(int n, int x)
{
    if (x > n) // BASE CASE
        return;

    cout << x << endl;
    pr(n, x + 1); // if taking 2 parameters...it must contain 2 only ...
}

int main()
{
    // PRINT 1 TO N

    int n;
    cout << "Enter the number : ";
    cin >> n;
    pr(n, 1);

    return 0;
}