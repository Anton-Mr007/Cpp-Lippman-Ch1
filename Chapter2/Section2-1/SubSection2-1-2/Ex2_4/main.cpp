#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << "unsigned u2 - u: " << u2 - u << std::endl;
    std::cout << "unsigned u - u2: " << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << "int i2 - i: " << i2 - i << std::endl;
    std::cout << "int i - i2: " << i - i2 << std::endl;

    // При смешивании signed и unsigned знаковое преобразуется в беззнаковое
    std::cout << "int i - unsigned u: " << i - u << std::endl;
    std::cout << "unsigned u - int i: " << u - i << std::endl;

    return 0;
}