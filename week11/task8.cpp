#include <iostream>
using namespace std;
void largestColumFirst(int arr[][5], int rows)
{
    int maxsum = 0, index = 0;
    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            index = j;
        }
    }
    for(int i=0;i<rows;i++)
    {
        swap(arr[i][0],arr[i][index]);
    }
    cout<<"The largest column is "<<index+1<<" with sum "<<maxsum<<endl;
    cout<<"The new array is "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
        largestColumFirst(arr, 4);
}