#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    int arr[n];
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (isAlreadyEntered(arr, i,num))
        {
            cout << "Alredy entered" << num<<endl;
            i--;
        }
        else
        {
            arr[i] = num;
        }
    }
    cout << "Final Array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
