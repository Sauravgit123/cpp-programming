#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the lenght of array : ";
    cin >> n;
    int arr[n]; // DECLARATION
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // INITIALISATION
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    arr[1] = 4; // UPDATION
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // 2ND METHOD TO INITIALISE ARRAYS
    cout << endl;
    float arr2[4] = {2.89, 3, 4, 5};
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}