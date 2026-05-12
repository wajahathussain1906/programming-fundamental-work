#include <iostream>
using namespace std;
int myfunction(int number)
{
    int total;
    total = number * 5;

}
int main()
{
    int num, result;
    cout << "Enter num:";
    cin >> num;
    result = myfunction(num);
    cout<<"Result "<< result ;
}