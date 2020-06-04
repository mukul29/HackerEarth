// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int size;
    cin >> size;

    long long product = 1;
    int num;
    for (int i = 0; i < size; i++) {
        cin >> num;
        product = (product * num) % ((int)pow(10, 9) + 7);
    }
    cout << product;
    return 0;
}
