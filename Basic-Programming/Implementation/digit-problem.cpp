// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/digit-problem/

#include <iostream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    size_t pos = input.find(" ");
    string X = input.substr(0, pos);
    int K = stoi(input.substr(pos+1, input.length()));

    for(int i = 0; i < (int)X.length() && K > 0; i++) {
        if(X[i] != '9') {
            X[i] = '9';
            K--;
        }
    }
    cout << X << endl;
    return 0;
}
