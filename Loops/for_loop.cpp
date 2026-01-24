#include <iostream>
using namespace std;

int main()
{

    // printing numb from 1  --> 10

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    // taking input then printing
    int x;
    cout << endl
         << " enter the no. to be print : ";
    cin >> x;
    for (int i = 1; i <= x; ++i)
    {
        cout << i << " ";
    }

    return 0;
}