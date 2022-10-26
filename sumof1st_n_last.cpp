#include <iostream>

using namespace std;

int main()
{
    int n, first, second, third, fourth, fifth;
    n = 12345;
    first = n / 10000;
    n = n % 10000;
    second = n / 1000;
    n = n % 1000;
    third = n / 100;
    n = n % 100;
    fourth = n / 10;
    n = n % 10;
    fifth = n / 1;
    int sum = first + fifth;
    cout << sum;
    return 0;
}