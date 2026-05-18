#include <iostream>
using namespace std;
void printToyataBlue(string car[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        if (car[i][0] == "Toyata" && car[i][1] == "Blue")
        {
            cout << car[i][0] << " " << car[i][1] << endl;
        }
    }
}
int countRed(string car[][3], int rows)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (car[i][1] == "Red")
            count++;
    }
}
int countNissan(string car[][3], int rows)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (car[i][0] == "Nissan")
            count++;
    }
}
int converter(string car[][3], int rows, string color)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (car[i][1] == color)
            count++;
    }
}
void transpose(string car[][3], int rows)
{
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << car[i][j] << " \t";
        }
        cout << endl;
    }
}
int main()
{
    string car[4][3] = {{"Toyata", "blue", "2020"},
                        {"Honda", "Red", "2022"},
                        {"Nissan", "Red", "2022"},
                        {"Toyata", "Blue", "2022"}};
    printToyataBlue(car, 4);
    cout << "Blue toyata:" << countRed(car, 4) << endl;
    cout << "Nissan cars:" << countNissan(car, 4) << endl;
    cout << "Sum:" << converter(car, 4, "Red, Blue, Green") << endl;
    cout << "Transposed:" << endl;
    transpose(car, 4);
}