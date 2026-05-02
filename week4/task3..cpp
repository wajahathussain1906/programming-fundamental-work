#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Please enter your name:"<<endl;
    cin >> name;
    if (name == "ali")
    {
        cout << "welcome" ;
    } else{
        cout<<"Try again";
    }
}