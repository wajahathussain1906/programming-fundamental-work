#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a string";
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != "7")
        {
            arr[i] = arr[i] + "7";
        }
        cout << arr[i] << " ";
    }
}