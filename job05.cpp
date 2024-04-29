#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres
    double nombre1, nombre2;
    
    // Demander à l'utilisateur de saisir les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;
    
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;
    
    // Calcul du produit
    double produit = nombre1 * nombre2;
    
    // Affichage du résultat
    std::cout << "Le produit de " << nombre1 << " et " << nombre2 << " est : " << produit << std::endl;
    
    return 0;
}

//Ce programme demande à l'utilisateur de saisir deux nombres,
// puis il les multiplie ensemble et affiche le résultat de leur produit.