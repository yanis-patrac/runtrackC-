#include <iostream>
#include <cmath>

bool isNarcissistic(int number) {
    int length = std::to_string(number).length();
    int sum = 0;
    int temp = number;
    while (temp > 0) {
        sum += std::pow(temp % 10, length);
        temp /= 10;
    }
    return sum == number;
}

int main() {
    int number;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> number;
    if (isNarcissistic(number)) {
        std::cout << number << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << number << " n'est pas un nombre narcissique." << std::endl;
    }
    return 0;
}