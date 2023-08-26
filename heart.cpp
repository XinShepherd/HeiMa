//
// @author Fuxin
// @since  2023/9/15
//
#include <iostream>

using namespace std;

int main() {
    int max = 66;
    int count = 0;
    while (count < 10) {
        cout << "Please enter a big number: ";
        cin >> max;
        cout << endl;

        // 思路
        // 1. 取中心点位
        // 2. 算出满格的index
        // 3. 递减打印

        int mid = max / 2;
        int fullIdx = mid / 2;
        for (int i = 0; i < fullIdx - 2; i += 2) {
            int middleStart = fullIdx - i - 2;
            int middleEnd = fullIdx + i + 2;
            for (int j = 0; j < max; ++j) {
                if ((j >= middleStart && j <= middleEnd) || (j >= (middleStart + mid) && j <= (middleEnd + mid))) {
                    cout << "+";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int i = 0; i < mid; i += 2) {
            int middleStart = i;
            int middleEnd = max - i;
            for (int j = 0; j < max; ++j) {
                if ((j > middleStart && j < middleEnd)) {
                    cout << "+";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
        count++;
    }

    return 0;
}