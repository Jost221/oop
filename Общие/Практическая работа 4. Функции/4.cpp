#include <iostream>

void inputArray(int*& arr, int& size) {
    std::cout << "input count element (<20): ";
    std::cin >> size;

    if (size > 20) {
        size = 0;
        return;
    }

    arr = new int[size];
    std::cout << "input " << size << " element: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

int main() {
    int* array = nullptr;
    int n;

    inputArray(array, n);

    if (n > 0) {
        for (int i = 0; i < n; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "incorrcet input " << std::endl;
    }

    delete[] array;
    return 0;
}
