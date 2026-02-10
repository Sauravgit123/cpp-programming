#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)                 // important as we need to notice the pattern (out of the box) 
                cout << 1 << " ";                 // as in (i+j) position value is 1 otherwisw 0 
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}