#include <iostream>
using namespace std;

int main() {
    double x = 0, y = 20;

    // keep looping until y drops below 6
    do {
        y -= 4;
        x += 2.0 / y;
    } while (y >= 6);

    cout << "x = " << x << endl;

    return 0;
}
