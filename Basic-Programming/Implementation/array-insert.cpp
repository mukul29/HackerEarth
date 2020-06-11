// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-insert/

#include <iostream>

using namespace std;

// void printArray(int arr[], int size) {
//     cout << "[ ";
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "]" << endl;
// }

int main() {
    // N => size of array
    // Q => number of queries
    int N, Q;
    cin >> N >> Q;

    int* array = new int[N];
    
    for(int i = 0; i < N; i++) {
        cin >> array[i];
    }

    int queryType;
    int X;
    int Y;
    for(int i = 0; i < Q; i++) {
        cin >> queryType;
        cin >> X;
        cin >> Y;

        if(queryType == 1) {
            if(X >= 0 && X < N) {
                array[X] = Y;
            }
        }
        if(queryType == 2) {
            int sum = 0;
            if( (X >= 0 && X < N) && (Y >= 0 && Y < N) ) {
                for(int j = X; j <= Y; j++) {
                    sum += array[j];
                }
                cout << sum << endl;
            } else {
                cout << "-1";
            }
        }
        // printArray(array, N);
    }

    // freeing up memory
    delete[] array;
    return 0;
}
