#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {2, 31, 4, 5, 6, 9};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int t[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}