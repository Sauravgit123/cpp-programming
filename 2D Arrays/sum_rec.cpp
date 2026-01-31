#include <iostream>
using namespace std;

int main()
{
    // given a matric n*m give the sum formed by two coordinates
    int arr[5][5] = {2, 4, 3, 2, 5, 4, 3, 5, 6, 7, 5, 4, 3, 4, 5, 5, 6, 5, 4, 3, 3, 3, 4, 7, 9};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int a, b, c, d;
    cout << "Enter the ith index of 1st coordinate : ";
    cin >> a;
    cout << "Enter the jth index of 1st coordinate : ";
    cin >> b;
    cout << "Enter the ith index of 2nd coordinate : ";
    cin >> c;
    cout << "Enter the jth index of 2nd coordinate : ";
    cin >> d;
    int sum = 0;
    for (int i = a; i <= c; i++)
    {
        for (int j = b; j <= d; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum " << sum;

    return 0;
}