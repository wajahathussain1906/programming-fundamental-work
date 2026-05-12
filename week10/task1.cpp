#include <iostream>
using namespace std;

void add(int number1, int number2)
{
    int sum = 0;
    sum = number1 + number2;
    cout << "sum is :" << sum;
}

int main()
{

    int number1, number2;
    cout << "Enter number01:";
    cin >> number1;
    cout << "Enter number02:";
    cin >> number2;
    add(number1, number2);
    return 0;
}
