//
// @author Fuxin
// @since  2023/8/13
//

#include <iostream>

using namespace std;

void npe() {
    // 空指针，不能直接访问的
    int *p = NULL;
    *p = 10;
}

void illegalPointer() {
    // 野指针：指针变量指向非法的内存空间
    int *illegalPtr = (int *) 0x1000;
    cout << *illegalPtr << endl;
}

void constPtr() {
    int a = 10;
    int b = 20;

    // 常量的指针
    const int *p = &a;
//    *p = b; // 编译报错
    p = &b;

    // 指针常量
    int *const cp = &a;
    *cp = b;
//    cp = &b; // 编译报错

    // 常量的指针常量
    const int *const ccp = &a;
//    *ccp = b; // 编译报错
//    ccp = &b; // 编译报错

}

int main() {
    int a = 10, b = 20;
    cout << "a=" << a << ", b=" << b << endl;

    // 定义指针指向变量的地址
    int *ap = &a, *bp = &b;
    cout << "&a=" << &a << ", &b=" << &b << endl;
    cout << "ap=" << ap << ", bp=" << bp << endl;

    // 使用指针
    cout << "*ap=" << *ap << ", *bp=" << *bp << endl;

    // 指针占用的内存
    cout << "sizeof(*ap)=" << sizeof(ap) << ", sizeof(*bp)=" << sizeof(bp) << endl;

    // 指针与数组
    int arr[] = {1, 2, 3, 4};
    int *pInt = arr; // arr 就是首地址
    cout << "指针访问第一个元素: " << *pInt << endl;
    for (int i = 0; i < 4; ++i) { // 使用指针遍历数组
        cout << "指针访问第 " << i << " 个元素: " << *pInt++ << endl;
    }

    return 0;
}
