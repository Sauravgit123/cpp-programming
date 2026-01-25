#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the number : ";
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 65; j < n + 65; j++)
    //     {
    //         cout << (char)j << " ";
    //     }
    //     cout << endl;
    // }

    // second varaition

    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 65; i < n + 65; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (char)i << " ";
        }
        cout << endl;
    }

    return 0;
}