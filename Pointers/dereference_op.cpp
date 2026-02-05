#include <iostream>
using namespace std;

int main()
{
     int x = 6;
     int *ptr = &x;
     cout << x << endl
          << *ptr;
     *ptr = 89; // CAN CHANGE THE VALUE OF x USING IT'S ADDRESS
     cout << endl
          << x;
     return 0;
}