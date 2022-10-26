#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    float sum, difference, product, division;
    cout << "Enter the value of Num1 and Num2" << endl;
    cin >> num1 >> num2;
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = num1 / num2;
    cout << "sum= " << sum << endl;
    cout << "difference= " << difference << endl;
    cout << "product= " << product << endl;
    cout << "division= " << division << endl;

    return 0;
}