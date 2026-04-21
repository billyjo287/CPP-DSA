#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int absoluteDistinctCount(const vector<int>& A) {
    int left = 0;
    int right = A.size() - 1;

    int count = 0;
    int last = -1; // track last counted absolute value

    while (left <= right) {
        int leftAbs = abs(A[left]);
        int rightAbs = abs(A[right]);

        int current;

        if (leftAbs > rightAbs) {
            current = leftAbs;
            left++;
        } else if (leftAbs < rightAbs) {
            current = rightAbs;
            right--;
        } else {
            current = leftAbs;
            left++;
            right--;
        }

        if (current != last) {
            count++;
            last = current;
        }
    }

    return count;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A(n);

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int result = absoluteDistinctCount(A);

    cout << "Absolute distinct count: " << result << endl;

    return 0;
}