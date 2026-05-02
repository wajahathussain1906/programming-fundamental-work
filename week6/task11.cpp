#include <iostream>
using namespace std;
int findlargestnumber(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter a no of element:";
    cin >> n;
    int arr[n];
    for (int i = 0;  i < n; i++)
    {
        cin >> arr[i];
    }
    int result = findlargestnumber(arr, n);
    cout << "Largest number =" << result;
}