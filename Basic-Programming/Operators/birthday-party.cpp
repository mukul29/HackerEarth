// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/

#include <iostream>

using namespace std;

int main() {
    int numCases;
    cin >> numCases;
    
    int numFriends;
    int numChocolates;
    for(int i = 0; i < numCases; i++) {
        cin >> numFriends;
        cin >> numChocolates;

        cout << (numChocolates % numFriends ? "No" : "Yes") << endl;
    }
    return 0;
}
