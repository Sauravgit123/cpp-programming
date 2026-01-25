#include <iostream>
using namespace std;

int main()
{
    // int i;
    // while (i = 10)    // asssignment operator
    // {
    //     cout << i << " ";                       // GOES TO INFINITE LOOP  AS i=10 --> i stays 10 and prints infinite times
    //     i++;
    // }

    // while ('a' < 'b')
    // {
    //     cout << "malyalam is palindrome" << endl;    // goes to infinite loop as a < b (ACAII value of b> a)
    // }                                                // SAME AS     97 < 98

    // int i = 10;
    // while (i = 20)
    // {
    //     cout << "computer buff !" << endl;
    // }

    // predict the output

    int x = 4, y = 0;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            cout << x << " " << y << endl;
    }

    return 0;
}