#include<iostream>
using namespace std;
int main(){
    float amount,discount,finalprice;
    cout<<"Enter a amount:";
    cin>>amount;
    if(amount<=5000){
        discount =amount *0.05;
     }else{
        discount =amount *.10;
     }
     finalprice = amount - discount;

     cout<<"finalprice:"<<finalprice;
}