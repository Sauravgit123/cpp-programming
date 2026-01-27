#include <iostream>
using namespace std;

swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    cout << "Enter the 1st No. : ";
    cin >> x;
    cout << "Enter the 2nd No. : ";
    cin >> y;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;

    return 0;
}