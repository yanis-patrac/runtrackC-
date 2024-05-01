#include <iostream>
#include <cstdint> // Pour utiliser le type de données uint64_t
using namespace std;

uint64_t factorielle(int n) {
    if (n < 0) {
        cout << "Erreur : Le nombre doit être positif ou nul." << endl;
        return 0;
    }

    if (n == 0) {
        return 1;
    }

    uint64_t resultat = 1; // Utilisation du type de données uint64_t pour stocker de grands nombres
    for (int i = 1; i <= n; ++i) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int nombre;

    cout << "Entrez un nombre entier pour calculer sa factorielle : ";
    cin >> nombre;

    cout << nombre << "! = " << factorielle(nombre) << endl;

    return 0;
}


//Ce programme utilise la fonction factorielle pour calculer la factorielle d'un nombre entier donné n. 
//Il prend en compte les cas où n est négatif (affichant une erreur) ou égal à zéro (retournant 1). 
//Pour stocker de grands nombres,
// il utilise le type de données uint64_t qui garantit une large plage de valeurs entières non signées.