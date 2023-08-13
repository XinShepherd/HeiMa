#include "iostream"
using namespace std;

int main() {
    char c = 'A';
    cout << "char : " << c << endl;
    cout << "short : " << (short) 123 << endl;
    cout << "int : " << 123 << endl;
    cout << "long : " << 123L << endl;
    cout << "float : " << 123.0f << endl;
    cout << "double : " << 123.0 << endl;
    cout << "bool : " << true << endl;

    string str = "hello world";
    cout << "str : " << str << endl;

    // cin
    cin >> str;
    cout << "cin: " << str << endl;
    return 0;
}
