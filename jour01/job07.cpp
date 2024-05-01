#include <iostream>

int main() {
    // Déclaration de la variable pour stocker le nombre saisi
    int nombre;

    // Demander à l'utilisateur de saisir un nombre entier
    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        std::cout << nombre << " est un nombre pair." << std::endl;
    } else {
        std::cout << nombre << " est un nombre impair." << std::endl;
    }

    return 0;
}


//Ce programme demande à l'utilisateur de saisir un nombre entier,
// puis il vérifie si ce nombre est divisible par 2 sans laisser de reste.
// Si c'est le cas, le nombre est pair, sinon il est impair, et affiche le résultat correspondant.