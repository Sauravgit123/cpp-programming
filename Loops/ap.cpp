#include <iostream>
using namespace std;

int main()
{
    // AP UPTO N TERMS
    int n, q, di;
    cout << "Enter the number of times of an AP : ";
    cin >> n;
    cout << "First no be : ";
    cin >> q;
    cout << "Common diff  of an AP : ";
    cin >> di;

    for (int i = 1; i <= n; i++)
    {
        cout << " " << q;
        q += di;
    }

    // Using AP formula

    // int x, y, d;
    // cout << "Enter the number of times of an AP : ";
    // cin >> x;
    // cout << "First no be : ";
    // cin >> y;
    // cout << "Common diff  of an AP : ";
    // cin >> d;

    // for (int i = y; i <= (y + (n - 1) * d); i += d)
    // {
    //     cout << " " << i;
    // }

    return 0;
}