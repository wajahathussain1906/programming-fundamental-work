#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, discriminant, root1, root2;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter c:";
    cin>>c;
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real root:" << root1 << "and" << root2;
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        cout << "One real root:" << root1;
    }
    else
    {
        cout << "complex root:";
    }
}