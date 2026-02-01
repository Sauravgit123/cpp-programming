#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Given" << s;

    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            s[i] = 'a';
    }
    cout << endl
         << "TNEW STRING  : " << s << endl
         << sizeof(s);

    return 0;
}