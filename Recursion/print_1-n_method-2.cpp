#include <iostream>
using namespace std;

void pr(int n)
{
    if (n == 0) // BASE CASE
        return;
    pr(n - 1);
    cout << n << endl;
}
int main()
{
    // PRINT 1 TO N

    // This code works because of the order of execution on the Function Call Stack.
    // By calling the function before printing, you "delay" the output until the
    // recursion hits the bottom.

    int n;
    cout << "Enter the number : ";
    cin >> n;
    pr(n);

    return 0;
}