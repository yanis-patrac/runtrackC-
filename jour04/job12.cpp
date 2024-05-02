#include <iostream>
#include <string>
using namespace std;

// Déclaration de la structure Staff
struct Staff {
    string nom;
    string prenom;
};

// Déclaration de la structure Etudiant
struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    // Initialisation de la structure Staff avec Alicia Cordial et Pierre Malardier
    Staff staff1 = {"Cordial", "Alicia"};
    Staff staff2 = {"Malardier", "Pierre"};

    // Affichage des prénoms du staff
    cout << "Prenoms du staff :" << endl;
    cout << staff1.prenom << endl;
    cout << staff2.prenom << endl;

    // Déclaration d'un tableau de 3 étudiants
    const int taille = 3;
    Etudiant etudiants[taille];

    // Saisie des noms et prénoms des étudiants par l'utilisateur
    cout << "\nSaisie des noms et prenoms des etudiants :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Nom de l'etudiant " << i + 1 << " : ";
        cin >> etudiants[i].nom;
        cout << "Prenom de l'etudiant " << i + 1 << " : ";
        cin >> etudiants[i].prenom;
    }

    // Affichage des prénoms des étudiants
    cout << "\nPrenoms des etudiants :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << etudiants[i].prenom << endl;
    }

    return 0;
}
