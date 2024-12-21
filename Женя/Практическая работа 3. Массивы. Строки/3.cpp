#include <iostream>
#include <string>

int main() {
    std::string input;
    char targetChar = 'Y'; // Yoogin - женя
    int count = 0;

    std::cout << "input line: ";
    std::getline(std::cin, input);

    for (char c : input) {
        if (c == targetChar) {
            count++;
        }
    }

    std::cout << "count letter" << targetChar << "': " << count << std::endl;

    return 0;
}
