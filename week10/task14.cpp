#include<iostream> 
using namespace std; 
string timeTravel(int hour, int minute)
{
    minute +=15;
    if(minute>=60){
        hour++;
        minute-=60;
    }
    if(hour>=24){
        hour =0;
    }
   return  to_string(hour) +":"+ to_string(minute);

} 
int main(){
    int h, m;
    cout<<"Enter hour:";
    cin>>h;
    cout<<"Enter minute:";
    cin>>m;
    cout<<timeTravel(h, m);

}


