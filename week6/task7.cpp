#include <iostream>
using namespace std;

void displaycharacters(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        cout << " character" <<  word [i] << " position" << i << endl;
    }
}
int main()
{
    string userWord;
    cout << "Enter a word" << endl;
    cin >> userWord;
    displaycharacters(userWord);
}
