#include <iostream>
using namespace std;

void checkCase(char c) {
    // isupper/islower only make sense for letters
    if (!isalpha(c)) {
        cout << "'" << c << "' is not a letter." << endl;
        return;
    }

    if (isupper(c))
        cout << "'" << c << "' is uppercase." << endl;
    else
        cout << "'" << c << "' is lowercase." << endl;
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    checkCase(ch);

    return 0;
}
