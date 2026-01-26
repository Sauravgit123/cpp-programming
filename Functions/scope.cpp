#include <iostream>
using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << i << " ";
//     }
//     cout << i;   //ERROR - ('i' was not declared in this scope)
//     return 0;
// }

int main()
{
    int i = 1;
    for (i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl
         << i; // ERROR - ('i' is declared inside the scope)  ...but id access the value of i in other func ..
    return 0;  // IT WILL CAUSE ERROR AS I WILL FALL OUTSIDE THE SCOPE
}