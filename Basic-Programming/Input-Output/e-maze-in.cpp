// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/

#include <iostream>

using namespace std;

class Coordinate {
    int x = 0;
    int y = 0;

    public:
    void goLeft() {
        x--;
    }

    void goRight() {
        x++;
    }

    void goUp() {
        y++;
    }

    void goDown() {
        y--;
    }

    void printCoordinates() {
        cout << x << " " << y;
    }
};

int main() {
    Coordinate c;
    string input;
    getline(cin, input);
    for(int i = 0; i < input.length(); i++) {
        switch(input[i]) {
            case 'L':
                c.goLeft();
                break;
            case 'R':
                c.goRight();
                break;
            case 'U':
                c.goUp();
                break;
            case 'D':
                c.goDown();
                break;
        }
    }
    c.printCoordinates();
    return 0;
}
