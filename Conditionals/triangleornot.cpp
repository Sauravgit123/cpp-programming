#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter 1st side : ";
    cin >> a;
    cout << "Enter 2nd side : ";
    cin >> b;
    cout << "Enter 3rd side : ";
    cin >> c;
    if ((a + b) > c && (b + c) > a and (c + a) > b) // logic for a possible triangle
        cout << "triangle is possible";
    else
        cout << "Can't be a triangle ";

    return 0;
}