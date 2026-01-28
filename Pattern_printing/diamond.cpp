#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the no. of rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int k = 1; k <= n - i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = n - 1; j >= i; j--)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // ATLERNATE METHOD  (Single Loop)
    int n;
    cout << "Enter the no. of rows : ";
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int space = i == (n / 2) + 1 ? for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}