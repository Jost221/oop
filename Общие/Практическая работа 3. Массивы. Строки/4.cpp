#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Введите количество строк (не более 10): ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов (не более 10): ";
    std::cin >> cols;

    if (rows > 10 || cols > 10) {
        std::cout << "error" << std::endl;
        return 1;
    }

    int matrix[10][10];
    

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int totalElements = rows * cols;
    int sortedArray[100];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sortedArray[i * cols + j] = matrix[i][j];
        }
    }

    for (int i = 0; i < totalElements - 1; ++i) {
        for (int j = 0; j < totalElements - i - 1; ++j) {
            if (sortedArray[j] > sortedArray[j + 1]) {
                int temp = sortedArray[j];
                sortedArray[j] = sortedArray[j + 1];
                sortedArray[j + 1] = temp;
            }
        }
    }

    int spiralMatrix[10][10];
    int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
    int index = 0;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; ++i) {
            spiralMatrix[top][i] = sortedArray[index++];
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            spiralMatrix[i][right] = sortedArray[index++];
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                spiralMatrix[bottom][i] = sortedArray[index++];
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                spiralMatrix[i][left] = sortedArray[index++];
            }
            left++;
        }
    }

 

  for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << spiralMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
