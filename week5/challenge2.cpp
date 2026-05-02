#include<iostream>
using namespace std;
int main(){
    int num, digit, count=0;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Enter digit to find:";
    cin>>digit;
    while(num > 0){
       if(num % 10 ==  digit){
        count++;
       } num =num /10;
    } cout<<"frequency ="<< count;
}