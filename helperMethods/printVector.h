#include <iostream>
#include <vector>

template <typename T>
void printVector(std::vector<T> &v) {
    std::cout << "[ ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "]";
}
