//#include "iostream"
//
//using namespace std;
//
//void BinarySearch(int **array, int x, int size) {
//    int left = 0;
//    int right = size - 1;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (array[mid][0] == x) {
//            cout << "yes";
//            return;
//        } else if (array[mid][0] > x) {
//            right = mid - 1;
//        } else {
//            left = mid + 1;
//        }
//    }
//    int j = (left + right) / 2;
//    left = 0;
//    right = size - 1;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (array[j][mid] == x) {
//            cout << "yes";
//            return;
//        } else if (array[j][mid] > x) {
//            right = mid - 1;
//        } else {
//            left = mid + 1;
//        }
//    }
//    cout << "no";
//}
//
//
//int main() {
//    int size = 4;
//    int arr[4][4] = {{1,  2,  3,  4},
//                     {5,  6,  7,  8},
//                     {9,  10, 11, 12},
//                     {13, 14, 15, 16},
//    };
//    int **array = new int *[size];
//    for (int i = 0; i < size; ++i) {
//        array[i] = new int[size];
//        for (int j = 0; j < size; ++j) {
//            array[i][j] = arr[i][j];
//        }
//    }
//    int x = 16;
//    BinarySearch(array, x, size);
//    return 0;
//};