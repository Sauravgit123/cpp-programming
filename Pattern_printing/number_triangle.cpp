#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " "; // if i then 1->22->333->4444
        }
        cout << endl;
    }

    return 0;
}