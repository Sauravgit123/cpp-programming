#include <iostream>
using namespace std;

void change(int brr[])
{
    brr[2] = 11;
}
int main()
{
    int arr[4] = {2, 7, 8, 6};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr); // PASS BY REFERENCE in arrays (it goes by reference only...even if u change the array name in other func)
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    // we have seen that when dealing with variables it does not cause any change due to PASS BY VALUE ...but
    // In arrays we dont have any problem
    return 0;
}