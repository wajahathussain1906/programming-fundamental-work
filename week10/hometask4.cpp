#include <iostream>
using namespace std;
string calculatePoolVolume(int v, int P1, int P2, float H)
{
    float totalwater = (P1 + P2) * H;
    if (totalwater <= v)
    {
        int poolPercentage = (totalwater / v) * 100;
        int pipe1percentage = (P1 * H / totalwater) * 100;
        int pipe2percentage = (P2 * H / totalwater) * 100;
        return "Pool is " + to_string(poolPercentage) + "% full. Pipe 1:" + to_string(pipe1percentage) + "%, Pipe 2:" + to_string(pipe2percentage) + "%.";
    }
    else
    {
        int overflow = totalwater - v;
        return "for " + to_string(H) + " hours Pool overflowed with " + to_string(overflow) + " liters.";
    }
}
int main()
{
    int v, P1, P2;
    float H;
    cout << "Enter pool volume (liters): ";
    cin >> v;
    cout << "Enter pipe 1 flow rate (liters/hour): ";
    cin >> P1;
    cout << "Enter pipe 2 flow rate (liters/hour): ";
    cin >> P2;
    cout << "Enter hours : ";
    cin >> H;
    cout << calculatePoolVolume(v, P1, P2, H);
}