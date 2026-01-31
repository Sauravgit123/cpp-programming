#include <iostream>
using namespace std;

int main()
{
    int a1[3][3] = {1, 85, 4, 3, 56, 3, 3, 2, 8};
    int a2[3][3] = {2, 76, 4, 6, 56, 3, 3, 2, 8};
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a1[i][j] + a2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    int mx = c[0][0];
    // Find max element in the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mx = max(mx, c[i][j]);
        }
    }

    cout
        << "Max is " << mx;

    int mn = c[0][0];
    // Find min element in the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mn = min(mn, c[i][j]);
        }
    }

    cout << endl
         << "Min is " << mn;

    return 0;
}