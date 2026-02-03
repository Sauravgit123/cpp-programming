#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v(5);
    // cout << "Enter the elements in vector : ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> v[i];
    // }

    // cout << "Enter the elements in vector : ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // or if the size of the vector is not mentioned
    vector<int> v1;
    cout << "Enter the elements in vector : ";
    for (int i = 0; i < 5; i++)
    {
        int e;
        cin >> e;
        v1.push_back(e);
    }
    for (int i = 0; i < v1.size(); i++) // USING NORMAL FOR LOOP
    {
        cout << v1[i] << " ";
    }
    cout << endl; // USING FOR-EACH LOOP
    for (int e : v1)
        cout << e << " ";
    cout << endl;
    int j = 0;
    while (j < v1.size()) // USING WHILE LOOP
    {
        cout << v1[j] << " ";
        j++;
    }
    cout << endl;
    v1.insert(v1.begin() + 1, 55);
    v1.erase(v1.end() - 1);
    int k = 0;
    while (k < v1.size())
    {
        cout << v1[k] << " ";
        k++;
    }
    return 0;
}