#include <iostream>

int main() {
    int rows, cols;
    std::cout << "input count line (< 20): ";
    std::cin >> rows;
    std::cout << "input count rows (< 20): ";
    std::cin >> cols;

    if (rows > 20 || cols > 20) {
        std::cout << "count line and column > 20? eroor." << std::endl;
        return 1;
    }

    int matrix[20][20];
    std::cout << "input element:" << std::endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int minimax = matrix[0][0];

    for (int i = 0; i < rows; ++i) {
        int rowMin = matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
            }
        }
        if (rowMin > minimax) {
            minimax = rowMin;
        }
    }

    std::cout << "max: " << minimax << std::endl;

    return 0;
}
