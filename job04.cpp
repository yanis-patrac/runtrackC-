#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres
    int nombre1, nombre2;
    
    // Demander à l'utilisateur de saisir les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;
    
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;
    
    // Calcul de l'addition
    int somme = nombre1 + nombre2;
    
    // Affichage du résultat
    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;
    
    return 0;
}
//Ce programme demande à l'utilisateur de saisir deux nombres entiers, 
//puis il les additionne et affiche le résultat de leur addition.