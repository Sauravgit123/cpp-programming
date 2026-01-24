#include <iostream>
using namespace std;

int main()
{
    // using if-else  BASIC CALCULATOR

    float a, b;
    char op;
    cout << "Enter the expression : ";
    cin >> a;
    cin >> op;
    cin >> b;
    if (op == '+')
        cout << a + b;
    if (op == '-')
        cout << a - b;
    if (op == '*')
        cout << a * b;
    if (op == '/')
        cout << a / b;

    // USING SWITCH

    float q, w;
    char o;
    cout << endl
         << "Enter the expression : ";
    cin >> q;
    cin >> o;
    cin >> w;

    switch (o)
    {
    case '+':
        cout << q + w;
        break;
    case '-':
        cout << q - w;
        break;
    case '*':
        cout << q * w;
        break;
    case '/':
        cout << q / w;
        break;

    default:
        cout << "Invalid";
        }

    return 0;
}