// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/a-b-4/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string line;
    string reverseSum;
    int digitSum;
    int carry = 0;
    size_t pos;

    string num1, num2;
    string delimiter = " ";
    while(getline(cin, line)) {
        reverseSum = "";
        carry = 0;
        digitSum = 0;
        num1 = "";
        num2 = "";

        if(line.empty()) {
            break;
        }
        pos = line.find(delimiter);
        num1 = line.substr(0, pos);
        num2 = line.substr(pos+1, line.length());

        string shorterNumber = num1;
        string largerNumber = num2;
        if(num2.length() < num1.length()) {
            shorterNumber = num2;
            largerNumber = num1;
        }

        int smallNumberIndex = shorterNumber.length() - 1;
        int largeNumberIndex = largerNumber.length() - 1;
        for(; smallNumberIndex >= 0; smallNumberIndex--, largeNumberIndex--) {
            digitSum = (shorterNumber[smallNumberIndex] - '0') + (largerNumber[largeNumberIndex] - '0') + carry;
            
            reverseSum += (digitSum % 10) + '0';
            carry = digitSum / 10;
        }

        for(; largeNumberIndex >= 0; largeNumberIndex--) {
            digitSum = (largerNumber[largeNumberIndex] - '0') + carry;
            reverseSum += (digitSum % 10) + '0';
            carry = digitSum / 10;
        }
        if(carry) {
            reverseSum += carry;
        }

        std::reverse(reverseSum.begin(), reverseSum.end());
        cout << reverseSum << endl;
    }
    return 0;
}
