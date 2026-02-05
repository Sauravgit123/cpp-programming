#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortt(vector<int> &v)
{

    vector<int> nv(v.size());

    int l = 0, r = v.size() - 1;
    int k = v.size() - 1;
    while (l <= r)
    {
        if (abs(v[l]) > abs(v[r]))
        {
            nv[k] = (v[l] * v[l]);
            l++;
        }
        else
        {
            nv[k] = (v[r] * v[r]);
            r--;
        }
        k--;
    }
    cout << endl
         << "Output Vector :";
    for (int i = 0; i < nv.size(); i++)
    {
        cout << nv[i] << " ";
    }
    return;
}
int main()
{
    // Arrange the sq. of elements present in the array in sorted form

    // int n;
    // cout << "Enter the size of vector :";
    // cin >> n;

    // vector<int> v;
    // cout << "Enter the elements : ";
    // for (int i = 0; i < n; i++)
    // {
    //     int el;
    //     cin >> el;
    //     v.push_back(el);
    // }
    // cout << "Given Vector :";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     v[i] = v[i] * v[i];
    // }

    // sort(v.begin(), v.end());
    // // In a technical interview, they are looking for the Two-Pointer approach
    // // because it runs in O(n) time, whereas std::sort runs in O(n \log n) time.

    // cout << endl
    //      << "Output Vector :";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // USING DOUBLE POINTER

    int n;
    cout << "Enter the size of vector :";
    cin >> n;

    vector<int> v;
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        v.push_back(el);
    }
    cout << "Given Vector :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    sortt(v);
    // cout << endl
    //      << "Output Vector :";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    return 0;
}