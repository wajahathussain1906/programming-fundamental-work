#include <iostream>
using namespace std;
void printSum(int arr[][3], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all elements is:" << sum << endl;
}
int main()
{
    int rows;
    cout << "Enter Rows:";
    cin >> rows;
    int arr[100][3];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    printSum(arr, rows);
}