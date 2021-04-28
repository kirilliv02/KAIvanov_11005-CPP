#include <iostream>

using namespace std;

int method(int n, int m, int size) {
    if (n == 1 || m == size)
        return 1;
    int x = 0;
    if (n - 1 > 0) {
        x += method(n - 1, m, size);
    }
    if (m + 1 <= size) {
        x += method(n, m + 1, size);
    }
    return x;

}

int main() {
    int m, n;
    cin >> m >> n;
    cout << method(n, 1, m);
    return 0;
}
