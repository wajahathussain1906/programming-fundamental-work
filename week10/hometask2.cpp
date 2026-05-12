#include <iostream>
using namespace std;
string pyramidvolune(float l, float w, float h, string unit)
{
    float volumeMeters = (l * w * h) / 3;
    if (unit == "millimeters")
        volumeMeters *= 1000000000;
    else if (unit == "centimeters")
        volumeMeters *= 1000000;
    else if (unit == "kilometers")
        volumeMeters /= 1000000000;
       return to_string(volumeMeters) + "cubic"+unit;
}
main()
{
    float l, w, h;
    string unit;
    cout << "Enter the length, width, height :";
    cin>>l>>w>>h;
    cout << "Enter units millimeter, kilometer, centimeter:";
    cin>>unit;
    cout<<pyramidvolune(l,w,h,unit);
}