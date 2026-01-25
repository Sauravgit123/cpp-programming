#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i - 1; j < n; j++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // ALTERNATE METHOD

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // NUMBER TRIANGLE

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j <= n - i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // second variation

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // third variation

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j >= n - i; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // abcd TRIANGLE

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << (char)(j + 65) << " ";
    //     }
    //     cout << endl;
    // }

    // ODD NUMBER TRIANGLE

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i * 2; j += 2)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // ALTERNATE METHOD -1

    // int n;
    // cout << "Enter the rows : ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << 2 * j - 1 << " ";
    //     }
    //     cout << endl;
    // }

    // ALTERNATE METHOD -2

    int n;
    cout << "Enter the rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
    return 0;
}