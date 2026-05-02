#include<iostream>
using namespace std;
int main(){
    string country;
    double price;
    double discoutPice;
    cout<<"Enter the country name:";
    cin>>country;
    cout<<"Enter the price:";
    cin>>price;
    if(country == "Pakistan"){
        discoutPice = price * .10;
    }else{
        discoutPice =price * .05;
    } price = price - discoutPice;
    cout<<"discounted price"<< price <<endl;

}