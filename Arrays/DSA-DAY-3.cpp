#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // TARGET SUM -Find the pair whose sum is equal to x

    // int arr[5];
    // cout << "Enter the elements :";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // int t;
    // cout << "Enter the target sum : ";
    // cin >> t;
    // int c = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] + arr[j] == t)
    //             c++;
    //     }
    // }
    // cout << "Total pair : " << c;

    // SAME QUES- BUT FIND TRIPLETS WHOSE SUM IS EQUAL TO X
    // int arr[5];
    // cout << "Enter the elements :";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // int t;
    // cout << "Enter the target sum : ";
    // cin >> t;
    // int c = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         for (int k = j + 1; k < 5; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == t)
    //                 c++;
    //         }
    //     }
    // }
    // cout << "Total triplets : " << c;

    // FIND UNIQUE NO. FROM THE PAIRS OF ELEMENTS
    // int arr[5];
    // cout << "Enter the elements :";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] == -1)
    //     {
    //         continue;
    //     }

    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             arr[i] = arr[j] = -1;
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] >= 0)
    //     {
    //         cout << "Unique no. is " << arr[i];
    //     }
    // }

    // FIND THE SECOND MAX ELEMENT IN THE ARRAY

    // int arr[5];
    // cout << "Enter the elements :";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // int max = arr[0];
    // for (int i = 1; i < 5; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }
    // int max2 = INT32_MIN;
    // for (int i = 1; i < 5; i++)
    // {
    //     if (arr[i] != max)
    //     {
    //         if (arr[i] > max2)
    //         {
    //             max2 = arr[i];
    //         }
    //     }
    // }

    // cout << "SECOND MAX ELEMENT IS : " << max2 << endl;

    // ROTATE THE ARRAY TO K STEPS   (USING EXTRA MEMORY)

    // int arr[5];
    // int n = 5;
    // cout << "Enter the elements :";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // int k;
    // cout << "Enter the k (no. of steps ,to rotate the array ) :";
    // cin >> k;
    // k = k % n;   // as k can be more than the aize of array or vector
    // int newarr[5];
    // int j = 0;
    // for (int i = n - k; i < n; i++)
    // {
    //     newarr[j++] = arr[i];
    // }
    // for (int i = 0; i <= k; i++)
    // {
    //     newarr[j++] = arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << newarr[i] << " ";
    // }

    // SAME QUES -BY CHANGING SAME ARRAY
    // AS VECTORS HAVE INBUIT REVERSE FUN

    // vector<int> v = {1, 2, 3, 4, 5};
    // int n = v.size();
    // cout
    //     << "Given vector :";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i];
    // }

    // int k;
    // cout << endl
    //      << "Enter the k -no. of steps for rotating the array : ";
    // cin >> k;
    // k = k % n;
    // reverse(v.begin(), v.end());
    // reverse(v.begin(), v.begin() + k);
    // reverse(v.begin() + k, v.end());
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i];
    // }

    // CHECK IF THE QUERIES ARE PRESENT IN ARRAY OR NOT

    int n;
    cout << "Enter the size of vector :";
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    const int m = 1e5 + 10;
    vector<int> f(m, 0); // initialising woth 0
    for (int i = 0; i < n; i++)
    {
        f[v[i]]++; // getting the frequency of that element present in the vector
    }

    int q;
    cout << "Enter the queries: ";
    cin >> q;

    while (q--)
    {
        int e;
        cin >> e;
        cout << f[e] << endl;
    }

    return 0;
}