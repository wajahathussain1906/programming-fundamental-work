#include <iostream>
using namespace std;
string ones[] = {
    "", "One", "Two", "Three", "Four",
    "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Eleven", "Twelve", "Thirteen",
    "Fourteen", "Fifteen", "Sixteen",
    "Seventeen", "Eighteen", "Nineteen"};

string tens[] =
    {
        "", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string conver(int num)
{
    if (num < 20)
    {
        return ones[num];
    }
    else
    {
        cout << tens[num / 10] + ones[num % 10];
    }
}
int main()
{
    int number;
    cout << "Enter a number between 1 and 99:";
    cin >> number;
    cout << conver(number);
}