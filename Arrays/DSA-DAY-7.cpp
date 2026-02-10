#include <iostream>
using namespace std;

int main()
{
    // Q-1 There is a array of size n sorted in inc order ,find the pair of elements in the array whose sum =x

    // int arr[5] = {-1, 0, 1, 2, 3};
    // cout << "Given array :";

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // int x;
    // cout << endl
    //      << "Enter the target sum x :";
    // cin >> x;
    // int f = -1;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] + arr[j] == x)
    //         {
    //             cout << "Yes";
    //             f = 1;
    //             break;
    //         }
    //     }
    //     if (f == 1)

    //         break;
    // }
    // if (f == -1)
    // {
    //     cout << "No";
    // }

    // Q-1 NOW BY 2 POINTER APPROCH;

    // int arr[5] = {-1, 0, 1, 2, 3};
    // cout << "Given array :";

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // int x;
    // cout << endl
    //      << "Enter the target sum x :";

    // if (!(cin >> x))
    // {
    //     cout << "Error: Please enter a valid number!" << endl;
    //     return 1; // Program yahan band ho jayega
    // }
    // int i = 0;     // Left pointer (start)
    // int j = 5 - 1; // Right pointer (end)
    // int f = -1;

    // while (i < j)
    // {
    //     int currentSum = arr[i] + arr[j];

    //     if (currentSum == x)
    //     {
    //         cout << "Yes";
    //         f = 1;
    //         break; // Pair mil gaya, loop se bahar
    //     }
    //     else if (currentSum < x)
    //     {
    //         i++; // Sum chota hai, toh left pointer badhao
    //     }
    //     else
    //     {
    //         j--; // Sum bada hai, toh right pointer kam karo
    //     }
    // }

    // if (f == -1)
    // {
    //     cout << "No";
    // }

    // Q-3 Given an array sorted in inc order ...and target diff =x, find the pair from array whose diff is x

    int arr[5] = {-1, 0, 1, 2, 3};
    cout << "Given array :";
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int x;
    cout << endl
         << "Enter the target diff x :";

    if (!(cin >> x))
    {
        cout << "Error: Please enter a valid number!" << endl;
        return 1; // Program yahan band ho jayega
    }

    int i = 0;
    int j = 1;
    int f = -1; // Flag to track if we found a pair

    while (i < n && j < n)
    {
        int diff = arr[j] - arr[i];

        if (diff == x && i != j)
        {
            cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
            f = 1; // Update flag
            break; // Stop after finding the first pair
        }
        else if (diff < x)
        {
            j++; // Increase j to make the difference bigger
        }
        else
        {
            i++; // Increase i to make the difference smaller
        }

        // Safety: Ensure j is always ahead of i
        if (i == j)
        {
            j++;
        }
    }

    if (f == -1)
    {
        cout << "No such pair exists." << endl;
    }

    return 0;
}