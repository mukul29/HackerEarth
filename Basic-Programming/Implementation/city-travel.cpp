// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/city-travel-59bad87f/

// BUG: not all test cases passed
#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

bool compareKeys(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    // S : int => distance between city A and B
    // X : int => distance travelled each day
    // N : int => number of exceptions
    int S, X, N;
    cin >> S >> X >> N;

    vector<pair<int, int>> exceptions(N);
    // Ti : int => day number
    // Yi: int => distance travelled on Ti day 

    int Ti;
    int Yi;
    for (int i = 0; i < N; i++) {
        cin >> Ti;
        cin >> Yi;
        exceptions[i] = pair<int, int>(Ti-1, Yi);
    }

    sort(exceptions.begin(), exceptions.end(), compareKeys);

    long long remainingDistance = S;
    vector<pair<int, int>>::iterator it;

    int prevException = -1;
    long days = 0;
    for(it = exceptions.begin(); it != exceptions.end() && remainingDistance > 0; it++) {
        int daysBetween = it->first - (prevException + 1);

        if(remainingDistance <= (long long)X * daysBetween) {
            days += (int)(ceil)((float)remainingDistance / X);
            remainingDistance = 0;
            break;
        }

        remainingDistance -= (long long)X * daysBetween + it -> second;
        prevException = it->first;
        days = it->first + 1;
    }
    
    days += remainingDistance > 0 ? (int) ((ceil)((float)remainingDistance / X)) : 0;

    cout << days;
    return 0;
}
