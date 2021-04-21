//#include "iostream"
//
//using namespace std;
//
//int BinarySearch(int left, int right, int x) {
//    if (x ==0 || x == 1){
//        return x;
//    }
//
//    int mid = (left + right)/2;
//
//    if (mid*mid <= x && (mid+1)*(mid+1) > x){
//        return mid;
//    }
//    if (mid*mid < x){
//        return BinarySearch(mid+1, right, x);
//    }
//    else{
//        return BinarySearch(left, mid-1, x);
//    }
//}
//
//int main() {
//    int x;
//    cin >> x;
//    cout << "Root: " << BinarySearch(1,x,x);
//    return 0;
//}