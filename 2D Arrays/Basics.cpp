#include <iostream>
using namespace std;

int main()
{
    // int arr[3][2] = {{1, 2}, {4, 8}, {7, 9}};  // 1 way of initialisation
    // // int arr[][2]={{1,2},{4,8},{7,9}};     // 2nd way
    int arr[][2] = {1, 2, 4, 8, 7, 9};    // 3rd way  mandatory to mention column ..may or may not mention row 
// THESE WAYS ARE ONLY WHEN DECLARING AND INITIALISING 
// int arr[][3]; --->WRONG

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