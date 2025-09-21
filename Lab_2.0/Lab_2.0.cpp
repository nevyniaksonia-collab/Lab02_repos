
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

int main()
{

    double degrees;
    cout << "Enter value angle: ";
    cin >> degrees;
    double radians = degrees * PI / 180;

    double z1 = 2 * pow(sin(3 * PI - 2 * degrees), 2) * pow(cos(5 * PI + 2 * degrees), 2);
    double z2 = 1.0 / 4.0 - (1.0 / 4.0) * sin((5.0 / 2.0) * PI - 8 * degrees);
    cout << endl;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;

}