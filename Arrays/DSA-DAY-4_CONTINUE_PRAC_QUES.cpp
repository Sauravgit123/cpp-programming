#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void arra(vector<int> &v)
{
    int l = 0, r = v.size() - 1;

    while (l < r)
    {
        if (v[l] % 2 != 0 && v[r] % 2 == 0)
        {
            int temp = v[l];
            v[l] = v[r];
            v[r] = temp;
            l++, r--;
        }
        if (v[l] % 2 == 0)
        {
            l++;
        }
        if (v[r] % 2 != 0)
        {
            r--;
        }
    }
}

int main()
{
    // ARRANGE THE ELEMENTS SO THAT EVEN NO. ARE AT BEG AND ODD ARE AT LAST
    int n;
    cout << "Enter the no. of elements : ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }
    cout << "Given vector : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    arra(v);
    cout << endl
         << "Output vector : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}