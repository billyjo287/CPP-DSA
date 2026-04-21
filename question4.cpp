#include <iostream>
using namespace std;

void checkCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        cout << "It is an uppercase letter" << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "It is a lowercase letter" << endl;
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