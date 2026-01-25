#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i != 3 && i != 8)
        {
            cout << i << "  ";
        }
    }
    cout << endl;
    // USING CONTINUE

    for (int i = 1; i <= 20; i++)
    {
        if (i == 4 || i == 8)
        {
            continue;
        }
        cout << i << "  ";
    }

    cout << endl;

    // printing odd number from 1 - 100

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)

            continue;
        cout << i << " ";
    }

    return 0;
}