#include <iostream>

int main() {
    // Déclaration des variables pour stocker les entiers
    int n, m;

    // Demander à l'utilisateur de saisir les deux entiers
    std::cout << "Entrez le premier entier (n) : ";
    std::cin >> n;

    std::cout << "Entrez le deuxième entier (m) : ";
    std::cin >> m;

    // Afficher les entiers avant l'échange
    std::cout << "Avant l'echange :" << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    // Échanger les valeurs des entiers en utilisant une variable temporaire
    int temp = n;
    n = m;
    m = temp;

    // Afficher les entiers après l'échange
    std::cout << "Apres l'echange :" << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    return 0;
}



//ce programme demande à l'utilisateur de saisir deux entiers,
// puis il affiche les entiers avant l'échange.
// Ensuite, il échange les valeurs des entiers en utilisant une variable temporaire
// et affiche les entiers après l'échange.