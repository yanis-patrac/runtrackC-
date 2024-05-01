#include <iostream>
using namespace std;

int main() {
    double note;

    cout << "Entrez votre note (entre 0 et 20) : ";
    cin >> note;

    if (note >= 0 && note <= 20) {
        if (note > 10) {
            cout << "Validé" << endl;
        } else {
            cout << "Non validé" << endl;
        }
    } else {
        cout << "La note doit être comprise entre 0 et 20." << endl;
    }

    return 0;
}


//Ce programme demande à l'utilisateur de saisir une note.
// Ensuite, il vérifie si la note est comprise entre 0 et 20.
// Si c'est le cas, il vérifie si la note est supérieure à 10 et affiche "Validé" si c'est le cas,
// sinon il affiche "Non validé". Si la note saisie est en dehors de la plage autorisée, 
//il affiche un message d'erreur.