#include <iostream>
#include <cmath>
using namespace std;

int power(int a, int b)
{

    if (b == 0 || b == 1)
    {
        return a;
    }

    return a * power(a, b - 1);
}
int main()
{
    int a, b;
    cout << "Enter the base (a) : ";
    cin >> a;

    cout << "Enter the exponent (b): ";
    cin >> b;
    cout << a << " POWER " << b << " is : " << power(a, b);

    cout << endl
         << pow(2, 3); // BUILT - IN FUNCTION USSING LIB
    return 0;
}