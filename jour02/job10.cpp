#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double nombre;

    while (true) {
        cout << "Donnez un nombre : ";
        cin >> nombre;

        if (nombre == 0) {
            cout << "Fin du programme." << endl;
            break;
        } else if (nombre < 0) {
            cout << "Veuillez entrer un nombre positif." << endl;
            continue;
        }

        double racine_carree = sqrt(nombre);
        cout << "La racine carrée de " << nombre << " est : " << racine_carree << endl;
    }

    return 0;
}

//Ce programme demande à l'utilisateur d'entrer un nombre.
// Si ce nombre est égal à 0, le programme se termine.
// Sinon, il vérifie si le nombre est négatif.
// Si c'est le cas, il affiche un message demandant à l'utilisateur d'entrer un nombre positif.
// Sinon, il calcule et affiche la racine carrée du nombre.
// Le programme continue à demander des nombres tant que l'utilisateur n'entre pas 0 pour terminer le programme.