// O(log n)

#include <iostream>
#include <cmath>

int logFunc(int n) {
    if (n <= 1) return 0;
    n = n / 2;

    return 1 + logFunc(n);
}

int main() {
    int n = 8; 

    // 2³ = 8 ==> log₂(8) = 3
    // It will print 3 because log₂(8) = 3
    // So the time complexity is O(log n)
    std::cout << logFunc(n) << std::endl;
    return 0;
}
