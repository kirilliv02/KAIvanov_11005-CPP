/*
#include <iostream>

using namespace std;

void CountingSort(int a[], int n)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    int *c = new int[max + 1 - min];
    for (int i = 0; i < max + 1 - min; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        c[a[i] - min] = c[a[i] - min] + 1;
    }
    int i = 0;
    for (int j = min; j < max + 1; j++) {
        while (c[j-min] != 0) {
            a[i] = j;
            c[j-min]--;
            i++;
        }
    }
}

int main() {
    int size;
    cin >> size;
    int *a = new int[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    CountingSort(a, size);

    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }


    return 0;
}*/
