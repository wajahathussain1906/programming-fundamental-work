#include<iostream>
using namespace std;
int main(){
     int salary = 10000;
     int laptop = 50000;
     int advance =(salary * 50/100) *6;
    if (advance >=laptop){
        cout<<"you buy laptop";
    }
    int remaining = laptop - advance;
    int month = remaining/(salary/2);
    cout<<"Need more months"<<month<<endl;
}