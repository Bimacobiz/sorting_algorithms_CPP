#include <iostream>
#include <vector>

void swapInts(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArray(const std::vector<int> &arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void selectionSort(std::vector<int> &arr) {
    size_t size = arr.size();

    for (size_t i = 0; i < size - 1; i++) {
        size_t currentMin = i;

        for (size_t j = i + 1; j < size; j++) {
            if (arr[j] < arr[currentMin]) {
                currentMin = j;
            }
        }

        if (i != currentMin) {
            swapInts(arr[i], arr[currentMin]);
            printArray(arr);
        }
    }
}

int main() {
    std::vector<int> arr = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

    std::cout << "Original Array: ";
    printArray(arr);

    selectionSort(arr);

    std::cout << "Sorted Array: ";
    printArray(arr);

    return 0;
}

