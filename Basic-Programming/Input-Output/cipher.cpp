// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/

#include <iostream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    string result(input.size(), ' ');
    int key;
    cin >> key;

    int letterRotateFactor = key % 26;
    int numberRotateFactor = key % 10;
    char ch;
    for(int i = 0; i < input.size(); i++) {
        ch = input[i];
        
        if(ch >= 65 && ch <= 90) {
            result[i] = (((ch - 65) + letterRotateFactor) % 26) + 65;

        } else if(ch >= 97 && ch <= 122) {
            result[i] = (((ch - 97) + letterRotateFactor) % 26) + 97;
        } else if(ch >= 48 && ch <= 57) {
            result[i] = (((ch - 48) + numberRotateFactor) % 10) + 48;
        } else {
            result[i] = input[i];
        }
    }
    cout << result << endl;
    return 0;
}
