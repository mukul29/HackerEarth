// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/vowel-game-f1a1047c/

#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    long long numCases;
    cin >> numCases;
    cin.ignore();

    string input;
    for (long long i = 0; i < numCases; i++) {
        getline(cin, input);

        vector<long long> inputTransformed(input.length());
        vector<long long> occurrenceVector(input.length());
        for (long long i = 0; i < input.length(); i++) {
            char ch = input[i];
            switch(tolower(ch)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    inputTransformed[i] = 1;
                    break;
                default:
                    inputTransformed[i] = 0;
            }
        }
        long long prevElements = 0;
        long long numElements = input.length();
        long long index = 0;
        long long sum = 0;
        while(numElements > 1) {
            occurrenceVector[index] = prevElements + numElements;
            sum += occurrenceVector[index] * (inputTransformed[index] + inputTransformed[input.length() - index - 1]);
            numElements -= 2;
            prevElements = occurrenceVector[index];

            index++;
        }
        if(numElements == 1) {
            occurrenceVector[index] = prevElements + 1;
            sum += occurrenceVector[index] * inputTransformed[index];
        }
        cout << sum << endl;
    }
    
    return 0;
}
