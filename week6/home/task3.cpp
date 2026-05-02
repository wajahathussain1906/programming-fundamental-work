#include <iostream>
using namespace std;
void findMaxMin(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Largest no" << max << endl;
    cout << "Smallest no" << min << endl;
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " number" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findMaxMin(arr, n);
}