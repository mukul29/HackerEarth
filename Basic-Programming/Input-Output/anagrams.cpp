// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/

#include <iostream>
#include <cstdint>
#include <cmath>

using namespace std;

void clearArray(uint8_t a[], int size) {
    for(int i = 0; i < size; i++) {
        a[i] = 0;
    }
}

int main() {
    const int CHAR_MAX = 96;
    const int CHAR_LOWER_LIMIT = 32;
    const int CHAR_UPPER_LIMIT = 127;
    int numCases;
    cin >> numCases;
    cin.ignore();

    uint8_t a[CHAR_MAX];
    uint8_t b[CHAR_MAX];

    string input1;
    string input2;
    for(int i = 0; i < numCases; i++) {
        clearArray(a, CHAR_MAX);
        clearArray(b, CHAR_MAX);
        getline(cin, input1);
        getline(cin, input2);
        
        for(int j = 0; j < input1.length(); j++) {
            if(input1[j] >= CHAR_LOWER_LIMIT && input1[j] <= CHAR_UPPER_LIMIT) {
                a[input1[j] - CHAR_LOWER_LIMIT]++;
            }
        }

        for(int k = 0; k < input2.length(); k++) {
            if(input2[k] >= CHAR_LOWER_LIMIT && input2[k] <= CHAR_UPPER_LIMIT) {
                b[input2[k] - CHAR_LOWER_LIMIT]++;
            }
        }

        int result = 0;
        for(int x = 0; x < CHAR_MAX; x++) {
            result += (int) abs(a[x] - b[x]);
        }
        cout << result << endl;
    }
    return 0;
}
