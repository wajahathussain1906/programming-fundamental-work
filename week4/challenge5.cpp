#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= '0' && ch <= '9')
    {
        cout << "number";
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "vowel number";
    }
    else
    {
        cout << "constant number";
    }
}
