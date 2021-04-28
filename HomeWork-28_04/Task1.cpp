//#include <iostream>
//
//using namespace std;
//
//int length(int x) {
//    int length = 1;
//    while (x > 9) {
//        length += 1;
//        x /= 10;
//    }
//    return length;
//}
//
//int *massive(int x) {
//    int size = length(x);
//    int *a = new int[size];
//    for (int i = 0; i < size; i++) {
//        a[size - i - 1] = x % 10;
//        x /= 10;
//    }
//    return a;
//}
//
//int fact(int x) {
//    if (x > 1) {
//        return x * fact(x - 1);
//    }
//}
//
//int numbers(int x){
//    int size = length(x);
//    int sizex = fact(x);
//    int *a = new int[size];
//    for (int i = 0; i < sizex; ++i) {
//
//    }
//}
//
//
//
//bool method(int a, int b, int c) {
//    int *arrA = massive(a);
//    int *arrB = massive(b);
//    int sizeA = length(a);
//    int sizeB = length(b);
//    int factA = fact(a);
//    int factB = fact(b);
//
//
//    return false;
//}
//
//int main() {
//    int a, b, c;
////    cin >> a >> b >> c;
////    cout << method(a, b, c);
//    cin >> a;
//    cout << fact(a) << endl;
//    int *arr = massive(a);
//    for (int i = 0; i < length(a); i++) {
//        cout << arr[i];
//    }
//    return 0;
//}
