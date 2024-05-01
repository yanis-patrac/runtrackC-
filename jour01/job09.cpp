#include <iostream>

int main() {
    // Déclaration des variables pour stocker les trois entiers
    int entier1, entier2, entier3;

    // Demander à l'utilisateur de saisir les trois entiers
    std::cout << "Entrez le premier entier : ";
    std::cin >> entier1;

    std::cout << "Entrez le deuxième entier : ";
    std::cin >> entier2;

    std::cout << "Entrez le troisième entier : ";
    std::cin >> entier3;

    // Déterminer le plus grand des trois entiers
    int plusGrand = entier1; // On suppose que le premier entier est le plus grand au départ

    if (entier2 > plusGrand) {
        plusGrand = entier2;
    }

    if (entier3 > plusGrand) {
        plusGrand = entier3;
    }

    // Afficher le plus grand des trois entiers
    std::cout << "Le plus grand des trois entiers est : " << plusGrand << std::endl;

    return 0;
}

//ce programme demande à l'utilisateur de saisir trois entiers,
// puis il compare ces entiers pour déterminer le plus grand d'entre eux. 
//Enfin, il affiche le résultat correspondant.