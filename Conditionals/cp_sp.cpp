#include <iostream>
using namespace std;

int main()
{
    float cp, sp;
    cout << "Enter the cost price : ";
    cin >> cp;
    cout << "Enter the selling price : ";
    cin >> sp;
    if (cp > sp)
        cout << "Made a LOSS of :" << cp - sp << endl;
    else if (cp == sp)
        cout << "Neither loss nor profit";

    else
        cout << "Made a profit of : " << sp - cp << endl;

    return 0;
}