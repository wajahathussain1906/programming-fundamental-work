#include <iostream>
using namespace std;
void counteven(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    cout << "total even numbers :" << count << endl;
}
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     counteven(arr, n);
}