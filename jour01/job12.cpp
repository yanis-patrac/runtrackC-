#include <iostream>

int main() {
    // Déclaration des variables
    int entier, somme = 0;

    // Demander à l'utilisateur de saisir cinq entiers
    std::cout << "Entrez cinq entiers : ";
    
    // Lire les cinq entiers et calculer leur somme
    for (int i = 0; i < 5; ++i) {
        std::cin >> entier;
        somme += entier;
    }

    // Calculer la moyenne en divisant la somme par 5
    double moyenne = static_cast<double>(somme) / 5;

    // Afficher la moyenne
    std::cout << "La moyenne des entiers saisis est : " << moyenne << std::endl;

    return 0;
}


//Dans ce programme, une seule variable ('somme') est utilisée pour calculer la somme des cinq entiers saisis. 
//Ensuite, la moyenne est calculée en divisant cette somme par 5 et affichée. 
//Aucun tableau n'est utilisé pour stocker les entiers saisis, 
//et la somme est mise à jour au fur et à mesure que les entiers sont lus.