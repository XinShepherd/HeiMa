//
// @author Fuxin
// @since  2023/9/15
//
#include <iostream>

using namespace std;

int main() {
    cout << endl;
    for (int j = 1; j <= 19; j++) {
        if ((j >= 3 && j <= 8) || (j >= 12 && j <= 17)) {
            cout << "+";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    for (int j = 1; j <= 19; j++) {
        cout << "+";
    }
    cout << endl;

    for (int j = 1; j <= 19; j++) {
        if (j >= 2 && j <= 17) {
            cout << "+";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    for (int j = 1; j <= 19; j++) {
        if (j >= 4 && j <= 16) {
            cout << "+";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    for (int j = 1; j <= 19; j++) {
        if (j >= 6 && j <= 14) {
            cout << "+";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    for (int j = 1; j <= 19; j++) {
        if (j >= 8 && j <= 12) {
            cout << "+";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    for (int j = 1; j <= 19; j++) {
        if (j == 10) {
            cout << "+";
        } else {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}