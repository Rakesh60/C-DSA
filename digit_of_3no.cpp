#include <iostream>

using namespace std;
int main()
{
    int first, second, third;
    int n = 524;
    first = n / 100;
    n = n % 100;
    second = n / 10;
    n = n % 10;
    third = n / 1;
    n = n % 1;
    int sum = first + second + third;
    cout << sum;

    return 0;
}