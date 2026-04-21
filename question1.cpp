#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Enter number of days: ";
    cin >> days;

    long long seconds = days * 24LL * 60 * 60;

    cout << "The number of seconds in " << days << " days is: " << seconds << " seconds" << endl;

    return 0;
}