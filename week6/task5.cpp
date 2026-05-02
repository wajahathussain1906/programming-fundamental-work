#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int average =0;
    int number [5]={1,2,3,4,5};
    for (int i=0; i<5; i++)
    {
        sum = sum + number[i];
    }
    average =sum/5;
    cout <<"tne sum of first 5 natural numbers is: "<<sum<<endl;
    cout <<"the average of first 5 natural numbers is: "<<average<<endl;

}