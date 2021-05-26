#include <iostream>

using namespace std;

void greedyAlgorithm(int **array, int size){

    int max = 0;
    int day = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i][2] == 1 && array[i][1] > max){
            max = array[i][1];
            day = i+1;
        }
    }
    if (day!=0){
        for (int i = 0; i < size; ++i) {
            array[i][2]-=1;
        }
        cout << day;
        return greedyAlgorithm(array, size);
    }

    int minCost = 999;
    int maxDay = 0;
    int ii = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i][2] >0){
            if (array[i][2] > maxDay){
                maxDay = array[i][2];
                minCost = array[i][1];
                ii = i+1;
            } else if(array[i][2] == maxDay){
                if (array[i][1] < minCost){
                    maxDay = array[i][2];
                    minCost = array[i][1];
                    ii = i+1;
                }
            }
        }

        array[i][2]-=1;
    }
    if (ii!=0){
        array[ii-1][2] = 0;
        cout << ii;
        return greedyAlgorithm(array, size);
    }



}

int main() {
    int x;
    cin>>x;
    int **array = new int*[x];

    for (int i = 0; i < x; ++i) {
        array[i] = new int[3];
        for (int j = 0; j < 3; ++j) {
            cin >> array[i][j];
        }
    }

    greedyAlgorithm(array, x);

    return 0;
}