#include <iostream>
using namespace std;

int main()
{
    // PLUS PATTERN

    // int n;
    // cout << "Enter the no. of rows : ";
    // cin >> n;

    // if (n % 2 != 0)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             if ((n / 2) + 1 == j or (n / 2) + 1 == i)

    //                 cout << '*' << " ";
    //             else
    //                 cout << "  ";
    //         }
    //         cout << endl;
    //     }
    // }
    // else
    //     cout << "Pattern not possible ";

    // HOLLOW RECTANGLE

    // int n, m;
    // cout << "Enter the no. of rows : ";
    // cin >> n;
    // cout << "Enter the breadth length : ";
    // cin >> m;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         if (1 == j or i == 1 or i == n or j == m)

    //             cout << '*' << " ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    // STAR CROSS

    // int n, m;
    // cout << "Enter the no. of rows : ";
    // cin >> n;
    // if (n % 2 != 0)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             if (i == j or (i + j) == (n + 1)) // important question for building
    //                                               // GIVES PATRERN IN ODD INPUT ONLY..
    //                 cout << '*' << " ";
    //             else
    //                 cout << "  ";
    //         }
    //         cout << endl;
    //     }
    // }

    // else
    //     cout << "Pattern not possible ";

    // STAR TRIANGLE REVERSE

    // int n;
    // cout << "Enter the no. of rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {

    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << '*' << " ";
    //     }

    //     cout << endl;
    // }

    // NUMBER REVERSE TRIANGLE

    // int n;
    // cout << "Enter the no. of rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << k << " ";
    //     }
    //     cout << endl;
    // }

    // REVERSE ABCD TRIANGLE

    // int n;
    // cout << "Enter the no. of rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << (char)(k + 64) << " ";
    //     }

    //     cout << endl;
    // }

    // RHOMBUS ( INTERGRATIONOF FLIPPED TRIANGLE AND SQUARE)

    int n;
    cout << "Enter the no. of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < n; k++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    return 0;
}