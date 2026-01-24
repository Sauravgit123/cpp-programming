#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    // ALTERNATE METHOD

    for (int i = 0; i <= 15; i += 2)
    {

        cout << i << " ";
    }
    return 0;
}