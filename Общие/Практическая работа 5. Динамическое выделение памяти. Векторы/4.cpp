#include <iostream>
#include <vector>

double determinant(const std::vector<std::vector<double>>& matrix, int n) {
    if (n == 1) {
        return matrix[0][0];
    }

    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    double det = 0.0;
    for (int col = 0; col < n; ++col) {
        std::vector<std::vector<double>> subMatrix(n - 1, std::vector<double>(n - 1));
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j < col) {
                    subMatrix[i - 1][j] = matrix[i][j];
                } else if (j > col) {
                    subMatrix[i - 1][j - 1] = matrix[i][j];
                }
            }
        }
        det += (col % 2 == 0 ? 1 : -1) * matrix[0][col] * determinant(subMatrix, n - 1);
    }

    return det;
}

int main() {
    int n;
    std::cout << "count line and column: ";
    std::cin >> n;

    std::vector<std::vector<double>> matrix(n, std::vector<double>(n));

    std::cout << "input element:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    double det = determinant(matrix, n);
    std::cout << "deteminant is: " << det << std::endl;

    return 0;
}
