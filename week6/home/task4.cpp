#include<iostream>
using namespace std;
int main(){
    string student[5];
    cout<<"enter 5 student name :"<<endl;
    for(int i=0;i<5;i++){
        cin>>student[i];
    }
    cout<<"the student names are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<student[i]<<endl;
    }
}