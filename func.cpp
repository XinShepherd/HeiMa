//
// @author Fuxin
// @since  2023/8/13
//

#include <iostream>
#include "func/customMath.h++"

using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "&a=" << &a << ", &b=" << &b << endl;

    customMath cm = customMath();
    cm.swap(&a, &b);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "&a=" << &a << ", &b=" << &b << endl;

    return 0;
}