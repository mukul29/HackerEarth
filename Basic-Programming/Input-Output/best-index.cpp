// Link to the problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/

#include <iostream>
#include <limits>

using namespace std;


long getFirstSpecialSum(int array[], const int& size, long &outCount, long &outPrevRemainingElements) {
    long specialSum = 0;
    int count = 1;
    int index = 0;
    while (index + count <= size)
    {
        for(int j = index;j < index + count; j++) {
            specialSum += array[j];
        }
        index = index + count;
        count++;
    }

    outCount = count - 1;
    outPrevRemainingElements = size - index;

    return specialSum;
}

long getSpecialSum(int array[], const int& size, const int& index, const long& prevSpecialSum, long& prevRemainingElements, long& prevCount) {

    long currentSpecialSum = prevSpecialSum - array[index - 1];
    if (prevRemainingElements > 0) {
        currentSpecialSum += array[size - prevRemainingElements];
        prevRemainingElements--;
    } else {
        prevCount--;
        prevRemainingElements = prevCount;
        for(int i = size-1; i >= size - prevCount; i-- ) {
            currentSpecialSum -= array[i];
        }
    }
    return currentSpecialSum;
}

int main()
{
    int N;
    cin >> N;

    int *array = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    long prevCount = 0;
    long prevRemainingElements = 0;
    long maxSpecialSum = getFirstSpecialSum(array, N, prevCount, prevRemainingElements);
    long prevSpecialSum = maxSpecialSum;
    long specialSum = 0;
    for (int i = 1; i < N; i++)
    {
        specialSum = 0;
        specialSum = getSpecialSum(array, N, i, prevSpecialSum, prevRemainingElements, prevCount);
        if(specialSum > maxSpecialSum) {
            maxSpecialSum = specialSum;
        }
        prevSpecialSum = specialSum;
    }
    cout << maxSpecialSum << endl;
    delete[] array;
    return 0;
}
