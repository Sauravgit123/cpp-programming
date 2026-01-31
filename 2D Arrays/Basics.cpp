#include <iostream>
using namespace std;

int main()
{
    // int arr[3][2] = {{1, 2}, {4, 8}, {7, 9}};  // 1 way of initialisation
    // // int arr[][2]={{1,2},{4,8},{7,9}};
    int arr[][2] = {1, 2, 4, 8, 7, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "Transpose : " << endl;
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}