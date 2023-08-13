//
// Created by Fuxin on 2023/8/13.
//
#include <iostream>

int main() {
    std::cout << "sizeof(short) << " << sizeof(short) << std::endl;
    std::cout << "sizeof(long) << " << sizeof(long) << std::endl;
    std::cout << "sizeof(long long) << " << sizeof(long long) << std::endl;
    std::cout << "sizeof(float) << " << sizeof(float) << std::endl;
    std::cout << "sizeof(double) << " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*) << " << sizeof(double *) << std::endl;
    std::cout << "sizeof(bool) << " << sizeof(bool) << std::endl;
    std::cout << "sizeof(bool*) << " << sizeof(bool *) << std::endl;
    std::cout << "sizeof(char) << " << sizeof(char) << std::endl;
    std::cout << "sizeof(char*) << " << sizeof(char *) << std::endl;
    return 0;
}