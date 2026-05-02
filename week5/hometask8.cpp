#include <iostream>
using namespace std;

int main() {
    int age;
    double machinePrice, toyPrice;
    
    cin >> age >> machinePrice >> toyPrice;

    int toys = 0;
    double money = 0;
    int evenMoney = 0;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            evenMoney += 10;
            money += evenMoney - 1; // brother takes 1
        } else {
            toys++;
        }
    }

    money += toys * toyPrice;

    if (money >= machinePrice) {
        cout << "Yes! " << (money - machinePrice);
    } else {
        cout << "No! " << (machinePrice - money);
    }

    return 0;
}