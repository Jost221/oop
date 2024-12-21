#include <iostream>
#include <string>

int main() {
    std::string input;
    char targetChar = 'S';
    int count = 0;

    std::cout << "input string: ";
    std::getline(std::cin, input);

    for (char c : input) {
        if (c == targetChar) {
            count++;
        }
    }

    std::cout << "count letter" << targetChar << "': " << count << std::endl;

    return 0;
}
