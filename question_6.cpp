#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double values[SIZE];
    double sum = 0;

    // collect 5 values from the user
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> values[i];
        sum += values[i];
    }

    cout << "Average = " << sum / SIZE << endl;

    return 0;
}
