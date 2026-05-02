#include <iostream>
using namespace std;
int main()
{
    char ch = 'y';
    while (ch == 'y')
    {
        cout << "I am a happy:" << endl;
        cout << "press y for continue or any key to exit" << endl;
        cin >> ch;
    }
}