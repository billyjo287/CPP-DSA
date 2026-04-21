#include <iostream>
using namespace std;

double area(double side) {
    return side * side;
}

double perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter side length: ";
    cin >> side;

    cout << "The area is equal to: " << area(side) << endl;
    cout << "The perimeter is equal to: " << perimeter(side) << endl;

    return 0;
}