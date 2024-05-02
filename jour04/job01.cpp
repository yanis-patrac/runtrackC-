#include <iostream>

int main() {
    int number = 2019;
    int* numberPointer = &number;

    std::cout << "La valeur de 'number' est : " << *numberPointer << std::endl;

    return 0;
}