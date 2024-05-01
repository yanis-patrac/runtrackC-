#include <iostream>
using namespace std;

int main() {
    char operation;
    double nombre1, nombre2, resultat;

    cout << "Entrez l'opération (+, -, *, /) : ";
    cin >> operation;

    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez le deuxième nombre : ";
    cin >> nombre2;

    switch(operation) {
        case '+':
            resultat = nombre1 + nombre2;
            cout << "Le résultat de l'addition est : " << resultat << endl;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            cout << "Le résultat de la soustraction est : " << resultat << endl;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            cout << "Le résultat de la multiplication est : " << resultat << endl;
            break;
        case '/':
            if (nombre2 != 0) {
                resultat = nombre1 / nombre2;
                cout << "Le résultat de la division est : " << resultat << endl;
            } else {
                cout << "Erreur : division par zéro n'est pas autorisée." << endl;
            }
            break;
        default:
            cout << "Opération non valide. Veuillez entrer une opération correcte." << endl;
    }

    return 0;
}

//Ce programme demande à l'utilisateur d'entrer une opération (+, -, *, /),
// puis deux nombres. En fonction de l'opération choisie,
// il effectue le calcul approprié et affiche le résultat.
// Si l'utilisateur tente de diviser par zéro, le programme affiche un message d'erreur.





