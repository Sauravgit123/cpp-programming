#include <iostream>
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

    int arr[5];
    cout << "Enter the elements :";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int max2 = INT32_MIN;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] != max)
        {
            if (arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
    }

    cout << "SECOND MAX ELEMENT IS : " << max2 << endl;

    return 0;
}