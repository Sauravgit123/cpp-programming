#include <iostream>
using namespace std;

int main()
{
    // char arr[10] = {'s', 'a', 'u', 'r', 'a', 'v'};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i];
    // }
    // cout << endl;
    // string str = "my name is saurav";
    // cout << str << endl;

    // int a, b;
    // cout << endl
    //      << "enter a and b : ";
    // cin >> a >> b; // example -1 space 2 ....input of a ends when space is entered and moves to next input
    // cout << a << b;

    // string s;
    // cout << "Enter the string : ";
    // getline(cin, s); // now input is taken with space also
    // cout << s;

    //  INDEXING IN STRINGS
    string s1 = "coding";
    cout << s1 << endl;
    cout << s1[0] << endl; // accessing char in string
    s1[0] = 'm';           // UPDATING
    cout << s1 << endl
         << s1.length() << endl;

    char s2 = '\0'; // NULL CHARACTER WHOSE ASCAII VALUE IS 0  ->tells where the string is ending
    cout << (int)s2;
    return 0;
}