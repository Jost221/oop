#include <iostream>
#include <cstdlib>

int main() {
    int n;
    int* arr;
    int* ptr, max;

    std::cout << "input count element: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "not correct value." << std::endl;
        return 1;
    }

    arr = new int[n];

    std::cout << "input element:\n";
    for (ptr = arr; ptr < arr + n; ptr++) {
        std::cin >> *ptr;
    }

    max = *arr; 
    for (ptr = arr + 1; ptr < arr + n; ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }

    std::cout << "max element: " << max << std::endl;

    delete[] arr;

    return 0;
}

