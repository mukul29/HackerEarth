// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/city-travel-59bad87f/

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
        cout << "***outside" << remainingDistance << "***" << endl;
        cout << "it->first " << it->first << endl;

        if(remainingDistance <= (long long)X * daysBetween) {
            cout << "***inside" << remainingDistance << "***" << endl;
            cout << "***inside" << daysBetween << "***" << endl;
            days += (int)(ceil)((float)remainingDistance / X);
            cout << "***inside" << days << "***" << endl;
            remainingDistance = 0;
            cout << "inside" << endl;
            break;
        }

        remainingDistance -= (long long)X * daysBetween + it -> second;
        cout << (remainingDistance <= 0 ? "***FINAL HERE***" : "t") << endl;
        prevException = it->first;
        days = it->first;
    }
    cout << "last remain " << remainingDistance << endl;
    cout << "***" << days << "***" << endl;
    
    if(it == exceptions.end()) {
        cout << "XXX" << endl;
    }
    cout << "please " << (int)((ceil)((double) remainingDistance / X ))<< endl;
    days += (remainingDistance > 0 ? (int) ((ceil)((float)remainingDistance / X)) : 0);
    cout << "***" << days << "***" << endl;

    cout << ++days;
    return 0;
}
