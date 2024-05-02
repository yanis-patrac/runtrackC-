#include <iostream>
#include <string>
using namespace std;

int main() {
    // Déclaration et initialisation du tableau "fruit"
    string fruits[] = {"pomme", "banane", "orange", "fraise", "kiwi"};

    // Affichage du contenu du tableau "fruit"
    cout << "Contenu du tableau 'fruit' :" << endl;
    for (const auto& fruit : fruits) {
        cout << fruit << endl;
    }

    // Demander le nombre de fruits préférés de l'utilisateur
    int taille;
    cout << "Entrez le nombre de vos fruits preferes : ";
    cin >> taille;

    // Création d'un tableau dynamique "favoris" de taille saisie par l'utilisateur
    string* favoris = new string[taille];

    // Demander à l'utilisateur d'entrer ses fruits préférés
    cout << "Entrez vos " << taille << " fruits preferes :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Fruit " << i + 1 << " : ";
        cin >> favoris[i];
    }

    // Affichage du tableau "favoris"
    cout << "Contenu du tableau 'favoris' :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << favoris[i] << endl;
    }

    // Libérer la mémoire allouée pour le tableau dynamique "favoris"
    delete[] favoris;

    return 0;
}
