#include <iostream>
using namespace std;

int main() {
    int taille;

    // Demander à l'utilisateur de saisir la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    // Créer un tableau dynamique d'entiers de taille définie par l'utilisateur
    int* tableau = new int[taille];

    // Demander à l'utilisateur de saisir les éléments du tableau
    cout << "Entrez les " << taille << " entiers : ";
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }

    // Afficher le contenu du tableau
    cout << "Contenu du tableau :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    // Libérer la mémoire allouée pour le tableau dynamique
    delete[] tableau;

    return 0;
}
