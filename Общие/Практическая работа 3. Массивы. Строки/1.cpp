#include <iostream>

int main() {
    int n;
    std::cout << "input count of value: ";
    std::cin >> n;

    if (n > 20) {
        std::cout << "you need input count < 20" << std::endl;
        return 1;
    }

    int numbers[20];
    std::cout << "input " << n << " values: ";
    
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int maxNumber = numbers[0];
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
            maxIndex = i;
        }
    }

    std::cout << "max value: " << maxNumber << ", his number is: " << maxIndex + 1 << std::endl;

    return 0;
}
