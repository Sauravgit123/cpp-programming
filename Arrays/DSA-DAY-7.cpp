#include <iostream>
using namespace std;

int main()
{
    // There is a array of size n sorted in inc order ,find the pair of elements in the array whose sum =x

    int arr[5] = {-1, 0, 1, 2, 3};
    cout << "Given array :";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int x;
    cout << endl
         << "Enter the target sum x :";
    cin >> x;
    int f = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "Yes";
                f = 1;
                break;
            }
        }
        if (f == 1)

            break;
    }
    if (f == -1)
    {
        cout << "No";
    }

    // NOW BY 2 POINTER APPROCH;

    nt arr[5] = {-1, 0, 1, 2, 3};
    cout << "Given array :";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int x;
    cout << endl
         << "Enter the target sum x :";
    cin >> x;

    return 0;
}