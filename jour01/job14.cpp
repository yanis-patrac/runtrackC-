#include <iostream>

int main() {
    // Déclaration des variables
    int nombre, nombreInverse = 0;

    // Demander à l'utilisateur de saisir un nombre
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    // Inverser le nombre en utilisant l'opérateur modulo (%) et la division entière (/)
    while (nombre != 0) {
        int chiffre = nombre % 10; // Extraire le dernier chiffre du nombre
        nombreInverse = nombreInverse * 10 + chiffre; // Ajouter ce chiffre à la fin du nombre inversé
        nombre = nombre / 10; // Supprimer le dernier chiffre du nombre
    }

    // Afficher le nombre inversé
    std::cout << "Le nombre inverse est : " << nombreInverse << std::endl;

    return 0;
}


//Ce programme demande à l'utilisateur de saisir un nombre. 
//Ensuite, il utilise une boucle while pour inverser ce nombre en extrayant le dernier chiffre à chaque itération,
// en l'ajoutant au nombre inversé et en supprimant ce chiffre du nombre initial.
// Une fois le nombre inversé obtenu, il l'affiche à l'utilisateur.





