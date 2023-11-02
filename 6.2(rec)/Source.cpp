#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateArray(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void sortDescending(int arr[], int size, int index) {
    if (index >= size - 1) {
        return; 
    }

    int maxIndex = index;
    for (int i = index + 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    swap(arr[index], arr[maxIndex]); 

    sortDescending(arr, size, index + 1); 
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    const int arrSize = 10;
    int t[arrSize];

    generateArray(t, arrSize, -22, 37);

    cout << "Original array: ";
    printArray(t, arrSize);

    sortDescending(t, arrSize, 0);

    cout << "Sorted in descending order: ";
    printArray(t, arrSize);

    return 0;
}
