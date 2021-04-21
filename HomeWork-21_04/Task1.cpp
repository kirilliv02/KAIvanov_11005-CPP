//#include <iostream>
//
//using namespace std;
//
//void BinarySearch(int *array, int x, int left, int right, int size) {
//    int mid = left + (right - left) / 2;
//    if (left >= right && array[mid] != x) {
//        cout << "no";
//        return;
//    }
//    if (array[mid] == x)
//    {
//        left = mid;
//        right = mid;
//        while (left != 0 && array[left - 1] == x) {
//            left = left - 1;
//        }
//        while (right != size - 1 && array[right + 1] == x) {
//            right = right + 1;
//        }
//        cout << left << " " << right;
//    } else if (array[mid] > x)
//        return BinarySearch(array, x, left, mid-1, size);
//    else
//        return BinarySearch(array, x, mid + 1, right, size);
//}
//
//
//int main() {
//    int size = 28;
//    int array[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 5, 5, 5, 5, 6, 9, 9, 9, 9, 9, 9};
//    BinarySearch(array, 4, 0, size, size);
//    return 1;
//}
