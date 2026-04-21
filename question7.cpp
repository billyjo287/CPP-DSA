//
// Created by billy on 4/21/2026.
//

#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Enter number of days: ";
    cin >> days;

    long long seconds = days * 24LL * 60 * 60;

    cout << "Seconds in " << days << " days is: " << seconds << endl;

    return 0;
}