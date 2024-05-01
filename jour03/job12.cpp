#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr)); // Initialisation de la graine pour la génération de nombres aléatoires
    const int nombreMystere = rand() % 101; // Génération du nombre mystère entre 0 et 100
    const int nbChances = 5; // Nombre de chances pour le joueur
    int essai, chancesRestantes;

    cout << "Bienvenue dans le jeu du Nombre mystere !" << endl;
    cout << "Vous devez trouver un nombre mystere entre 0 et 100." << endl;
    cout << "Vous avez " << nbChances << " chances pour deviner le nombre." << endl;

    chancesRestantes = nbChances;
    while (chancesRestantes > 0) {
        cout << "Il vous reste " << chancesRestantes << " chance(s)." << endl;
        cout << "Entrez votre proposition : ";
        cin >> essai;

        if (essai == nombreMystere) {
            cout << "Felicitation ! Vous avez trouve le nombre mystere : " << nombreMystere << endl;
            return 0; // Fin du programme
        } else if (essai < nombreMystere) {
            cout << "Le nombre mystere est plus grand." << endl;
        } else {
            cout << "Le nombre mystere est plus petit." << endl;
        }

        chancesRestantes--;
    }

    cout << "Vous avez utilise toutes vos chances. Le nombre mystere etait : " << nombreMystere << endl;
    return 0;
}
