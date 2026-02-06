#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Q-1 PREFIX SUM - RETURN THE RUNNING SUM OF THE GIVEN ARRAY

    // int n;
    // cout << "Enter the no. of elements in array : ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl
    //      << "Given array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     arr[i] = arr[i] + arr[i - 1];
    // }
    // cout << endl
    //      << "Output array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Q -2 divide the arra yinto 2 where 2 subarrays sum is equal to each other
    // prefix sum == suffix sum

    // int n;
    // cout << "Enter the no. of elements in array : ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl
    //      << "Given array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // int tsum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     tsum += arr[i];
    // }
    // int psum = 0;
    // int f = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     psum += arr[i];
    //     int s_sum = tsum - psum;
    //     if (s_sum == psum)
    //     {
    //         cout << endl
    //              << "True";
    //         f = 1;
    //         break;
    //     }
    // }
    // if (f == 0)
    // {
    //     cout << endl
    //          << "Not found";
    // }

    // Q-3 RETURN THE SUM FOR THE QUERIES OF RANGE L-R  FROM THE ARRAY

    int n;
    cout << "Enter the no. of elements in vector : ";
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
    }
    cout << endl
         << "Given array : ";
    for (int i = 1; i < n + 1; i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 1; i < n + 1; i++)
    {
        v[i] += v[i - 1];
    }

    int q;
    cout << endl
         << "Enter the no. of queries :";
    cin >> q;
    int ans = 0;
    while (q > 0)
    {
        int l, r;
        cin >> l >> r;

        ans = v[r] - v[l - 1];
        cout << ans << endl; // as l and r are included
        q--;
    }

    return 0;
}