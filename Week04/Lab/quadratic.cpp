#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double discriminant, x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;

    discriminant = pow(b, 2) - (4 * a * c);

    x1 = (-b + sqrt(discriminant))/ (2 * a);

    x2 = (-b+ sqrt(discriminant))/ (2 * a);

    cout << x1 << endl;
    cout << x2 << endl;

    return 0;

}