// O(1)

#include <iostream>

int addUp(int n) {
    return n * (n + 1) / 2;
}

// O(1) because it will always take 3 steps to complete

int main() {
    int result = addUp(100);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
