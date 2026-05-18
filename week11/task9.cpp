#include <iostream>
using namespace std;
int countIdenticalArrrys(int arr[][3], int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][0] == arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] == arr[j][2])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[4][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {1, 2, 3},
        {1, 2, 3}};
    cout << "Identical pairs" << countIdenticalArrrys(arr, 4);
}