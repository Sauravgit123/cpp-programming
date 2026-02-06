#include <iostream>
using namespace std;

int main()
{
    // PREFIX SUM - RETURN THE RUNNING SUM OF THE GIVEN ARRAY

    int n;
    cout << "Enter the no. of elements in array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Given array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    cout << endl
         << "Output array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}