#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first Number " << endl;
    cin >> a;
    cout << "Enter a second Number" << endl;
    cin >> b;
    cout << "The value of A is :" << a << endl;
    cout << "The value of B is :" << b << endl;
    int c; // a=2 b=8
    c = a; // c------>2
    a = b; // a------>8
    b = c; // b------>2
    cout
        << "The value of A is after swap :" << a << endl;
    cout << "The value of B is after swap :" << b << endl;
}