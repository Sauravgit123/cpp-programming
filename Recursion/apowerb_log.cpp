#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)

        return 1;

    if (b == 1)
        return a;
    int p = power(a, b / 2);

    if (b % 2 == 0)

        return p * p;

    else

        return a * p * p;
}
int main()
{
    int a, b;
    cout << "Enter the base (a) : ";
    cin >> a;

    cout << "Enter the exponent (b): ";
    cin >> b;
    cout << a << " POWER " << b << " is : " << power(a, b);
    return 0;
}