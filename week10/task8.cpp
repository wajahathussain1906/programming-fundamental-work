#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double distance, angle, radians, height;
    cout<<"Enter distance of tree :";
    cin>>distance;
    cout<<"Enter angle in degree:";
    cin>>angle;
    radians = angle/57.2958;
    height = distance *radians;
    cout<<"height of tree"<<height;
}