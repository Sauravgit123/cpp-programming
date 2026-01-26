#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b;
    cout << "Enter the first number : ";

    cin >> a;
    cout
        << "Enter the second number : ";

    cin >> b;
    cout
        << "Sum is  : " << sum(a, b);
    return 0;
}
