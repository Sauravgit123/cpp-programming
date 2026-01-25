#include <iostream>
using namespace std;

int main()
{
    // Q-1   (count no of didgits in a number)  ques can be done via both for and while loop

    // int n, count = 0;
    // cout << "Enter the number : "; // 12323  -->  5 count
    // cin >> n;                      // but for ex - 00124 total digits 5 ..but it will show 3
    // while (n != 0)                 // not counting 0 as 00124 --> 124 only
    // {
    //     n /= 10;
    //     count += 1;
    // }
    // if (count == 0) // if entered no is 0  --> shows no of digit is 1
    //     cout << 1;
    // else
    //     cout << count << endl;

    // Q-2 (WAP FOR PRINTING THE SUM OF A DIGITS OF A NUMBER)

    // int a, sum = 0;
    // cout << "Enter the number : ";
    // cin >> a;

    // while (a > 0)
    // {
    //     int temp = a % 10;
    //     sum += temp;
    //     a /= 10;
    // }
    // cout << sum;

    // Q-3 (SIMILARLY  PRODUCT OF DIGITS IN A NUMBER  assuming NO 0 in no. )

    // int b, p = 1;
    // cout << "Enter the number : ";
    // cin >> b;

    // while (b > 0)
    // {
    //     int temp = b % 10;
    //     p *= temp;
    //     b /= 10;
    // }
    // cout << p;

    // Q-4 (WAP TO WRITE THE REVERSE OF A GIVEN NO.)

    // int x, rev = 0;
    // cout << "Enter the number : ";
    // cin >> x;
    // int temp2 = x;

    // while (x > 0)
    // {
    //     int temp = x % 10;
    //     rev = (rev) * 10 + temp;
    //     x /= 10;
    // }
    // cout << "Reverse of the number is : " << rev << endl;
    // cout << "SUM OF NO. AND ITS REVERSE : " << temp2 + rev;

    // Q-5 (FACTORIAL OF GIVEN NUMBER)

    // int n1;
    // cout << "Enter the number : ";
    // cin >> n1;
    // int fact = 1;

    // while (n1 > 0)
    // {
    //     fact *= n1;
    //     n1--;
    // }
    // cout << "Factorial of the given no. : " << fact << endl;

    // via for loop

    // int n1;
    // cout << "Enter the number : ";
    // cin >> n1;
    // int fact = 1;
    // for (int i = 1; i <= n1; i++)
    // {
    //     fact *= i;
    // }
    // cout << "Factorial is : " << fact << endl;

    // Q-6 (SUM 1 - N)

    // int n, sum = 0;
    // cout << "Enter the number : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum : " << sum << endl;

    // or via while loop

    // int n, sum = 0;
    // cout << "Enter the number : ";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    // cout << "Sum : " << sum << endl;

    // Q-7 (ASCAII VALUES FROM A-Z)

    for (int i = 'A'; i <= 'Z'; i++)

    {
        cout << i << " " << (char)i << endl;
    }

    return 0;
}