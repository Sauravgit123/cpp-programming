#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    do
    {
        cout << n << " ";                             // minimum - it will execute for 1 time
        n++;                                          // as it firstly do the work and then checks the condition

    } while (n <= 10);

    return 0;
}