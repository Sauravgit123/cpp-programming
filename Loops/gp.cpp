#include <iostream>
using namespace std;

int main()
{
    int n, q, di;
    cout << "Enter the number of times of a GP : ";
    cin >> n;
    cout << "First no be : ";
    cin >> q;
    cout << "Common ratio  of a GP : ";
    cin >> di;

    for (int i = 1; i <= n; i++)
    {
        cout << " " << q;
        q *= di;
    }
    return 0;
}