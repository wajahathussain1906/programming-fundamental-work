#include <iostream>
using namespace std;
bool isSpecial(int arr[], int size)
{    
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 != 0)
            return false;
        if (i % 2 != 0 && arr[i] % 2 != 1)
            return false;
    }
    return true;
}
int main()
{   
    int n;
    cout <<"enter a number:";
    cin >> n;
    cout<<"Enter a number:";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isSpecial(arr, n))
        cout << "true";
    else
        cout << "false";
}