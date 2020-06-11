// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/

#include <iostream>
#include <cmath>

using namespace std;

class Lift {
    uint8_t currentFloor;
    
    public:
    Lift(uint8_t initialFloor) {
        currentFloor = initialFloor;
    }

    uint8_t distanceTo(uint8_t floor) {
        return (uint8_t) abs(currentFloor - floor);
    }

    void goToFloor(uint8_t floor) {
        currentFloor = floor;
    }
};

int main() {
    int numCases;
    cin >> numCases;
    
    Lift liftA(0);
    Lift liftB(7);

    int floorNum;
    for (int i = 0; i < numCases; i++) {
        cin >> floorNum;

        if(liftA.distanceTo(floorNum) <= liftB.distanceTo(floorNum)) {
            cout << "A" << endl;
            liftA.goToFloor(floorNum);
        } else {
            cout << "B" << endl;
            liftB.goToFloor(floorNum);
        }
    }
    return 0;
}
