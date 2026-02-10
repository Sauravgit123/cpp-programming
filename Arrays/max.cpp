#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "GIVEN ARRAY : ";
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)

    {
        if (arr[i] > max)            //mx=max(mx,arr[i])   we can use this also

            max = arr[i];
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)

    {
        if (arr[i] < min)            //mn=min(mn,arr[i])   we can use this also

            min = arr[i];
    }
    cout << endl
         << "MAX : " << max << endl
         << "MIN : " << min;
    return 0;
}