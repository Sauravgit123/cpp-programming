#include <iostream>
using namespace std;
int fact(int x)
{

    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int ncr(int i, int j)
{

    return fact(i) / (fact(j) * fact(i - j));
}
int main()
{
    int n;
    cout << "Enter the no. of rows : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) // FOR RIGHT ANGLED (for (int j = 0; j <= i; j++))
        {                            // FOR EQUILATERAL TRUANGLE ()

            cout << ncr(i, j) << " "; // USE OF COMBINATION FORMULA iCj
        }
        cout << endl;
    }

    return 0;
}