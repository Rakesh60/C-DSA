#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num < 0)
    {
        num = -(num);
        cout << "Number" << num << endl;
    }
    else
        cout <<num;

    return 0;
}