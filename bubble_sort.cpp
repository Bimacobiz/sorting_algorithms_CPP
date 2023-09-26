#include <iostream>
#include <vector>

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        std::cout << "After pass " << i + 1 << ": ";
        printArray(arr);

        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> array = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

    std::cout << "Original array: ";
    printArray(array);
    std::cout << std::endl;

    bubbleSort(array);

    std::cout << "Array sorted successfully." << std::endl;

    return 0;
}

