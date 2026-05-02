#include <iostream>
using namespace std;
int main()
{
    int choise;
    double a, b;
    while (true)
    {
        cout << "\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Exit\nEnter your choise:" << endl;
        cin >> choise;
        if (choise == 5)
        {
            cout << "Exiting the program. Thank you!" << endl;
            break;
        }
        cout << "Enter two numbers:" << endl;
        cin >> a >> b;

        if (choise == 1)
        {
            cout << "Result: " << a + b << endl;

        }
        else if (choise == 2)
        {
            cout << "Result: " << a - b << endl;            
        }
        else if (choise == 3)
        {
            cout << "Result: " << a * b << endl;
            break;
        }
        else if (choise == 4){
            cout << "Result: " << a / b << endl;
        break;
    }
    else if (choise == 5)
    {
        cout << "Exiting the program. Thank you!" << endl;
        break;
    }
    else
    {
        cout << "Invalid choise!" << endl;
    }
}
