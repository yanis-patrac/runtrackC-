#include <iostream>
using namespace std;

int main() {
    const int tailleMax = 100; // Taille maximale de la chaîne
    char tab[tailleMax + 1]; // +1 pour le caractère de fin de chaîne '\0'
    string chaine;

    cout << "Entrez une chaine de caracteres : ";
    getline(cin, chaine);

    // Copier les caractères de la chaîne dans le tableau
    int i;
    for (i = 0; i < chaine.length(); ++i) {
        tab[i] = chaine[i];
    }

    // Ajouter le caractère de fin de chaîne '\0'
    tab[i] = '\0';

    // Afficher le tableau
    cout << "Le tableau de caracteres est : " << tab << endl;

    return 0;
}
