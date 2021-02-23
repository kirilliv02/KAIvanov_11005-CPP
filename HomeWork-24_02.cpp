#include <iostream>

using namespace std;

void create(int *a, int size) {
    cout << "Enter array: ";
    for (int *i = a; i < a + size; ++i) {
        cin >> *i;
    }
}

void printArray(int *a, int size) {
    for (int *i = a; i < a + size; i++) {
        cout << *i << " ";
    }
    cout << endl;
}

//1
void sum(int *a, int size) {
    int sum = 0;
    for (int *i = a; i < a + size; i++) {
        sum = sum + *i;
    }
    cout << sum << endl;
}

//2
void plusArrays(const int *a, const int *b, int *c, int sizeA, int sizeB) {
    for (int i = 0; i < sizeA; i++) *(c + i) = *(a + i);
    for (int i = 0; i < sizeB; i++) *(c + sizeA + i) = *(b + i);
}

//3
void sort(int *a, int size) {
    for (int *i = a; i < a + size - 1; ++i) {
        for (int *j = i + 1; j < a + size; ++j) {
            if (*j < *i) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int n, m;

    //1
    cout << "Enter n:";
    cin >> n;

    int *a = new int[n];

    create(a, n);
    sum(a, n);

    //2
    cout << "Enter n and m:";
    cin >> n >> m;

    int *b = new int[n];
    int *c = new int[m];
    int *d = new int[n + m];

    create(b, n);
    create(c, m);
    plusArrays(b, c, d, n, m);
    printArray(d, n + m);

    //3
    cout << "Enter n:";
    cin >> n;

    int *e = new int[n];
    create(e, n);
    sort(e, n);
    printArray(e, n);

    return 0;
}
