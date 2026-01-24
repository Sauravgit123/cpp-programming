#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    cout << (int)ch << endl; // using typecasting

    int x;
    cout << "Enter the no :";
    cin >> x;
    cout << (char)x; // reverse no. to char

    cout << 5 / 3 << endl;
    cout << 5.0 / 3 << endl;
    cout << 5 / 3.0 << endl;
    cout << 5.0 / 3.0 << endl;

    return 0;
}