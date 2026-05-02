#include <iostream>
using namespace std;

bool check(string word, char letter)
{
    bool isfound = false;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            isfound = true;
            break;
        }
    }
}
main()
{
    string word;
    char letter;
    cout << "Enter a word:";
    cin >> word;
    cout << "Enter a character you want to find:";
    cin >> letter;
    if (check(word, letter))
    {
        cout <<  letter << " is found in:" << word;
    }
    else
    {
        cout <<  letter << " is not foundin:" << word;
    }
}