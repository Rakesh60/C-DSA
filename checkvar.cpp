#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;

    cout << ((a < 50) && (a < b)) ? 0 : 1;

    return 0;
}