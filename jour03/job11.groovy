#include <iostream>
using namespace std;

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;

    // Parcourir le tableau et additionner les éléments pairs
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) {
            somme += tableau[i];
        }
    }

    return somme;
}

int main() {
    const int taille = 5; // Taille du tableau
    int tableau[taille];

    // Demander à l'utilisateur de saisir les éléments du tableau
    cout << "Entrez " << taille << " entiers pour remplir le tableau :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Calculer la somme des éléments pairs du tableau
    int sommePairs = sommeElementsPairs(tableau, taille);

    // Afficher la somme des éléments pairs
    cout << "La somme des elements pairs du tableau est : " << sommePairs << endl;

    return 0;
}
