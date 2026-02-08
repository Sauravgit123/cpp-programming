#include <iostream>
using namespace std;

int main()
{
    // Q-1 [two arrays of size m and n are sorted in inc order]->merge them into single (sorted) m+n size array
    int n, m;
    cout << "Enter the size of 1st array : ";
    cin >> m;
    cout << "Enter the size of 2nd array : ";
    cin >> n;
    int arr1[m], arr2[n];
    cout << "Enter the elements in 1st array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout
        << "Enter the elements in 2nd array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    cout << "1st array : ";
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl
         << "2nd array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    int i = 0, j = 0, k = 0;

    int arr[m + n];

    while (i < m && j < n)
    {
        if (arr1[i] >= arr2[j])

            arr[k++] = arr2[j++];

        else

            arr[k++] = arr1[i++];
    }

    while (i < m)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr[k++] = arr2[j++];
    }

    cout << endl
         << "Output array : "; // output
    for (int i = 0; i < m + n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}