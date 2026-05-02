#include<iostream>
using namespace std;
int main()
{
  int number[5];
  for (int i=0; i<5; i=i+1){
  cout<<"Enter number ";
  cin>>number[i];

  }
  cout<<"the1stelement at number1:"<<number[0]<<endl;
  cout<<"the lastelement at number5:"<<number[4]<<endl;
}