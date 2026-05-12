#include <iostream>
using namespace std;
bool isSymetrical(int num)
{
    int original = num;
    int digit1 = num % 10;
    num = num / 10;
    int digit2 = num % 10;
    num = num / 10;
    int digit3 = num % 10;
    int reverse = digit1 * 100 + digit2 * 10 + digit3;
    return reverse == original;
}
int main()
{
    int number;
    cout << "Enter a num:";
    cin >> number;
    if (isSymetrical(number))
    {
        cout << "true:";
    }
    else
    {
        cout << "false:";
    }
}