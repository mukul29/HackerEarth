// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/

#include <iostream>
#include <cmath>

using namespace std;

char closestMatch(char ch, const int* primeNumbers, size_t size) {
    int minDifference = ch - primeNumbers[0];
    int minIndex = 0;
    int difference;
    for (int i = 1; i < size; i++) {
        difference = abs(ch - primeNumbers[i]);
        if (difference < minDifference) {
            minDifference = difference;
            minIndex = i;
        }
    }
    return (char) primeNumbers[minIndex];
}

int main() {
    int numCases;
    cin >> numCases;

    // prime numbers in the range [65, 90] for ASCII values from A to Z and a-z
    // these are statically stored for fast access and the limited range
    int primeNumbers[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};

    // size isn't required when using c++ strings
    int _unused;
    string input;
    for(int i = 0; i < numCases; i++) {
        cin >> _unused;
        cin.ignore();
        getline(cin, input);

        string output(input.size(), 'a');
                
        for (int i = 0; i < input.size(); i++) {
            output[i] = closestMatch(input[i], primeNumbers, sizeof(primeNumbers) / sizeof(primeNumbers[0]));                        
        }
        cout << output << endl;
    }
    return 0;
}
