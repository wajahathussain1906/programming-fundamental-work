#include<iostream>
using namespace std; 
int main(){
    int n1 = 0 , n2 = 1 , next;
    int n;
    cout<<"how many no you want to print:";
    cin>>n;
    cout<<n1<<" ,";
    cout<< n2;
    for(int i=0 ; i<n; i++){
        next = n1 + n2;
        cout<<", "<<next;
        n1 = n2; 
        n2 = next;
    }
}