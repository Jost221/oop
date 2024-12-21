#include <iostream>


int findMax(int a, int b) {
    return (a > b) ? a : b;
}


int findMax(int arr[], int size) {
    int maxNumber = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}
