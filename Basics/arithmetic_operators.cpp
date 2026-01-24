#include <iostream>
using namespace std;

int main()
{
     float x = 10, y = 6; // atleat one operand must be float
                          // to get decimal output
     cout << x << endl
          << x + y << endl
          << x - y << endl
          << x * y << endl
          << x / y << endl;

     // if want to increment or decrement by 1 then
     int a = 2;
     cout << a << endl; // 3 different methods
     a = a + 1;
     cout << a << endl; // similarly we can decrement
     a += 1;
     cout << a << endl; // this id post increment
     a++;               // ++x or --x  is pre inc and dec
     cout << a << endl;

     // diff between post and pre inc or dec

     int b = 4;
     cout << "post decrement" << endl
          << b << endl;
     cout << b-- << endl; // firstly b value is used a=then it is incremented
     cout << b << endl;

     int c = 7;
     cout << "pre increment" << endl
          << c << endl;
     cout << ++c << endl; // incremented and then used
     cout << c << endl;

     int q = 10, w = 6;
     cout << q % w;
     return 0;
}