#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "SQ. elements : ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * (i + 1);
        cout << arr[i] << " ";
    }

    return 0;
}