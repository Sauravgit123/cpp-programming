#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, World!" << endl // endl moves to next line
         << "starting my dsa journey" << "\n"
         << "bye" << endl
         << "4*3" << endl
         << 4 * 3;

    int x, y;     // declaration
    x = 3, y = 7; // initialisation  or int x=3,y=7;    --->both
    cout << endl
         << x + y << endl;
    x = 7; // known as UPDATION
    cout << x << endl;
    x += 8;
    cout << x;
    return 0;
}
