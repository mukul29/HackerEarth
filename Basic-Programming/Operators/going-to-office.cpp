// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/

#include <iostream>

using namespace std;

int main() {
    long distance;
    cin >> distance;

    long onlineBaseFare, onlineBaseFareDistance, onlineFarePerKM;
    long classicSpeed, classicBaseFare, classicCostPerMin, classicCostPerKM;

    cin >> onlineBaseFare >> onlineBaseFareDistance >> onlineFarePerKM;
    cin >> classicSpeed >> classicBaseFare >> classicCostPerMin >> classicCostPerKM;

    long onlineTaxiTotalFare; 
    if(distance > onlineBaseFareDistance) {
        onlineTaxiTotalFare = onlineBaseFare + onlineFarePerKM * (distance - onlineBaseFareDistance);
    } else {
        onlineTaxiTotalFare = onlineBaseFare;
    }

    // cout << "o " << onlineTaxiTotalFare;
    long classicTaxiTotalFare = classicBaseFare + (distance / classicSpeed) * classicCostPerMin + distance * classicCostPerKM;
    // cout << "c " << classicTaxiTotalFare;

    if(onlineTaxiTotalFare <= classicTaxiTotalFare) {
        cout << "Online Taxi" << endl;
    } else {
        cout << "Classic Taxi" << endl;
    }
    return 0;
}
