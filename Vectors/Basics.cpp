#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // dynamic arrays (can be resize..alter the size of arrays)  contiguous m/m allocation

    vector<int> v; //   OR vector <int> v1(size);
                   // v.size()--> return the length of the vector
                   // v.resize(new size)..change the size of vector
                   // v.capacity()-->The total amount of space currently allocated in memory
                   //  capacity >=size  (capacity increases in the power of 2 or it is compiler dependent)
                   // v.pushback(element)-->add elements
                   // v.insert(position,element)--> position is relative to position of 1st element
    // v.begin()  and v.end()--> find position of 1st element and where the vector ends
    // delete elements from back  v.pop_back()
    //  v.erase(position)--> to remove the element from any position
    // v.clear() --> to remove all elements from the vector

    v.push_back(2);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(3);
    v.push_back(4);

    v.resize(5);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.pop_back();
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    return 0;
}