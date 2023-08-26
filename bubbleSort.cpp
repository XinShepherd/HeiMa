//
// @author Fuxin
// @since  2023/8/26
//
#include "iostream"

using namespace std;

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArr(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {2, 1, 3, 4, 5, 7, 6, 9, 8, 10};

    int len = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, len);

    printArr(arr, len);
    return 0;
}
