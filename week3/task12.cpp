#include<iostream>
using namespace std;
int main(){
    long long pop, rate, futurepop;
    cout<<"enter the current population:";
    cin>>pop;
    cout<<"enter monthly birth rate:";
    cin>>rate;
    futurepop = pop +(rate *360);
    cout<<"the population three decades will be:"<<futurepop;
}