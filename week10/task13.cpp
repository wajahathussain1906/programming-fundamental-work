#include<iostream>
using namespace std;
string OldishorEvenish(int num){
    int sum =0;
    while(num>0){
        sum+=num%10;
        num = num/10;

    } 
    if(sum %2 == 0){
        cout<<"Evenish:";
    }else{
        cout<<"Oldish:";
    }
}
int main(){
    int number;
    cout<<"Enter five digit number:";
    cin>>number;
    cout<<OldishorEvenish(number);

}