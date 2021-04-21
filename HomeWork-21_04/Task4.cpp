#include "iostream"

using namespace std;

int BinarySearch(int **array, int size) {
    if (size % 2 == 0) {
        return -1;
    }
    int midj = (size - 1) / 2;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i][midj];
    }
    int mid = sum/size;
    for (int i = 0; i < size; ++i) {
        if (array[i][midj]*2 >= mid && array[i][midj]<= mid){
            return array[i][midj];
        }
    }
    return -1;
}

int main() {
    int size = 3;
    int arr[3][3] = {
            {5,  6,  8},
            {13, 14, 16},
            {1,  2,  3}
    };
    int **array = new int *[size];
    for (int i = 0; i < size; ++i) {
        array[i] = new int[size];
        for (int j = 0; j < size; ++j) {
            array[i][j] = arr[i][j];
        }
    }
    cout << BinarySearch(array, size);
    return 0;
};