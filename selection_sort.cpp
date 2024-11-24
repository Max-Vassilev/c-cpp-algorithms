#include <iostream>
#include <vector>
using namespace std;


// We define the function "void" since it won't return result
void selectionSort(vector<int>& array) {
    for (int currentIndex = 0; currentIndex < array.size() - 1; currentIndex++) {
        int smallestIndex = currentIndex;
        for (int comparisonIndex = currentIndex + 1; comparisonIndex < array.size(); comparisonIndex++) {
            if (array[comparisonIndex] < array[smallestIndex]) {
                smallestIndex = comparisonIndex;
            }
        }
        swap(array[currentIndex], array[smallestIndex]);
    }
}

int main() {
    // Dinamic array -> supports the swap() function
    vector<int> array = {64, 34, 25, 12, 22, 11, 90};

    selectionSort(array);

    // Print the sorted array:
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    return 0;
}
