#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, input);

    int length = input.length();
    char* begin = &input[0];
    char* end = begin + length - 1;

    for (; begin < end; ++begin, --end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;
    }

    std::cout << "Chaîne inversée : " << input << std::endl;

    return 0;
}