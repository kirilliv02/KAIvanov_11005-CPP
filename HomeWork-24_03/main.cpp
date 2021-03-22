#include <iostream>

using namespace std;

struct MaxHeap {
    int *array;
    int size;
    int maxSize;

    MaxHeap(int maxSize) {
        this->maxSize = maxSize;
        size = 0;
        array = new int[maxSize];
    }

    int GetMax() {
        return array[0];
    }

    int ExtractMax() {
        int result = array[0];
        array[0] = array[size - 1];
        size--;
        SiftDown(0);
        return result;
    }

    void Insert(int p) {
        if (size < maxSize) {
            array[size] = p;
            SiftUp(size);
            size++;
        } else {
            cout << "Massive is full" << endl;
        }
    }

    int Parent(int i) { return (i - 1) / 2; }

    int LeftChild(int i) { return 2 * i + 1; }

    int RightChild(int i) { return 2 * i + 2; }

    void SiftUp(int i) {
        while (i > 0 && array[i] > array[Parent(i)]) {
            int k = array[i];
            array[i] = array[Parent(i)];
            array[Parent(i)] = k;
            i = Parent(i);
        }
    }

    void SiftDown(int i) {
        int maxIndex = i;
        if (array[LeftChild(i)] > array[i] && LeftChild(i) < size) maxIndex = LeftChild(i);
        if (array[RightChild(i)] > array[i] && RightChild(i) < size) maxIndex = RightChild(i);

        if (maxIndex != i) {
            int k = array[i];
            array[i] = array[maxIndex];
            array[maxIndex] = k;
            SiftDown(maxIndex);
        }

    }

    void printAll() {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int *HeapSort(int *array, int size) {
    int *a = new int[size];
    MaxHeap *maxHeap = new MaxHeap(size);
    for (int i = 0; i < size; ++i) {
        maxHeap->Insert(array[i]);
    }
    for (int i = 0; i < size; ++i) {
        a[i] = maxHeap->ExtractMax();
    }

    return a;

}

int main() {
    MaxHeap *maxHeap = new MaxHeap(11);
    maxHeap->Insert(5);
    maxHeap->Insert(3);
    maxHeap->Insert(7);
    maxHeap->Insert(2);
    maxHeap->Insert(1);
    maxHeap->Insert(8);
    maxHeap->Insert(4);
    maxHeap->printAll();

    cout << maxHeap->ExtractMax() << endl;
    maxHeap->printAll();

    int *b = HeapSort(maxHeap->array, maxHeap->size);

    for (int i = 0; i < maxHeap->size; i++) {
        cout << b[i] << " ";
    }


    return 1;
}
