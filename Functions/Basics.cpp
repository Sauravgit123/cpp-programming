#include <iostream>
using namespace std;
void greet2();
// void greet()
// {

//     cout << "Happy Republic Day " << endl;
//     return;   // signifies that the function has been ended
// }
// void greet2()
// {

//     cout << "Happy Republic Day-77 " << endl;
//     return;
// }
// int main()
// {
//     cout << "main function" << endl;
//     ;
//     greet(); // Function Call
//     greet2();
//     return 0;

// MULTIPLE FUNCTIONS

void greet()
{

    cout << "Happy Republic Day " << endl;
    greet2();
    return; // signifies that the function has been ended
}
void greet2()
{

    cout << "Happy Republic Day-77 " << endl;
    return;
}
int main()
{
    cout << "main function" << endl;
    ;
    greet(); // Function Call

    return 0;
}