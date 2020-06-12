// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/

#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int min = a[0];
    int totalSteps = 0;
    bool allEqual = true;
    while(1) {
        for (int i = 0; i < n; i++) {
            allEqual = true;
            if (a[i] < b[i] && a[i] > min) {
                cout << "-1";
                return 0;
            }

            if(a[i] == min) {
                continue;
            }

            allEqual = false;
            
            if (a[i] < min) {
                min = a[i];
                continue;
            }

            int difference = a[i] - min;
            int steps;
            if (difference % b[i] == 0) {
                steps = difference / b[i];
            } else {
                steps = (int)( (ceil)( (float) difference / b[i] ) );
                min = a[i];
            }

            a[i] -= b[i] * steps;
            totalSteps += steps;
        }

        if(allEqual) {
            break;
        }
    }

    cout << totalSteps;

    delete[] a;
    delete[] b;
    return 0;
}
