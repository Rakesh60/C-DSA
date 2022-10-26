#include <iostream>

using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter the length and breadth" << endl;
    cin >> length >> breadth;

    int rectangle = length * breadth;
    cout << "area of rectangle = " << rectangle;

    return 0;
}