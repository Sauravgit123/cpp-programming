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
         << "GIVEN ARRAY : ";             // 1 int element takes 4 byte
    for (int i = 0; i < n; i++)       //sizeof(arr)/4  --> gives the no. of elements in array  
    {
        cout << arr[i] << " ";           // sizeof() --> gives the total size it takes elements*4 
    }
    int sum = 0;             
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << endl
         << "Sum : " << sum;

    return 0;
}