#include <iostream>
using namespace std;
char obj[5][5] = {{'-', '#', '-', '#', '-'},
                  {'-', '-', '-', '-', '-'},
                  {'#', '-', '#', '-', '-'},
                  {'-', '#', '#', '#', '-'},
                  {'#', '-', '-', '-', '-'}

};

bool gravity = false;
void displayworld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << obj[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void setgravitystatus(bool status)
{
    gravity = status;
}
void timetick(int t)
{
    while (t--)
    {
        if (gravity)
        {
            for (int i = 3; i >= 0; i--)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (obj[i][j] == '#' && obj[i + 1][j] == '- ')
                    {
                        swap(obj[i][j], obj[i + 1][j]);
                    }
                }
            }
        }
    }
}
int main()
{
    displayworld();
    setgravitystatus(true);
    timetick(3);
    displayworld();
}