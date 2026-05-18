#include <iostream>
using namespace std;
string fire(char grid[5][5], string pos)
{
    int row = pos[0] - 'A';
    int col = pos[1] - '1';
    if (grid[row][col] == '*')
        return "BOOM";
    else
        return "splash";
}
int main()
{
    char grid[5][5] = 
        {
            {'.', '.', '.', '*', '*'},
            {'.', '*', '.', '.', '.'},
            {'.', '*', '.', '.', '.'},
            {'.', '*', '.', '.', '.'},
            {'.', '.', '*', '*', '.'}
        };

    string input;
    cout << "Enter the position to fire (e.g., A1, B3): ";
    cin >> input;

    cout << fire(grid, input);
}