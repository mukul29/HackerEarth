// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/fitting-circles-c00a5be3/

#include <iostream>

using namespace std;

int main() {
    int numCases;
    cin >> numCases;

    int a, b;
    int numCircles = 0;
    for(int i = 0; i < numCases; i++) {
        cin >> a;
        cin >> b;

        numCircles = (a > b ? a / b : b / a);
        cout << numCircles << endl;
    }
    return 0;
}
