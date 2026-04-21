#include <iostream>
using namespace std;

void checkCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        cout << "Uppercase letter" << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "Lowercase letter" << endl;
    } else {
        cout << "Not a letter" << endl;
    }
}

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;

    checkCase(c);

    return 0;
}