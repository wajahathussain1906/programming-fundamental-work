#include <iostream>
using namespace std;
int main()
{

    string str;
    cout << "enter a string:";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        char ch =str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            continue;
        }
          cout << ch;
    }
          

}