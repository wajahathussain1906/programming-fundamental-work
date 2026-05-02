#include <iostream>
using namespace std;
void nextletter(string str)
{
    for(int i=0; i < str.length(); i++){
        if (str[i] == 'z')
            str[i] = 'a'; 
            else 
            str[i] = str[i] + 1;
    }
    cout<<"output:"<<str;
}

int main()
{
    string str;
    cout << "Enter a string:";
    cin >> str;
    nextletter(str);
}