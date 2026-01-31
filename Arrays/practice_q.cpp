#include <iostream>
using namespace std;

int main()
{
    // Q-1 odd index --> 2nd multiple and +10 to even index
    // int n;
    // cout << "Enter the size of an array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl
    //      << "Given Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl
    //      << "Output Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 != 0)

    //         arr[i] *= 2;
    //     else
    //         arr[i] = arr[i] + 10;

    //     cout << arr[i] << " ";
    // }

    // Q-2 count no. of elements greater than int x(x can be any no.)
    // int n;
    // cout << "Enter the size of an array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl
    //      << "Given Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int x;
    // cout << "Enter the num : ";
    // cin >> x;
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > x)
    //         count++;
    // }
    // cout << endl
    //      << "No. of elements greater than x is : " << count;

    // Q-3 print diff between even index sum to the sum of odd index elements

    // int n;
    // cout << "Enter the size of an array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout
    //     << "Given Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int esum = 0, osum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //         esum += arr[i];
    //     else
    //         osum += arr[i];
    // }
    // cout
    //     << "Diff between the sum is : " << esum - osum;

    // Q-4 (FIND 2ND LARGEST ELEMENT IN THE ARRAY)
    // int n;
    // cout << "Enter the size of an array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout
    //     << "Given Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // int mx = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     mx = max(mx, arr[i]);
    // }
    // int smx = INT32_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != mx)

    //         smx = max(smx, arr[i]);
    // }
    // cout << endl
    //      << "Second max no. is : " << smx;

    // Q-5 (COPY REVERSE ARRAY TO OTHER)

    // int n;
    // cout << "Enter the size of an array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout
    //     << "Given Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr2[n];

    // for (int i = 0; i < n; i++)
    // {
    //     int j = n - 1 - i;
    //     arr2[i] = arr[j];
    // }
    // cout << "Reverse : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    // Q-6 (REVERSE THE ARRAY WITHOUT USING EXTRA ARRAY)
    // int n;
    // cout << "Enter the size of an array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout
    //     << "Given Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int j = n - 1 - i;
    //     if (i > j)
    //         break;

    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    // cout
    //     << endl<<"Reverse Array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Q-7 (Palindrome or not )
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout
        << "Given Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        if (i < j)
        {

            if (arr[i] == arr[j])
                continue;
            else
                flag = false;
            break;
        }
    }
    if (flag == true)

        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome ";

    return 0;
}
