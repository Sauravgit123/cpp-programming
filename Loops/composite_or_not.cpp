#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = n / 2; i > 1; i--)
    {
        if (n % i == 0)
        {

            flag = false;
            break;
        }
    }
    if (n == 1)

        cout << "Neither Prime nor Composite  ";
    else if (flag == true)

        cout << "Prime Number ";
    else
        cout << "Composite number";

    return 0;
}