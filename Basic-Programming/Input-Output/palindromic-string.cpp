// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

#include <iostream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    for(int i = 0; i < input.length() / 2; i++) {
        if(input[i] != input[input.length() - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
