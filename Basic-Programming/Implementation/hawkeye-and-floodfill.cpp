// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/hawkeye-and-floodfill/

#include <iostream>

using namespace std;

void initializeBoardWithPower(int** board, int size, const int& targetX, const int& targetY, const int& p) {
    board[targetX][targetY] = p; 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(i == targetX && j == targetY) {
                continue;
            }
            board[i][j] = p - max(abs(i - targetX), abs(j - targetY));
            if(board[i][j] < 0) {
                board[i][j] = 0;
            }
        }
    }
}
void printBoard(int** board, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cin >> size;
    int **board = new int*[size];
    for(int i = 0; i < size; i++) {
        board[i] = new int[size];
    }

    int i, j, p;
    cin >> i >> j >> p;
    initializeBoardWithPower(board, size, i, j, p);
    printBoard(board, size);

    // freeing up memory
    for(int i = 0; i < size; i++) {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}
