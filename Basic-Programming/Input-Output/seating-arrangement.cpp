// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/

#include <iostream>

using namespace std;

int main()
{
    int numCases;
    cin >> numCases;

    int testCase;

    string seatType;
    for (int i = 0; i < numCases; i++)
    {
        cin >> testCase;
        switch ((testCase-1) % 12)
        {
            case 0:
            case 5:
            case 6:
            case 11:
                seatType = "WS";
                break;
            case 1:
            case 4:
            case 7:
            case 10:
                seatType = "MS";
                break;
            case 2:
            case 3:
            case 8:
            case 9:
                seatType = "AS";
                break;
        }
        int blockNumber = (testCase-1) / 12;
        int seatNumber = 12 * blockNumber + (11 - (testCase-1) % 12) + 1;
        cout << seatNumber << " " << seatType << endl;
    }
    return 0;
}
