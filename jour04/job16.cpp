#include <iostream>
using namespace std;

int trouverMax(int* tableau, int taille) {
    if (taille == 0) {
        // Si le tableau est vide, retourner une valeur par défaut
        return INT_MIN; // INT_MIN est la valeur minimale d'un int
    }

    int max = tableau[0]; // Initialisation du maximum avec le premier élément du tableau

    // Parcours du tableau pour trouver le maximum
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    return max;
}

int main() {
    int tableau[] = {5, 8, 3, 9, 2};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    int maximum = trouverMax(tableau, taille);
    cout << "La valeur maximale du tableau est : " << maximum << endl;

    return 0;
}
