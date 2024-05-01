#include <iostream>
using namespace std;

int main() {
    int nombre, a, b;

    cout << "Entrez un entier : ";
    cin >> nombre;

    cout << "Entrez la valeur de a : ";
    cin >> a;

    cout << "Entrez la valeur de b : ";
    cin >> b;

    if (a >= b) {
        cout << "La valeur de a doit être strictement inférieure à la valeur de b." << endl;
        return 1;
    }

    if (nombre >= a && nombre <= b) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}


//Ce programme demande à l'utilisateur d'entrer un entier, puis les valeurs a et b.
// Ensuite, il vérifie si a est strictement inférieur à b. 
//Si c'est le cas, il vérifie si l'entier entré par l'utilisateur est compris entre a et b (bornes incluses).
// Si oui, il affiche "GAGNE", sinon il affiche "PERDU".