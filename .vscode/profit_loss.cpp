#include <iostream>

using namespace std;
int main()
{
    int cp, sp;
    int profit, loss;
    cout << "Enter the Cost Price" << endl;
    cin >> cp;
    cout << "Enter the Selling price" << endl;
    cin >> sp;
    profit = sp - cp;
    loss = cp - sp;
    if (profit > loss)
    {
        cout << "Profit = " << profit;
    }
    else
        cout << "Loss =" << loss;

    return 0;
}