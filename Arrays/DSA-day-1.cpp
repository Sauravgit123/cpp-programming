#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 3, 4};
    // cout << sizeof(arr) << endl;                  // gives size in bytes
    // cout << sizeof(arr) / sizeof(arr[0]) << endl; // gives the count of element in the array
    // // TRAVERSE USING FOR-EACH LOOP

    // for (int i : arr) // taken int as array has int datatypes
    //     cout << i << endl;
    // char vowels[5];
    // for (char &e : vowels) // now it gets saved in the array
    //     cin >> e;

    // for (char e : vowels)
    //     cout
    //         << e << endl;

    // LINEAR SEARCH

    int a[10], n;
    cout << "Enter the no. of elements : ";
    cin >> n;
    cout << "Enter the no. of elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, f = -1;
    cout << "Enter the target element : " << endl;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            cout << "Found at index :" << i << endl;
            f = 1;
            break;
        }
    }
    if (f == -1)
    {
        cout << "Not found ";
    }

    return 0;
}