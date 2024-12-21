#include <iostream>
#include <vector>
#include <string>

void bubbleSort(std::vector<std::string>& strings) {
    int n = strings.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strings[j] > strings[j + 1]) {
                std::swap(strings[j], strings[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    std::cout << "input count line: ";
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> strings;

    std::cout << "input lines:\n";
    for (int i = 0; i < n; ++i) {
        std::string line;
        std::getline(std::cin, line);
        strings.push_back(line);
    }

    bubbleSort(strings);

    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
