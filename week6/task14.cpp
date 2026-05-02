#include <iostream>
using namespace std;
bool canPay(int coins[], float bill)
{
    float total = coins[0] * 0.25 + coins[1] * 0.10 + coins[2] * 0.05 + coins[3] * 0.01;
    if (total >= bill)
        return true;
    else
        return false;
}
int main()
{
    int coins[4];
    float bill;
    cout << "Enter quarters, dimes, nickels pennies:" ;
    for (int i = 0; i < 4; i++)
    {
        cin >> coins[i];
    }
    cout << "Enter a bill"<<endl;
    cin >> bill; 
    if (canPay(coins, bill))
        cout << "can pay";
    else
        cout << "cannot pay";
}