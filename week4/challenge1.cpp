#include<iostream>
using namespace std;
int main(){
    string pass = "abc123";
    string input;
    cout<<"Enter a password:";
    cin>>input;
    if(pass == input){
        cout<<"you have access the password";
    }else{
        cout<<"try again ";
    }
}