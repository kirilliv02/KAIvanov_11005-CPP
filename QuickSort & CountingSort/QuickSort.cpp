#include <iostream>

using namespace std;

void QuickSort(int *array, int size, int low, int high) {
    if (size == 0)
        return;

    if (low >= high)
        return;

    int middle = low + (high - low) / 2;
    int opora = array[middle];

    int i = low, j = high;
    while (i <= j) {
        while (array[i] < opora) {
            i++;
        }

        while (array[j] > opora) {
            j--;
        }

        if (i <= j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }

    if (low < j)
        QuickSort(array, size, low, j);

    if (high > i)
        QuickSort(array, size, i, high);
}


int main() {
    int size;
    cin >> size;
    int *a = new int[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    QuickSort(a, size, 0, size - 1);

    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}