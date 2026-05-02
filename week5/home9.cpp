#include <iostream>
using namespace std;

int main() {
    double money;
    int year;

    cin >> money >> year;

    int age = 18;
    double totalSpent = 0;

    for (int i = 1800; i <= year; i++) {
        if (i % 2 == 0) {
            totalSpent += 12000;
        } else {
            totalSpent += 12000 + 50 * age;
        }
        age++;
    }

    if (money >= totalSpent) {
        cout << "Yes! He will live a carefree life and will have "
             << (money - totalSpent) << " dollars left.";
    } else {
        cout << "He will need " << (totalSpent - money)
             << " dollars to survive.";
    }

    return 0;
}