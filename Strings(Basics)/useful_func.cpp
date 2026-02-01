#include <iostream>
#include <string>
#include <algorithm> //
using namespace std;

int main()
{
    string a = "developer";
    cout << a << endl;
    a.push_back('a');
    cout << a << endl; // a is concatenated to the string from back
    a.pop_back();      // last character is removed from the string
    cout << a << endl;
    a.append(" code"); // appending string to a string
    cout << a << endl;
    // a.clear(); // amkes the string empty
    // cout << "Empty : " << a.length() << endl;

    a = a + " extra"; // appended using + operator
    cout << a << endl;
    // reverse(a.begin(), a.end());
    // cout << a << endl;
    reverse(a.begin(), a.begin() + 3); // 1st 3 char are reversed
    cout << a << endl;

    int x = 45354;
    string s = to_string(x); //
    s = s + "ok";
    cout << s << endl;
    ;

    string w = "2345";
    int c = stoi(w);
    cout << c + 1;
    return 0;
}