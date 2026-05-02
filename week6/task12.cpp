#include <iostream>
using namespace std;
float totalresistance(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter a no of resistor:";
    cin >> n ;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total resistance =" << totalresistance(arr, n);
}