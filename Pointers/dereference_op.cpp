#include <iostream>
using namespace std;

int main()
{
    int x = 6;
    int *ptr = &x;
    cout << x << endl
         << *ptr;
    *ptr = 89;
    cout << endl
         << x;
    return 0;
}