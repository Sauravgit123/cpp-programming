#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int *p = &x; // STORES THE ADD OF THE x
    cout << &x << endl
         << p << endl
         << *p << endl
         << "ADDRESS OF p : " << &p; // ACCESS THE VALUE FROM ADDRESS p

    return 0;
}