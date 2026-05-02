#include <iostream>
using namespace std;
int sumcalculator(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    int arr[n];
    cout << "enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sum of all element :" << sumcalculator(arr, n) << endl;
}