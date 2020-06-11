// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/distribute-chocolates-70c2c2ab/description/

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int numCases;
    cin >> numCases;

    long long c;
    long long n;

    for (int i = 0; i < numCases; i++) {
        cin >> c;
        cin >> n;
        int minimum = numeric_limits<int>::max();
        int result = -1;
        long long currentSum;
        long long remainingChocolates = c;
        long long k = (floor)(( c - (n*(n - 1)) / 2.0 ) / n);
        currentSum = n * k + n * (n - 1) / 2;
        if(currentSum <= c && k > 0) {
            remainingChocolates = c - (n * k + n * (n - 1) / 2);
        }

        cout << remainingChocolates << endl;
    }
    return 0;
}
