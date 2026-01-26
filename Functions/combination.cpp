#include <iostream>
using namespace std;

int fact(int x)

{
    int f = 1;
    while (x > 0)
    {
        f *= x;
        x--;
    }
    return f;
}
int main()
{
    int n, r;
    cout << "Enter the total no. of items : ";
    cin >> n;

    cout << "Enter the no. of items we are actually choosing : ";
    cin >> r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);
    cout << "TOTAL COMBINATIONS ARE : " << a / (b * c) << endl;
    cout << "PERMUTATION : " << a / c;

    return 0;
}

// It is logically perfect, but there is one "gotcha" you should be aware of: The 13! Barrier.

// In terms of the formula and the C++ structure, your code is 100% correct. However, because you are using int, the program will "break" (give wrong answers) as soon as the user enters any number larger than 12.

// 1. The Integer Limit
// Your int fact(int n) function calculates the factorial first.

// 12! = 479,001,600 (Fits in int)

// 13! = 6,227,020,800 (Too big for int, which maxes out at ~2.1 billion)
