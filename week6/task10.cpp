#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    for(int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }


}
int main(){
       int n;
       cout<<"Enter number of element:";
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)
       {
        cin>>arr[i];
       }
       reverseArray(arr,n);

}