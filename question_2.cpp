#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979;

    cout << "Enter the radius: ";
    cin >> radius;

    // pow() computes r^3, then apply the sphere volume formula
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "Volume of sphere = " << volume << endl;

    return 0;
}
