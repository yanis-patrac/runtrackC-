#include <iostream>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int indiceMax = 0;

    // Demander à l'utilisateur de saisir 10 entiers
    cout << "Entrez 10 entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Entrez l'entier " << i+1 << " : ";
        cin >> T[i];
    }

    // Trouver l'indice du plus grand élément dans le tableau
    for (int i = 1; i < taille; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    // Afficher le résultat
    cout << "L'indice du plus grand élément est : " << indiceMax << endl;

    return 0;
}
