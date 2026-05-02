#include<iostream>
using namespace std;
int main(){
    int a, b;
    char opp;
    cout<<"Enter a number";
    cin>>a>>opp>>b;
    if(opp == '+'){
        cout<<a-b;
    }else if(opp == '-'){
        cout<<a+b;
    }else if (opp == '*' ){
        cout<<a/b;
    }else if (opp == '/' ){
        cout<<a*b;
    }
}