//
// @author Fuxin
// @since  2023/8/13
//

#include <iostream>

using namespace std;

void npe() {
    // ��ָ�룬����ֱ�ӷ��ʵ�
    int *p = NULL;
    *p = 10;
}

void illegalPointer() {
    // Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�
    int *illegalPtr = (int *) 0x1000;
    cout << *illegalPtr << endl;
}

void constPtr() {
    int a = 10;
    int b = 20;

    // ������ָ��
    const int *p = &a;
//    *p = b; // ���뱨��
    p = &b;

    // ָ�볣��
    int *const cp = &a;
    *cp = b;
//    cp = &b; // ���뱨��

    // ������ָ�볣��
    const int *const ccp = &a;
//    *ccp = b; // ���뱨��
//    ccp = &b; // ���뱨��

}

int main() {
    int a = 10, b = 20;
    cout << "a=" << a << ", b=" << b << endl;

    // ����ָ��ָ������ĵ�ַ
    int *ap = &a, *bp = &b;
    cout << "&a=" << &a << ", &b=" << &b << endl;
    cout << "ap=" << ap << ", bp=" << bp << endl;

    // ʹ��ָ��
    cout << "*ap=" << *ap << ", *bp=" << *bp << endl;

    // ָ��ռ�õ��ڴ�
    cout << "sizeof(*ap)=" << sizeof(ap) << ", sizeof(*bp)=" << sizeof(bp) << endl;

    // ָ��������
    int arr[] = {1, 2, 3, 4};
    int *pInt = arr; // arr �����׵�ַ
    cout << "ָ����ʵ�һ��Ԫ��: " << *pInt << endl;
    for (int i = 0; i < 4; ++i) { // ʹ��ָ���������
        cout << "ָ����ʵ� " << i << " ��Ԫ��: " << *pInt++ << endl;
    }

    return 0;
}
