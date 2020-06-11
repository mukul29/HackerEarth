// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/

#include <iostream>

using namespace std;

void clamp(int &n, const int low) {
    if (n < low)
    {
        n = low;
    }
}
int main() {
    int numBricks;
    cin >> numBricks;
    enum person {
        patlu,
        motu
    };
    person p;

    int i = 1;
    while (numBricks > 0) {
        numBricks -= i;
        clamp(numBricks, 0);
        p = patlu;

        if (numBricks > 0)
        {
            numBricks -= i * 2;
            clamp(numBricks, 0);
            p = motu;
        }

        i++;
    }

    switch (p) {
        case patlu:
            cout << "Patlu";
            break;
        case motu:
            cout << "Motu";
            break;
    }

    return 0;
}
