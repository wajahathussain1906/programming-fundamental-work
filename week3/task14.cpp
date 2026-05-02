#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout<< "Enter 1st number: ";
    cin >> num;
    sum += num;
    cout << "Enter 2nd number: ";
    cin >> num;
    sum += num;
    cout << "Enter 3rd number: ";
    cin >> num;
    sum += num;
    cout << "Enter 4th number: ";
    cin >> num;
    sum += num;
    cout << "Enter 5th number: ";
    cin >> num;
    sum += num;
    cout << "Sum is: " << sum << endl;
    return 0;
}