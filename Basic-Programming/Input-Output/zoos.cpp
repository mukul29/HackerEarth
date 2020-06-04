// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

#include <iostream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    int zCount = 0;
    int oCount = 0;
    bool switched = false;
    for(int i = 0; i < input.length(); i++) {
        if(i != 0 && input[i-1] != input[i]) {
            switched = true;
        }
        if(!switched) {
            zCount++;
        } else {
            oCount++;
        }
    }
    if(2 * zCount == oCount) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
