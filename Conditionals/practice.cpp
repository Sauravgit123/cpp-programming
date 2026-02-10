#include <iostream>
using namespace std;

int main()
{    // boolean values false=0 and true = 1
    int x = 3, y, z;
    y = x = 10;    //hierarchy is from right --> left
    z = x < 10;    // x<10 is comparison   gives false as x =10 so false gives 0 so z=0
    cout << x << " " << y << " " << z; 
    return 0;
}