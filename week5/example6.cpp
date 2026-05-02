#include<iostream>
using namespace std;
int main(){
    int value;
    cout<<"Please enter a positive number:"<<endl;
    cin>>value;
    while( value<=0){
        cout<<"Error :"<< value <<" is not a positive nummber"<<endl;
        cout<<"Enter a positive value:"<<endl;
        cin>>value;
    }cout<<"Program end";
}