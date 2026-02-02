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
    cout << endl
         << "Updated: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Reverse : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    // 2ND METHOD TO INITIALISE ARRAYS
    cout << endl;
    float arr2[] = {2.89, 3, 4, 5}; // Declaration and Initialisation
    for (int i = 0; i < 4; i++)
    {
        cout << arr2[i] << " ";
    }

    int size = 10, b[size]; // WONT GIVE ERROR CREATES A VARIABLE SIZE=10 AND ARRAY WHOSE SIZE IS 10
    int b[size], size = 10; // GIVE ERROR AS SIZE NOT DECLARED before declaring the array size
    return 0;
}