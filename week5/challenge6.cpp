#include <iostream>
using namespace std;

int main()
{
    int pin, balance = 1000, choice, amount;

    // PIN check
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter PIN: ";
        cin >> pin;

        if(pin == 1234)
        {
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Wrong PIN\n";
        }

        if(i == 3)
        {
            cout << "Card Blocked\n";
            return 0;
        }
    }

    while(true)
    {
        cout << "\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Balance = " << balance << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
        }
        else if(choice == 3)
        {
            cout << "Enter amount: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
            }
            else
            {
                cout << "Insufficient Balance\n";
            }
        }
        else if(choice == 4)
        {
            break;
        }
    }
}