#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // FIND THE LAST OCCURENCE OF A ELEMENT X IN THE VECTOR

    // vector<int> v(6);
    // cout << "Enter the elements :";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    // int x;
    // cout << "Enter the element x :";
    // cin >> x;
    // int pos = -1;
    // for (int i = v.size() - 1; i >= 0; i--)
    // {
    //     if (v[i] == x)
    //     {
    //         pos = i;
    //         break;
    //     }
    // }
    // if (pos == -1)
    // {
    //     cout << "Element x not there in the vector " << endl;
    //     ;
    // }

    // else
    //     cout << "Last occurence of element x is in index: " << pos << endl;
    // int c = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == x)
    //     {
    //         c++;
    //     }
    // }
    // cout << "Number of x : " << c << endl;

    // verify that the array/vector is sorted or not
    vector<int> v(6);
    cout << "Enter the elements :";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int f = -1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] >= v[i - 1])
            continue;
        else
        {
            f = 1;
            break;
        }
    }

    if (f == -1)
    {
        cout << "Sorted" << endl;
    }
    else
        cout << "Unsorted " << endl;

    return 0;
}