// O(n)

#include <iostream>

int addUp(int n) {
    int sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// 100 steps

int main() {
    int result = addUp(100);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
