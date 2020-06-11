// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/

#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int stringSum = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 97 && s[i] <= 122) {
            stringSum += s[i] - 96;
        }
    }
    cout << stringSum;
    return 0;
}
