#include <iostream>
using namespace std;

int main()
{
    int x = 2, y = 9;
    cout << "VALUE :  " << x << endl
         << "ADDRESS : " << &x << endl;
    cout << "VALUE :  " << y << endl
         << "ADDRESS : " << &y;
    return 0;
}