#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;

    cout << "Enter radius: ";
    cin >> r;

    double volume = (4.0 / 3.0) * M_PI * pow(r, 3);

    cout << "Volume of sphere: " << volume << endl;

    return 0;
}