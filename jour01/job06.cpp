#include <iostream>

int main() {
    // Déclaration des variables
    int entier;

    // Demander à l'utilisateur de saisir un entier
    std::cout << "Entrez un entier pour afficher sa table de multiplication : ";
    std::cin >> entier;

    // Afficher la table de multiplication de l'entier
    std::cout << "Table de multiplication de " << entier << " :" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << entier << " x " << i << " = " << (entier * i) << std::endl;
    }

    return 0;
}


//Ce programme demande à l'utilisateur de saisir un entier,
// puis il utilise une boucle for pour afficher la table de multiplication de cet entier de 1 à 10. 
//Chaque ligne de la table affiche la multiplication de l'entier
// par le nombre correspondant à l'itération de la boucle.