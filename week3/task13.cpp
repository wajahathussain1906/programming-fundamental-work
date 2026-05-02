#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a 4-digit number: ";
    cin >> num;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    cout << "Sum of the individual digits: " << sum << endl;
    return 0;
}
