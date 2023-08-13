#include "iostream"
using namespace std;

#define DAY 7  // 宏常量

int main() {
    cout << "#define DAY: " << DAY << endl;

    const int const_int = 1;
    cout << "const_int: " << const_int << endl;
//    const_int = 2 // 编译不通过

    return 0;
}