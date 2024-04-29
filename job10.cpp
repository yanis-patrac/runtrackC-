#include <iostream>

int main() {
    // Déclaration des variables
    double prixHTKilo, nombreKilos, tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT d'un kilo de carottes
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHTKilo;

    // Demander à l'utilisateur de saisir le nombre de kilos de carottes
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombreKilos;

    // Demander à l'utilisateur de saisir le taux de TVA
    std::cout << "Entrez le taux de TVA en pourcentage : ";
    std::cin >> tauxTVA;

    // Calcul du prix TTC
    double prixTTC = (prixHTKilo * nombreKilos) * (1 + tauxTVA / 100.0);

    // Afficher le prix TTC
    std::cout << "Le prix TTC des carottes est de : " << prixTTC << " euros." << std::endl;

    return 0;
}


//Ce programme demande à l'utilisateur de saisir le prix HT d'un kilo de carottes,
// le nombre de kilos de carottes et le taux de TVA en pourcentage.
// Ensuite, il calcule le prix TTC en multipliant le prix HT par le nombre de kilos, 
//en ajoutant la TVA et affiche le résultat.