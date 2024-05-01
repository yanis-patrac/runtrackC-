#include <iostream>
using namespace std;

int main() {
    const int taille = 10;
    int T[taille];
    int count = 0;

    // Demander à l'utilisateur de saisir 10 entiers
    cout << "Entrez 10 entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Entrez l'entier " << i+1 << " : ";
        cin >> T[i];
    }

    // Compter le nombre d'entiers supérieurs ou égaux à 5
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            count++;
        }
    }

    // Afficher le résultat
    cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << count << endl;

    return 0;
}
