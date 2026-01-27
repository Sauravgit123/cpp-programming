#include <iostream>
using namespace std;

int fib(int n)
{

    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    // FIBONACCI SERIES CAN START FRO 0 1 OR 1 1..
    // IF 1 1 -> 1 1 2 3 5 8 13 21.......

    int n;
    cout << "Enter the nth position of fibonacci series : ";
    cin >> n;
    cout << n << "th TERM OF FIBONACCI SERIES IS : " << fib(n);
    return 0;
}