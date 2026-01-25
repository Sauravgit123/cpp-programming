#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 65; j < i + 65; j++)
    //     {
    //         cout << (char)j << " ";
    //     }
    //     cout << endl;
    // }

    // second variation

    int n;
    cout << "Enter the rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (char)(i + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}