#include <iostream>
using namespace std;

int main()
{

    // printing all factors

    // int n;
    // cout << "Enter the number : ";
    // cin >> n;
    // for (int i = 1; i < n - 1; i++)
    // {
    //     if (n % i == 0)
    //         cout << i << " ";
    // }

    // printing only HCF

    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = n / 2; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << " "; // USING BREAK
            break;
        }
    }
    return 0;
}