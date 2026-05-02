#include <iostream>
using namespace std;
int main()
{
    int arr1[2], arr2[100];
    int n;
     cout <<"enter two :";

     cin >> arr1[0] >> arr1[1];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << arr1[0] << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << arr1[1];
}