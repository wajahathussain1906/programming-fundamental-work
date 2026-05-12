
#include <iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, float H)
{
    float totalWater = (P1 + P2) * H;

    if (totalWater <= V)
    {
        int poolPercent = (totalWater / V) * 100;

        int pipe1Percent = ((P1 * H) / totalWater) * 100;

        int pipe2Percent = ((P2 * H) / totalWater) * 100;

        return "The pool is " + to_string(poolPercent) + "% full. Pipe 1: " + to_string(pipe1Percent) + "%. Pipe 2: " + to_string(pipe2Percent) + "%.";
    }
    else
    {
        float overflow = totalWater - V;

        return "For " + to_string(H) + " hours the pool overflows with " + to_string(overflow) + " liters.";
    }
}

int main()
{
    int V, P1, P2;
    float H;

    cout << "Enter pool volume: ";
    cin >> V;

    cout << "Enter pipe1 flow rate: ";
    cin >> P1;

    cout << "Enter pipe2 flow rate: ";
    cin >> P2;

    cout << "Enter hours: ";
    cin >> H;

    cout << calculatePoolState(V, P1, P2, H);

    return 0;
}