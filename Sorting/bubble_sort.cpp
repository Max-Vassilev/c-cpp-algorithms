#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& array) {
    int arraySize = array.size();
    for (int sortedBoundary = 0; sortedBoundary < arraySize - 1; sortedBoundary++) {
        for (int currentIndex = 0; currentIndex < arraySize - sortedBoundary - 1; currentIndex++) {
            if (array[currentIndex] > array[currentIndex + 1]) {
                swap(array[currentIndex], array[currentIndex + 1]);
            }
        }
    }
}

int main() {
    vector<int> array = {64, 34, 25, 12, 22, 11, 90};

    bubbleSort(array);

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    return 0;
}
