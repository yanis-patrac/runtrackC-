#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        std::cout << "Table de multiplication de " << i << " :" << std::endl;
        for (int j = 1; j <= 10; j++) {
            std::cout << i << " x " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}