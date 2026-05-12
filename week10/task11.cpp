#include<iostream>
using namespace std;
string checkalphabeticCase(char ch){
    if(ch =='A'){
        cout<<"yuo emtered capital letter A:";
    }else{
        cout<<"you entered small letter a:";
    }
} 
main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    checkalphabeticCase(ch);
}